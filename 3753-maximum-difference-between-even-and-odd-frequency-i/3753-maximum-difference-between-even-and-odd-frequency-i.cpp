class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        unordered_map<char, int> umap;
        for (char ch : s) {
            umap[ch]++;
        }
        int maxOdd = 1;
        int minEven = n;
        for (auto it: umap) {
            int value = it.second;
            if (value% 2 == 1) {
                maxOdd=max(maxOdd, value);
            } else {
                minEven=min(minEven, value);
            }
        }
        return maxOdd - minEven;
    }
};