class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1 != n2){
            return false;
        }

        vector<char> freq1(256, 0); // mapping s -> t
        vector<char> freq2(256, 0); // mapping t -> s

        for(int i = 0; i < n1; i++){
            char c1 = s[i];
            char c2 = t[i];

            if(freq1[c1] == 0 && freq2[c2] == 0){
                // create new mapping
                freq1[c1] = c2;
                freq2[c2] = c1;
            }
            else {

                if(freq1[c1] != c2 || freq2[c2] != c1){
                    return false;
                }
            }
        }
        return true;
    }
};
