class Solution {
public:
    void Check(vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int>& output,int index){
        if(target==0){
            ans.push_back(output);
            return;
        }
        if(target<0){
            return;
        }

        for(int i=index;i<candidates.size();i++){
            output.push_back(candidates[i]);
            Check(candidates,target-candidates[i],ans,output,i);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        Check(candidates,target,ans,output,0);
        return ans;

        
    }
};