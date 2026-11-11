class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> f;
        for(int i:nums){
            f[i]++;
        }
        for(auto j:f){
            if(j.second==1){
                sum+=j.first;
            }
        }
        return sum;
    }
};