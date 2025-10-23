class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(s.size()>2){
            string s1 = "";
            for(int i=0;i<s.size()-1;i++){
                int num = ((s[i]-'0')+(s[i+1]-'0'))%10;
                char ch = num+'0';
                s1.push_back(ch);
            }
            s = s1;
        }
        if(s[0]==s[1]){
            return true;
        }
        return false;
    }
};