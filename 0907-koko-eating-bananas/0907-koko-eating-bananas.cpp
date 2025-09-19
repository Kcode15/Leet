class Solution {
public:
    long req(vector<int>& nums,int k){
        long total = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            total = total+ceil((double)nums[i]/(double)k);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1,maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        long  high = maxi;
        long  ans = 1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(req(piles,mid)<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};