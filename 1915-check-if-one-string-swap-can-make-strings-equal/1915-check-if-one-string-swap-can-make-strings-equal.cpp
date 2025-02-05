class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int count = 0;
        int first = -1, second = -1;
        for (int i = 0; i < n1; i++) {
            if (s1[i] != s2[i]) {
                count++;
                if (count == 1) {
                    first = i;
                }
                else if (count == 2) {
                    second = i;
                } 
                else {
                    return false;
                }
            }
        }
        if (count == 0){
            return true;
        }
        if (count == 2 && s1[first] == s2[second] && s1[second] == s2[first]) {
            return true;
        }
        return false;
    }
};
