int Solution::gcd(int A, int B) {
    if (A==B) return A;
    if (A==0) return B;
    if (B==0) return A;
    if(A>B) return Solution::gcd(A-B,B);
    return Solution::gcd(A,B-A);
}
