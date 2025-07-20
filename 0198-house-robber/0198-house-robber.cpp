class Solution {
public:
    int rob(vector<int>& nums) {
        int n =nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1){
                take = take+prev2;
            }
            int notake = prev;
            int curri = max(take,notake);
            prev2 = prev;
            prev = curri;
            
        }
        return prev;
    }
};