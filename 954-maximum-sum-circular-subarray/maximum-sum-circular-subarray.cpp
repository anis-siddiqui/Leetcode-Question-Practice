class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMaxSum=nums[0],currMinSum=nums[0],maxSum=nums[0],minSum=nums[0],totalSum=nums[0];
        for(int i=1; i<nums.size(); i++){
            currMaxSum = max(currMaxSum+nums[i], nums[i]);
            maxSum = max(currMaxSum,maxSum);


            currMinSum = min(currMinSum+nums[i], nums[i]);
            minSum = min(currMinSum,minSum);

            totalSum+=nums[i];
        }
        int circularSum = totalSum-minSum;
        if(circularSum==0) return maxSum;
        return max(maxSum,circularSum);
    }
};