class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDel=arr[0],oneDel=INT_MIN,res=arr[0];
        for(int i=1; i<arr.size(); i++){
            int prevNoDel=noDel;
            int prevOneDel=oneDel;
            noDel=max(noDel+arr[i],arr[i]);
            int c;
            if(oneDel==INT_MIN){
                c=arr[i];
            }else{
                c=prevOneDel+arr[i];
            }
            oneDel=max(c,prevNoDel);
            res=max(max(oneDel,noDel),res);
        }
        return res;
    }
};