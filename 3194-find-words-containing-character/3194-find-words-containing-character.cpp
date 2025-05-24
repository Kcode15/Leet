class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();
        for(int i=0;i<n;i++){
            string word =words[i];
            int flag=0;
            for(int j=0;j<word.size();j++){
                if(word[j]==x){
                    flag=1;
                }
            }
            if(flag==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};