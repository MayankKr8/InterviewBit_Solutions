int Solution::isPalindrome(int A) {
    string numb = to_string(A);
    int size = (numb.size()%2==0?numb.size()/2:(numb.size()+1)/2);
    for (int i= 0;i<size;i++)
    {
        if(numb[i]!=numb[numb.size()-1-i]) return 0;
    }
    return 1;
}
    

