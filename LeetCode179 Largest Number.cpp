class Solution {
public:
    static bool comp(string a,string b){
        string s1=a+b;
        string s2=b+a;
        return s1>s2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(auto n:nums){
            ans.push_back(to_string(n));
        }
        sort(ans.begin(),ans.end(),comp);
        if(ans[0]=="0") return "0";
        string ans1="";
        for(auto n:ans){
            ans1+=n;
        }
        return ans1;
    }
};