class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans;
        while(true){
            char a=0;
            for(auto j:strs){
                if(i>=j.size()){
                    a=0;
                    break;
                }
                if(a==0){
                    a=j[i];
                }
                else if(j[i]!=a){
                    a=0;
                    break;
                }
            }
            if(a==0){
                break;
            }
            ans.push_back(a);
            i++;
        }
        return ans;
    }
};