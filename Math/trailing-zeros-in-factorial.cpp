int Solution::trailingZeroes(int A) {
    int count = 0,num=1, div =5;
    while(num>0)
    {
        num = A/div;
        count += num;
        div *= 5;
    }
    return count;
}
