// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int jumps = 0;
        int maxi = 0;
        int maxRange = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi, arr[i]+i);
            if(i==maxRange){
                maxRange = maxi;
                jumps++;
            }
            if(maxRange >= n-1){
                return jumps;
            }
        }
        return -1;    
    }
};
