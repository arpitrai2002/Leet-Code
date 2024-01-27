class Solution {
public:
    int Pivot(vector<int> arr){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(low==high){
                return mid;
            }
            if(mid+1<=high && arr[mid]>=arr[mid+1]){
                return mid;
            }
            if(mid-1>=low && arr[mid-1]>=arr[mid]){
                return mid-1;
            }
            if(arr[low]>arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
    }
    return -1;
    }
    int findMin(vector<int>& nums) {
        int index=Pivot(nums);
        if(index==-1){
            return -1;
        }
        else{
            if(index==nums.size()-1){
                return nums[0];
            }
            else{
                return nums[index+1];
            }
        }
    }
};