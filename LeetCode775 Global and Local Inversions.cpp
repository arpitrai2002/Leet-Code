class Solution {
public:
    vector<int> b;

    int merge(vector<int>& nums,int s,int mid,int e){
        int left=s;
        int right=mid+1;
        b.clear();
        long long count=0;

        while(left<=mid && right<=e){
            if(nums[left]<=nums[right]){
                b.push_back(nums[left]);
                left++;
            }
            else{
                b.push_back(nums[right]);
                count+=mid-left+1;
                right++;
            }
        }
        while(left<=mid){
            b.push_back(nums[left]);
            left++;
        }
        while(right<=e){
            b.push_back(nums[right]);
            right++;
        }
        for(int i=s;i<=e;i++){
            nums[i]=b[i-s];
        }
        return count;
    }
    int mergeSort(vector<int>& nums,int s,int e){
        int mid;
        long long count=0;
        if(s>=e) return 0;
        mid=s+(e-s)/2;
        count+=mergeSort(nums,s,mid);
        count+=mergeSort(nums,mid+1,e);
        count+=merge(nums,s,mid,e);
        return count;
    }
    bool isIdealPermutation(vector<int>& nums) {
        int s=nums.size();
        vector<int> temp=nums;
        int global=mergeSort(temp,0,s-1);
        int local=0;
        for(int i=0;i<s-1;i++){
            if(nums[i]>nums[i+1]){
                local+=1;
            }
        }
        return local==global;
    }
};