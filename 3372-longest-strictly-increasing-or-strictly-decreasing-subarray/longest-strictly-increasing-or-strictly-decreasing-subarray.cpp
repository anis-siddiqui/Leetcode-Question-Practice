class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increCount=1,decreCount=1,ans=INT_MIN;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                increCount++;
            }else{
                increCount = 1;
            }
            if(nums[i]<nums[i-1]){
                decreCount++;
            }else{
                decreCount = 1;
            }
            ans=max(ans,max(increCount,decreCount));
        }
        if(ans==INT_MIN) return 1;
        return ans;
    }
};