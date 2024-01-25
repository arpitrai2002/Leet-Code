class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0));
        int total=n*n;

        int start_row=0;
        int end_col=n-1;
        int end_row=n-1;
        int start_col=0;
        int count=0;
        while(count<total){
            for(int i=start_col;i<=end_col && count<total;i++){
                arr[start_row][i]=count+1;
                count++;
            }
            start_row++;

            for(int i=start_row;i<=end_row && count<total;i++){
                arr[i][end_col]=count+1;
                count++;
            }
            end_col--;

            for(int i=end_col;i>=start_col && count<total;i--){
                arr[end_row][i]=count+1;
                count++;
            }
            end_row--;

            for(int i=end_row;i>=start_row && count<total;i--){
                arr[i][start_col]=count+1;
                count++;
            }
            start_col++;
        }
        return arr;
    }
};