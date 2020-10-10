vector<int> Solution::maxone(vector<int> &A, int B) {
    int wL = 0, wR = 0; 
    int nZero = 0;
    int bestWindowWidth = -1;
    vector<int> result;
    int start = 0, end = 0;
    while (wR < A.size())
    {    
        //expand to the right, update '0' count:
        if (nZero <= B){
            if (A[wR] == 0) 
                ++nZero; 
            ++wR;
        }
        
        //shrink from left, update '0' count:
        if (nZero > B){ 
            if (A[wL] == 0) --nZero;
            ++wL;
        }
        
        //update best window:
        if (wR - wL + 1 > bestWindowWidth){
            bestWindowWidth = wR - wL + 1;
            start = wL;
            end = wR;
        }
    }
    for (auto i = start; i<end; ++i)
        result.emplace_back(i);
    return result;
}
