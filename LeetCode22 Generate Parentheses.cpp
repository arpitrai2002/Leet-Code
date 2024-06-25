class Solution {
public:
    void check(vector<string>& a,int open,int close,string output){
        if(open==0 && close==0){
            a.push_back(output);
            return;
        }

        if(open>0){
            output.push_back('(');
            check(a,open-1,close,output);
            // backtracking
            output.pop_back();
        }
        if(close>open){
            output.push_back(')');
            check(a,open,close-1,output);
            // backtracking
            output.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        vector<string> a;
        string output="";
        check(a,open,close,output);
        return a;

    }
};