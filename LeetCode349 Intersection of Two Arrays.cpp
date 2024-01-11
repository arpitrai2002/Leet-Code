class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int q=nums1.size();
        int w=nums2.size();
        vector<int> c;
        for(int i=0;i<q;i++){
            for(int j=0;j<w;j++){
                if(nums1[i]==nums2[j]){
                    c.push_back(nums1[i]);
                    nums2[j]=-1;
                }
            }
        }
        set<int> s(c.begin(),c.end());
        vector<int> d(s.begin(),s.end());
        return d;
        
    }
};