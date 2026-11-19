class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        int low = 0, high = 0, n = nums.size(),ans=0;
        long long product=1;
        while(high<n){
            product*=nums[high];
            while(low<=high && product>=k){
                product/=nums[low];
                low++;
            }
            ans+=high-low+1;
            high++;
        }
        return ans;
    }
};