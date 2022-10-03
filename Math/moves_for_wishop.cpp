/*
Problem Description

Given the position of a Bishop (A, B) on an 8 * 8 chessboard.

Your task is to count the total number of squares that can be visited by the Bishop in one move.

The position of the Bishop is denoted using row and column number of the chessboard.
*/

int Solution::solve(int A, int B) {
    int ans =0;
    ans += 8 - max(A,B);
    ans += min(A,B) -1;
    ans += min(8-A,B-1);
    ans += min(A-1,8-B);
    return ans;
}
