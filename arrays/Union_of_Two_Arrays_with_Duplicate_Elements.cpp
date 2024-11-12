class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        for(auto it: a){
            s.insert(it);
        }
        for(auto it: b){
            s.insert(it);
        }
        return s.size();
    }
};
