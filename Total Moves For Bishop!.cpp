// InterviewBit Practice Problems
// Total Moves For Bishop!
int Solution::solve(int A, int B) {
    int cnt=0;
    cnt += min(8-A,8-B);
    cnt += min(A-1, 8-B);
    cnt += min(A-1, B-1);
    cnt += min(8-A, B-1);
    return cnt;
}
