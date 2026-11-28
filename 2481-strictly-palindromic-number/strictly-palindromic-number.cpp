class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            string b = "";
            int copy = n;
            while(copy>0){
                b += to_string(copy % i);
                copy/=i;
            }
            int x=0,y=b.size()-1;
            while(x<y){
                if(b[x]!=b[y]) return false;
                x++;
                y--;
            }
        }
        return true;
    }
};