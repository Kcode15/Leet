class Solution {
public:
    bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void stringComb(int idx, int n, string& s, vector<string>& ans, vector<vector<string>>& f_ans) {
        if (idx == n) {
            f_ans.push_back(ans);  // Found a valid partition
            return;
        }

        for (int i = idx; i < n; i++) {
            if (isPalindrome(s, idx, i)) {
                string substr = s.substr(idx, i - idx + 1);
                ans.push_back(substr);
                stringComb(i + 1, n, s, ans, f_ans);
                ans.pop_back();  // Backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<string> ans;
        vector<vector<string>> f_ans;
        stringComb(0, n, s, ans, f_ans);
        return f_ans;
    }
};
