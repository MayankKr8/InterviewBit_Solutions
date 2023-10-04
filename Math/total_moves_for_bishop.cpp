int Solution::solve(int A, int B) {
    int ans =0;
    ans += 8 - max(A,B);
    ans += min(A,B) -1;
    ans += min(8-A,B-1);
    ans += min(A-1,8-B);
    return ans;
}
