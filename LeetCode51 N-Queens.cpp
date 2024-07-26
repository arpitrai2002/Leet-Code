class Solution {
public:
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> UpperDiagnolCheck;
    unordered_map<int,bool> LeftDiagnolCheck;

    void PutQueen(vector<vector<char>> &board,vector<vector<string>> &ans,int &n){
        vector<string> p;
        for(int i=0;i<n;i++){
            string output="";

            for(int j=0;j<n;j++){
                output.push_back(board[i][j]);
            }
            p.push_back(output);
        }
        ans.push_back(p);
    }


    bool isSafe(int row,int col,vector<vector<char>> &board,int &n){
        if (rowCheck[row]==true){
            return false;
        }

        if (UpperDiagnolCheck[col-row]==true){
            return false;
        }

        if (LeftDiagnolCheck[row+col]==true){
            return false;
        }

        return true;

    }

    void Queen(int col,vector<vector<char>> &board,vector<vector<string>> &ans,int &n){
        if(col>=n){
            PutQueen(board,ans,n);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
            rowCheck[row]=true;
            UpperDiagnolCheck[col-row]=true;
            LeftDiagnolCheck[col+row]=true;

            board[row][col]='Q';
            Queen(col+1,board,ans,n);
            board[row][col]='.';


            rowCheck[row]=false;
            UpperDiagnolCheck[col-row]=false;
            LeftDiagnolCheck[col+row]=false;
        }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<char>> board(n,vector<char>(n,'.'));
        int col=0;
        Queen(col,board,ans,n);
        return ans;
    }
};