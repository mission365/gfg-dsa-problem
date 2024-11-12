class Solution {
  public:
  int cnt = 0;
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> ans;
        int left = low;
        int right = mid+1;
        
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                ans.push_back(arr[left]);
                left++;
            }
            else{
                ans.push_back(arr[right]);
                cnt += (mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            ans.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            ans.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            arr[i] = ans[i-low];
        }
    }
    void mergeSort(vector<int> &arr, int low, int high){
        if(low>=high) return;
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        mergeSort(arr, 0, n-1);
        return cnt;
    }
};
