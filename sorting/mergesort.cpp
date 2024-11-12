class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> ans;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                ans.push_back(nums[left]);
                left++;
            }
            else {
                ans.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            ans.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            ans.push_back(nums[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            nums[i] = ans[i-low];
        }
    }
    void mS(vector<int>& nums, int low, int high){
        if(low == high) return;
        int mid = (low+high)/2;

        mS(nums, low, mid);
        mS(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mS(nums, 0, n-1);
        return nums;
    }
};
