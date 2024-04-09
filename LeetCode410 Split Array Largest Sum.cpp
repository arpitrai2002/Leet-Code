class Solution {
public:
    bool isPossible(vector<int> nums, int len,int mid,int k){
        int Sum=0;
        int c=1;
        for(int i=0;i<len;i++){
            if(nums[i]>mid){
                return false;
            }
            if(Sum+nums[i]>mid){
                c++;
                Sum=nums[i];
                if(c>k){
                    return false;
                }
            }
            else{
                Sum+=nums[i];
            }
        }
        return true;

    }
    int splitArray(vector<int>& nums, int k) {
        int len=nums.size();
        if(k>len) return -1;
        int low=0;
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(nums,len,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

int a;
int b;