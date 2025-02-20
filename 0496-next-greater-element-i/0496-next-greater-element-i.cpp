class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        for(int i=0;i<n1;i++){
            int num2=-1;
            stack<int> st;
            for(int i=0;i<n2;i++){
                st.push(nums2[i]);
            }
            while(nums1[i]!=st.top()){
                if(st.top()>nums1[i]){
                    num2=st.top();
                }
                st.pop();
            }
            ans.push_back(num2);
        }
        return ans;
    }
};