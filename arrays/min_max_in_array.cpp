class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        int mn=INT_MAX, mx = INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>mx){
                mx = arr[i];
            }
            if(arr[i]<mn){
                mn = arr[i];
            }
        }
        return {mn,mx};
    }
};
