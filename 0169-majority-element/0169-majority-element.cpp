class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int count=0;
       int candidate=0;
       for(int num:nums){
            if(num==candidate){
                count++;
            }
            else if(count==0){
                candidate=num;
                count=1;
            }
            else {
                count--;
            }
       }
       count=0;
       for(int num:nums){
            if(num==candidate){
                count++;
            }
       }
       return candidate;
    }
};