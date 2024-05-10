class Solution {
public:
    string finalString(string s) {
        int i=0;
        int len=s.length();
        string a="";
        while(i<len){
            if(s[i]=='i'){
                reverse(a.begin(),a.end());
            }
            else{
                a.push_back(s[i]);
            }
            i++;
        }
        return a;



    //sss
    }
};