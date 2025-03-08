class Solution {
public:
    int minimumRecolors(std::string blocks, int k) {
        int n = blocks.length();
        int minOperations = INT_MAX;
        for (int i = 0; i <= n - k; i++) {
            int whiteCount = 0;
            for (int j = i; j < i + k; j++) {
                if (blocks[j] == 'W') {
                    whiteCount++;
                }
            }
            minOperations = min(minOperations, whiteCount);
        }
        return minOperations;   
    }
};