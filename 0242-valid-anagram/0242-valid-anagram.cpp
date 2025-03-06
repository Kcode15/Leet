class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if (n1!=n2) {
            return false;
        }
        unordered_map<char, int> freq;
        for (char c1 : s) {
            freq[c1]++;
        }

        for (char c2 : t) {
            if (freq.find(c2) == freq.end() || freq[c2] == 0) {
                return false;
            }
            freq[c2]--;
        }

        return true;
    }
};
