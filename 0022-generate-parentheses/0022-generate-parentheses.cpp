class Solution {
public:
    void para(int open,int close,int n,string s,vector<string>& ans){
        if(open+close==n*2){
            ans.push_back(s);
            return;
        }
        if(open<n){
            para(open+1,close,n,s+"(",ans);
        }
        if(close<open){ //close cannot be present without open therefore we need to have some open ( to have close )
            para(open,close+1,n,s+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        para(0,0,n,"",ans);
        return ans;
    }
};