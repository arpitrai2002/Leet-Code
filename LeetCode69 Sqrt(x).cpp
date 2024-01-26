class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
    return ans;
    }
};