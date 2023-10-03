class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tsum=n*(n+1)>>1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int d=tsum-sum;
        return d;
        
    }
};