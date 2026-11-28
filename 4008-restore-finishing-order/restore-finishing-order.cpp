class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_map<int,int> f;
        for(int i: friends){
            f[i]++;
        }
        for(int j: order){
            if(f.find(j)!=f.end()){
                ans.push_back(j);
            }
        }
        return ans;
    }
};