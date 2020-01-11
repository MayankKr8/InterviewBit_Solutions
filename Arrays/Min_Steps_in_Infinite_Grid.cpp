//simple bruteforce approach where we consider two points at a time and calculate the minimum steps between them under the given moves possible
// We calculate the maximum possible diagonal move towards destination and then cover the rest horizontally/vertically

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    for(int i=1;i<A.size();i++)
    {
        int x_diff = abs(A[i] - A[i-1]);
        int y_diff = abs(B[i] - B[i-1]);
        steps += (x_diff<y_diff?x_diff:y_diff);
        steps += abs(x_diff-y_diff);
    }
    return steps;
}
