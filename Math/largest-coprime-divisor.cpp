int gcd(int A, int B)
{
    if(A==1) return A;
    if(B==1) return B;
    if(A%B==0)return B;
    if(B%A==0) return A;
    if(A>B) return gcd(A-B,B);
    return gcd(A,B-A);
}
int Solution::cpFact(int A, int B) {
    if (B==0) return 1;
    if(gcd(A,B)==1) return A;
    while(gcd(A,B)!=1)
    {
        A = A/gcd(A,B);
        if(gcd(A,B)==1) return A;
    }
}
