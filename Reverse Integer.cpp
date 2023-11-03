class Solution {
public:
    int reverse(int x) {
        int N = x;
        long long rev = 0;
        while(N!=0){
            int d = N%10;
            rev = (rev*10) + d;
            N = N/10;
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return rev;
    }
};
