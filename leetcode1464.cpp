#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = max(nums);
        int second_max = secondmaximum(nums, maxi);
        return ((maxi - 1) * (second_max - 1));
    }

private:
    int max(const vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        return maxi;
    }

    int secondmaximum(const vector<int>& nums, int maxi) {
        int n = nums.size();
        int second_max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > second_max && nums[i] < maxi) {
                second_max = nums[i];
            }
        }
        return second_max;
    }
};
