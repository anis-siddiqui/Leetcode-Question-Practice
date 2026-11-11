class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=nums[0],smallest=nums[0],ans=nums[0];
        for(int i=1; i<nums.size(); i++){
            int c1 = largest*nums[i];
            int c2 = smallest*nums[i];
            int c3 = nums[i];
            largest = max(c1,max(c2,c3));
            smallest = min(c1,min(c2,c3));
            ans=max(largest,ans);
        }
        return ans;
    }
};