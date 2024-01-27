class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};

// class Solution {
// public:
//     int Pivot(vector<int> arr){
//         int low=0;
//         int high=arr.size()-1;

//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if(low==high){
//                 return low;
//             }
//             if(mid<=high && arr[mid]>arr[mid+1]){
//                 return mid;
//             }
//             if(mid-1>=low && arr[mid-1]>arr[mid]){
//                 return mid-1;
//             }
//             if(arr[low]>arr[mid]){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return -1;
//     }

//     int Search(vector<int> arr,int low,int high,int target){
//         int mid=low+(high-low)/2;
//         while(low<=high){
//             if(arr[mid]==target){
//                 return mid;
//             }
//             else if(arr[mid]<target){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//             mid=low+(high-low)/2;

//         }
//         return -1;

//     }

//     int search(vector<int>& nums, int target) {
//         int index=Pivot(nums);
//         int ans=0;
//         if(nums[0]<=target && nums[index]>=target){
//             ans=Search(nums,0,index,target);
//         }
//         else{
//             ans=Search(nums,index+1,nums.size()-1,target);
//         }
//         return ans;
//     }
// };