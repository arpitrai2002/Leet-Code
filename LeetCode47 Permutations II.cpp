class Solution {
public:
    void Permutation(vector<vector<int>>& ans,int index,vector<int>& nums){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_set<int> seen;
        for(int i=index;i<nums.size();i++){
            if (seen.find(nums[i]) != seen.end()) continue; // Skip duplicates
            seen.insert(nums[i]);
            swap(nums[i],nums[index]);
            Permutation(ans,index+1,nums);
            swap(nums[i],nums[index]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        Permutation(ans,0,nums);

        return ans;
    }
};