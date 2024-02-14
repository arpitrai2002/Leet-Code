class Solution {
public:
    bool isvowel(char a){
        a=tolower(a);
        return (a=='a' ||a=='e' || a=='i' || a=='o' || a=='u');
    }
    string reverseVowels(string s) {
        int i=0;
        int len=s.length()-1;
        while(i<len){
            if(isvowel(s[i]) && isvowel(s[len])){
                swap(s[i],s[len]);
                i++;
                len--;
            }
            else if(isvowel(s[i])==0){
                i++;
            }
            else{
                len--;
            }
        }
        return s;
    }
};