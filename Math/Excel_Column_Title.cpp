string Solution::convertToTitle(int A) {
    string ans ="";
    while(A>0)
    {
        A--;
        int temp = A%26;
        temp += 65;
        char tmp = temp;
        A = A/26;
        ans.insert(0,1,tmp);
    }
    return ans;
    
}
