class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        vector<int> f(2,0);
        f[0]++;
        int sum = 0,ans=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum%2==0){
                ans += f[1];
                f[0]++;
            }else{
                ans+=f[0];
                f[1]++;
            }
            ans%=MOD;
        }
        return ans;
    }
};