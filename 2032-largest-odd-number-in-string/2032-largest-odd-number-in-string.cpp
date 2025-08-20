class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = num;
        for(int i=n-1;i>=0;i--){
            int r = num[i]-'0';
            if(r%2!=0){
                return ans;
            }
            else{
                ans.erase(i,1);
            }
        }
        return "";
    }
};