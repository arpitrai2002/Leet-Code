class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(balance>0){
                    result+=s[i];
                }
                balance++;
            }
            else{
                balance--;
                if(balance>0){
                    result+=s[i];
                }
            }
        }
    return result;  
    }
};
// T=O(N) S=O(1)

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         vector<int> stack;
//         string ans;

//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('){
//                 if(!stack.empty()){
//                     ans.push_back(s[i]);
//                 }
//                 stack.push_back('(');
//             }
//             else{
//                 stack.pop_back();
//                 if(!stack.empty()){
//                     ans.push_back(s[i]);
//                 }
//             }
//         }
//     return ans;
//     }
// };

// T=O(N) S=O(N)