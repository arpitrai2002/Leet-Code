class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int r=matrix.size();
        int c=matrix[0].size();
        int j=r*c-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            int row=mid/c;
            int col=mid%c;
            if(matrix[row][col]==target){
                return 1;
            }
            else if(matrix[row][col]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
            mid=i+(j-i)/2;
        }
        return 0;
    }
};