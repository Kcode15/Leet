class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int m = dimensions[0].size();
        double maxi1 = 0;
        int maxArea = 0;
        for(int i=0;i<n;i++){
            int a1 = dimensions[i][0];
            int a2 = dimensions[i][1];
            double r1 = sqrt(pow(a1,2)+pow(a2,2));
            int area = a1*a2;
            if(r1>maxi1){
                maxi1 = r1;
                maxArea=area;
            }
            else if(r1==maxi1){
                maxArea = max(area,maxArea);
            }
        }
        return maxArea;
    }
};