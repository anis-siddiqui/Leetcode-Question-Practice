class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(int i:nums){
            if(i<0){
                neg.push_back(i*i);
            }else{
                pos.push_back(i*i);
            }
        }
        reverse(neg.begin(),neg.end());
        int i=0, j=0;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<=neg[j]){
                ans.push_back(pos[i]);
                i++;
            }else{
                ans.push_back(neg[j]);
                j++;
            }
        }
        while(i<pos.size()){
            ans.push_back(pos[i]);
            i++;
        }
        while(j<neg.size()){
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};