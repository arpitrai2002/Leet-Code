class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for(int row=1;row<=numRows;row++){
            int c=1;
            vector<int> b;
            for(int col=1;col<=row;col++){
                b.push_back(c);
                c=c*(row-col)/col;
            }
            a.push_back(b);
        }
        return a;
    }
};