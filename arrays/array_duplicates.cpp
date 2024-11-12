class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> ans;
        int n = arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
