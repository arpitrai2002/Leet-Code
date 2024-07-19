class Solution {
public:
    void Permutation(vector<int> & nums,int start,vector<vector<int>>& ans){
        int s=nums.size();
        if(start>=s){
            ans.push_back(nums);
            return;
        }

        for(int i=start;i<s;i++){
            swap(nums[i],nums[start]);
            Permutation(nums,start+1,ans);
            swap(nums[i],nums[start]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        Permutation(nums,0,ans);
        return ans;
    }
};



// or

class Solution {
public:
    void Permutation(vector<int> & nums,vector<int> output,vector<vector<int>>& ans,vector<bool>& used){
        int s=nums.size();
        if(output.size()==s){
            ans.push_back(output);
            return;
        }

        for(int i=0;i<s;i++){
            if(!used[i]){
            used[i]=true;
            output.push_back(nums[i]);
            Permutation(nums,output,ans,used);
            output.pop_back();
            used[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        vector<bool> used(nums.size(),false);
        Permutation(nums,output,ans,used);
        return ans;
    }
};

