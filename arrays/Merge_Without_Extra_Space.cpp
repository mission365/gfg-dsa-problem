class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        vector<int> ansa, ansb;
        for(int i=0;i<n;i++){
            ansa.push_back(a[i]);
        }
        for(int i=n;i<a.size();i++){
            ansb.push_back(a[i]);
        }
        a = ansa;
        b = ansb;
    }
};
