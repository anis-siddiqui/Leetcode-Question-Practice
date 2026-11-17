class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i:nums){
            int digit = 0,copy=i;
            while(copy>0){
                copy/=10;
                digit++;
            }
            if(digit%2==0) count++;
        }
        return count;        
    }
};