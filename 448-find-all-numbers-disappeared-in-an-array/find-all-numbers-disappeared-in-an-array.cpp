class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int index;
            if(nums[i]>0){ 
                index = nums[i]-1;
            }
            else{ 
                index = (-1*(nums[i]))-1;
            }
            if(nums[index]>0){
                nums[index] = -1*nums[index];
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};