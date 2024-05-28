class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        
        // Start from the second last element
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        
        if(idx == -1) {
            // If no such element is found, reverse the entire array
            reverse(nums.begin(), nums.end());
            return;
        }

        // Reverse the part of the array after idx
        reverse(nums.begin() + idx + 1, nums.end());
        
        // Find the first element that is greater than nums[idx] after idx
        for(int i = idx + 1; i < n; i++) {
            if(nums[i] > nums[idx]) {
                // Swap elements
                swap(nums[idx], nums[i]);
                break;
            }
        }
    }
};
