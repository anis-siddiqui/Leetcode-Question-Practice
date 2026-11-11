class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = nums[0],minSum=nums[0];
        int ans = abs(nums[0]);
        for(int i=1; i<nums.size(); i++){
            int c1 = nums[i];
            maxSum=max(maxSum+nums[i],c1);
            minSum=min(minSum+nums[i],c1);
            ans=max(ans,max(abs(maxSum),abs(minSum)));
        }
        return ans;
    }
};