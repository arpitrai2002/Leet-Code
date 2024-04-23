class Solution {
public:
    int GCD(int a,int b){
        if (a==0) return b;
        if (b==0) return a;
        while(a>0 && b>0){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a==0?b:a;
    }
    int findGCD(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }
        }
        return GCD(min,max);
    }
};