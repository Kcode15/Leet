class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans = 0;
        int sum1 = 0,sum2 = 0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                sum1 = sum1 + i;
            }
            else{
                sum2 = sum2 + i;
            }
        }
        ans = sum1 - sum2;
        return ans;
    }
};