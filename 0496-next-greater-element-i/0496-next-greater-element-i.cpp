class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        int n = nums2.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty()){
                umap[nums2[i]]=st.top();
            }
            else{
                umap[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int num: nums1){
            int num1=umap[num];
            ans.push_back(num1);
        }
        return ans;
    }
};