class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> brr;
        for(int i=1;i<=rowIndex+1;i++){
            long c=1;
            vector<int> arr;
            for(int j=1;j<=i;j++){
                arr.push_back(c);
                c=c*(i-j)/j;
            }
            if(i==rowIndex+1){
                brr=arr;
            }
        }
        return brr;
    }
};