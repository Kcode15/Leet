class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            if(matrix[i][m-1]>=target){
                int k = 0;
                int l = m-1;
                int mid = k+(l-k)/2;
                while(k<=l){
                    if(matrix[i][mid] == target){
                        return true;
                    }
                    else if(matrix[i][mid]>target){
                        l = mid-1;
                    }
                    else{
                        k = mid+1;
                    }
                    mid = k+(l-k)/2;
                }
            }
        }
        return false;
    }
};