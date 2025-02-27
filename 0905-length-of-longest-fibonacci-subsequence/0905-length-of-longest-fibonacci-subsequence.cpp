class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> numSet(arr.begin(),arr.end());
        int maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prev = arr[j];
                int curr = arr[i]+arr[j];
                int len=2;
                while(numSet.find(curr)!=numSet.end()){
                    int temp= curr;
                    curr = curr+ prev;
                    prev=temp;
                    len++;
                    maxlen=max(maxlen,len);
                }   
            }
        }
        return maxlen;
    }
};