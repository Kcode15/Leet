class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        vector<int> s;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i+1;j<n;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    s.push_back(i);
                    s.push_back(j);
                    break;
                }
            }
        }
        return s;
    }
};