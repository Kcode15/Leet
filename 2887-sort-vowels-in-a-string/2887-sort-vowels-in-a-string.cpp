class Solution {
public:
    string sortVowels(string s) {
        int n= s.length();
        vector<char> ch;
        string t = s;
        for(int i=0;i<n;i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U' || s[i]=='a'||s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u'){
                ch.push_back(s[i]);
            }
        }
        sort(ch.begin(),ch.end());
        int k = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I' || s[i]=='O'||s[i]=='U' || s[i]=='a'||s[i]=='e'||s[i]=='i' || s[i]=='o'||s[i]=='u'){
                t[i]=ch[k];
                k++;
            }
        }
        return t;
    }
};