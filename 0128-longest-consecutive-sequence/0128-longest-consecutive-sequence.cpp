class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(),nums.end());
        int count = 0;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int length = 1;
                while(st.find(num+length)!=st.end()){
                    length++;
                }
                count = max(count,length);
            }
        }
        return count;
    }
};