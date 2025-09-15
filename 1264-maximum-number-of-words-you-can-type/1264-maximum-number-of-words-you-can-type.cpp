class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n = text.size();
        vector<char> freq(26,0);
        for(int i=0;i<brokenLetters.size();i++){
            freq[brokenLetters[i] - 'a']=1;
        }
        int flag = 0;
        int count =0;
        for(int i=0;i<n;i++){
            if(text[i]!=' '){
                if(freq[text[i] - 'a']==1){
                    flag=1;
                }
            }
            else{
                if(flag==0){
                    count++;
                }
                flag = 0;
            }
        }
        if(flag==0){
            count++;
        }
        return count;
    }
};