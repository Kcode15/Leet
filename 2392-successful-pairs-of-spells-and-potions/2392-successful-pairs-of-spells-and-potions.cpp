class Solution {
public:
    int bs(vector<int>& potions,int target,long long success){
        int n = potions.size();
        int low = 0;
        int high = n-1;
        int idx= -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if((long long)target*potions[mid]>=success){
                idx = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return idx;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n1 = spells.size();
        int n2 = potions.size();
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<n1;i++){
            int idx = bs(potions,spells[i],success);
            if(idx==-1){
                ans.push_back(0);
            }
            else{
                ans.push_back(n2-idx);
            }
        }
        return ans;
    }
};