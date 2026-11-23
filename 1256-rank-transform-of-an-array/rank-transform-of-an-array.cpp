class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int> f;
        for(int i:arr){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int rank = 1;
        for(int i=0; i<arr.size(); i++){
            if(f.find(ans[i])!=f.end()) continue;
            f[ans[i]] = rank++;
        }

        for(int i=0; i<arr.size(); i++){
            ans[i] = f[arr[i]];
        }
        return ans;
    }
};