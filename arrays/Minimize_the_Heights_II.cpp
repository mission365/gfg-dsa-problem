// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
         int n = arr.size();
        if(n==1) return 0;
        sort(arr.begin(),arr.end());
        int res = arr[n-1]-arr[0];
        
        for(int i=1;i<n;i++){
            if(arr[i]-k<0) continue;
            int mnH = min(arr[0]+k, arr[i]-k);
            int mxH = max(arr[i-1]+k, arr[n-1]-k);
            res = min(res, mxH-mnH);
        }
        return res;
    }
};
