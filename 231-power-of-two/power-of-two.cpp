class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int copy = n;
        while(copy%2==0){
            copy/=2;
        }
        return copy==1;
    }
};