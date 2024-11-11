class Solution {
  public:
    string reverseString(string& s) {
        // Your code goes here
        int n = s.size();
        vector<char> ch;
        for(auto it: s){
            ch.push_back(it);
        }
        string ss;
        reverse(ch.begin(),ch.end());
        for(auto it: ch){
            ss+=it;
        }
        return ss;
    }
};


// using reverse function
// class Solution
// {
//     public:
//     string reverseWord(string str)
//     {
//         // Your code goes here
//         reverse(str.begin(),str.end());
//         return str;
//     }
// };

// solution: 3
// class Solution
// {
//     public:
//     string reverseWord(string str)
//     {
//         // Your code goes here
//         vector<char> v;
//         for(int i=0;i<str.size();i++){
//             v.push_back(str[i]);
//         }
//         reverse(v.begin(),v.end());
//         string ans;
//         for(int i=0;i<v.size();i++){
//             ans+=v[i];
//         }
//         return ans;
//     }
// };
