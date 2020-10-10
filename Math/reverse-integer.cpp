int Solution::reverse(int A) {
    int ans = 0;
    vector<int> dig;
    int flag =1;
    if(A==0) return 0;
    if(A<0)
    {
        A *= -1;
        flag =-1;
    }
    while(A>0)
    {
        int temp  = A%10;
        A = A/10;
        dig.push_back(temp);
    }
    //cout<<dig.size()<<endl;
    for(int i=0;i<dig.size();i++)
    {
        ans += dig[dig.size()-1-i]*pow(10,i);
        if(ans<0) return 0;
    }
    return flag*ans;
    
}
