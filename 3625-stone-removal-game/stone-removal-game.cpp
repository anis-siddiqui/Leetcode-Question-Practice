class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = true;
        for(int i=10; i>0; i--){
            if(n-i<0 && i%2==0) return false;
            else if(n-i<0 && i%2==1) return true;
            n-=i;
        }
        return ans;
    }
};