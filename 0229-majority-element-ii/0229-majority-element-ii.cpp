class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        // There can be atmost 2 elements that can be me whose occurance is greater than n/3
        int count1=0;
        int count2=0;
        int candidate1=0,candidate2=0;
        
        for(int num: nums){
            if(num==candidate1){
                count1++;
            }
            else if(num==candidate2){
                count2++;
            }
            else if(count1==0){
                candidate1=num;
                count1=1;
            }
            else if(count2==0){
                candidate2=num;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
            
        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate1){
                count1++;
            }
            else if(nums[i]==candidate2){
                count2++;
            }
        }
        if(count1>n/3){
            ans.push_back(candidate1);
        }
        if(count2>n/3){
            ans.push_back(candidate2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};