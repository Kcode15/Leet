class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.size();
        int n2 = goal.size();
        if(n1!=n2){
            return false;
        }
        string ans = s+s;
        if(ans.find(goal)!=ans.npos){
            return true;
        }
        return false;

    }
};