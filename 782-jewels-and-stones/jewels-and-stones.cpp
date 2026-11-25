class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> jew;
        unordered_map<char,int> st;
        for(int i=0; i<stones.size(); i++){
            st[stones[i]]++;
        }
        for(int i=0; i<jewels.size(); i++){
            jew[jewels[i]]++;
        }
        int ans = 0;
        for(auto i:st){
            if(jew.find(i.first)!=jew.end()) ans+=i.second;
        }
        return ans;
    }
};