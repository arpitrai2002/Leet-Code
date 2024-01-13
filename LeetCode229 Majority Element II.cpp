class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        int ele1,ele2;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=ele2){
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && nums[i]!=ele1){
                count2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
            else{
                count1--;
                count2--;
            }
        }

        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                count1++;
            }
            if(nums[i]==ele2){
                count2++;
            }
        }
        int v=n/3;
        if(count1>v){
            ans.push_back(ele1);
        }
        if(count2>v){
            ans.push_back(ele2);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};