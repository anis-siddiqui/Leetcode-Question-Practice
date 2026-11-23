class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> f;

        for(int i: nums){
            ans.push_back(i);
        }

        sort(ans.begin(),ans.end());

        for(int i=0; i<n; i++){
            if(f.find(ans[i])!=f.end()) continue;
            f[ans[i]] = i;
        }

        for(int i=0; i<n; i++){
            ans[i] = f[nums[i]];
        }

        return ans;
    }
};