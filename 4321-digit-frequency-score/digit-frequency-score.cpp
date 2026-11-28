class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> f;
        int copy=n;
        while(copy>0){
            int d = copy%10;
            f[d]++;
            copy/=10;
        }
        int ans=0;
        for(auto i : f){
            int x = i.first*i.second;
            ans+=x;
        }
        return ans;
    }
};