class Solution {
public:
    int countOdds(int low, int high) {
        //// brute force
        // int count = 0;
        // for(int i=low; i<=high; i++){
        //     if(i%2==1) count++;
        // }
        // return count;
        int count;
        if(low%2==1 || high%2==1) count = (abs(high-low)/2)+1;
        else count = (abs(high-low)/2);
        return count;
    }
};