class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, 0); // frequency of chars
        int i = 0, j = 0, maxi = 0, n = s.size();

        while (j < n) {
            freq[s[j]]++;

            // shrink window if duplicate exists
            while (freq[s[j]] > 1) {
                freq[s[i]]--;
                i++;
            }

            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};
