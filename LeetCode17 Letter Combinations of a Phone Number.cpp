class Solution {
public:
    void Combine(vector<string> ma,vector<string>& ans,string output,string digits,int index){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        
        int digit=digits[index]-'0';
        string value=ma[digit];
        for(int j=0;j<value.size();j++){
            char v=value[j];
            output.push_back(v);
            Combine(ma,ans,output,digits,index+1);
            output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ma(10);
        ma[2]="abc";
        ma[3]="def";
        ma[4]="ghi";
        ma[5]="jkl";
        ma[6]="mno";
        ma[7]="pqrs";
        ma[8]="tuv";
        ma[9]="wxyz";
        
        string output="";
        vector<string> ans;

        if(digits==""){
            return ans;
            
        }
        
        Combine(ma,ans,output,digits,0);
        return ans;

    }
};