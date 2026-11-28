class Solution {
public:
    int mirrorDistance(int n) {
        long long copy = n,rev=0;
        while(copy>0){
            rev=rev*10+copy%10;
            copy/=10;
        }
        return abs(n-rev);
    }
};