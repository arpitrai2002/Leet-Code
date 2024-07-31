class Solution {
public:
    int MaxSum(vector<int>& nums,int start,int end){
        if(start==end) return nums[start];
        int maxLeftBorderSum=INT_MIN , maxRightBorderSum=INT_MIN;
        int mid=start+((end-start)>>1);

        int maxLeftSum=MaxSum(nums,start,mid);
        int maxRightSum=MaxSum(nums,mid+1,end);

        int LeftBorderSum=0, RightBorderSum=0;
        for(int i=mid;i>=start;i--){
            LeftBorderSum+=nums[i];
            if(LeftBorderSum>maxLeftBorderSum) maxLeftBorderSum=LeftBorderSum;
        }
        for(int i=mid+1;i<=end;i++){
            RightBorderSum+=nums[i];
            if(RightBorderSum>maxRightBorderSum) maxRightBorderSum=RightBorderSum;
        }

        int crossBorderSum=maxRightBorderSum + maxLeftBorderSum;
        return max(crossBorderSum,max(maxLeftSum,maxRightSum));
    }
    int maxSubArray(vector<int>& nums) {
        return MaxSum(nums,0,nums.size()-1);
    }
};