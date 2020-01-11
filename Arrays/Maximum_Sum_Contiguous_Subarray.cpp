// This is solution is also known as the Kadane's Algorithm
// Moving from left to right while maintaining the sum of the current subarray, we check at every point whether or not the current element can be added to the current sub array or a new subarray starting from the current element needs to be formed

int Solution::maxSubArray(const vector<int> &A) {
    int curr_sum =A[0], max_sum = curr_sum;
    for(int i=1;i<A.size();i++)
    {
        curr_sum = max(A[i],curr_sum+A[i]);
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}
