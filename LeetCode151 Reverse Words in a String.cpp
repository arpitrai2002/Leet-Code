class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int size=s.size(),i=0;

        while(i<size){
            string temp="";
            while(s[i]==' '&& i<size){
                i++;
            }
            while(s[i]!=' '&& i<size){
                temp+=s[i];
                i++;
            }

            if(temp.size()>0){
                if(ans.size()==0){
                    ans=temp;
                }
                else{
                    ans=temp+" "+ans;
                }
            }
        }
    return ans;
    }
};

// /python
class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join(reversed(s.split()))