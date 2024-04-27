class Solution {
public:
    double Pow(double x,int n){
        double ans=1;
        while(n>0){
            if(n & 1){
                ans*=x;
            }
            x=x*x;
            n>>=1;
        }
        return ans;
    }
    double myPow(double x, int n) {
        int m=abs(n);
        double p=Pow(x,m);
        if(n<0){
            double ans=1/p;
            return ans;
        }
        else return p;
    }
};