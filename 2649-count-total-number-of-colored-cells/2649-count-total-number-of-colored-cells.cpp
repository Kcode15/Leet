class Solution {
public:
    long long coloredCells(int n) {
        long long ans;
        long long r1 = (long long)n * n;
        long long r2 = (long long)(n - 1) * (n - 1);
        ans=r1+r2;
        return ans;
    }
};