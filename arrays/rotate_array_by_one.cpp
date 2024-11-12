
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> v;
        v.push_back(arr[n-1]);
        for(int i=0;i<n-1;i++){
            v.push_back(arr[i]);
        }
        arr = v;
    } 
};
