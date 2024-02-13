class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[256]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            arr[t[j]]--;
        }

        for(int i=0;i<256;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};