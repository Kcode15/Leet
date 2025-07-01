class Solution {
public:
    int possibleStringCount(string word) {
    int n = word.size();
    int count=1;
    for(char i=0;i<n;i++){
        if(word[i]==word[i+1]){
        count++;
        }
    } 
    return count;   
    }
};
