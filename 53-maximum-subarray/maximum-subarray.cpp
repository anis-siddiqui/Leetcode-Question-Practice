class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestSum=nums[0];
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++){
            int c1 = bestSum+nums[i];
            int c2 = nums[i];
            bestSum = max(c1,c2);
            ans = max(ans,bestSum);
        }
        return ans;
    }
};