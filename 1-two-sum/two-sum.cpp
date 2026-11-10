class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> have;
        for(int i=0; i<nums.size(); i++){
            int need = target-nums[i];
            if(have.find(need)!=have.end()){
                return {have[need],i};
            }
            have[nums[i]] = i;
        }
        return {};
    }
};