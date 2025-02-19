class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string s2 = "";
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '(') {
                if (!st.empty()) {
                    s2 =s2+s[i];
                }
                st.push('(');
            }
            if (s[i]==')') {
                st.pop();
                if (!st.empty()) {
                    s2=s2+s[i];
                }
            }
            i++;
        }
        return s2;
    }
};
