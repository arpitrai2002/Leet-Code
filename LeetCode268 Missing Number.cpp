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

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum-=nums[i];
        }
        return sum;
    }
};

//best
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xor1=xor1^nums[i];
            xor2=xor2^i;
        }
        xor2=xor2^n;
        return xor1^xor2;    
    }
};