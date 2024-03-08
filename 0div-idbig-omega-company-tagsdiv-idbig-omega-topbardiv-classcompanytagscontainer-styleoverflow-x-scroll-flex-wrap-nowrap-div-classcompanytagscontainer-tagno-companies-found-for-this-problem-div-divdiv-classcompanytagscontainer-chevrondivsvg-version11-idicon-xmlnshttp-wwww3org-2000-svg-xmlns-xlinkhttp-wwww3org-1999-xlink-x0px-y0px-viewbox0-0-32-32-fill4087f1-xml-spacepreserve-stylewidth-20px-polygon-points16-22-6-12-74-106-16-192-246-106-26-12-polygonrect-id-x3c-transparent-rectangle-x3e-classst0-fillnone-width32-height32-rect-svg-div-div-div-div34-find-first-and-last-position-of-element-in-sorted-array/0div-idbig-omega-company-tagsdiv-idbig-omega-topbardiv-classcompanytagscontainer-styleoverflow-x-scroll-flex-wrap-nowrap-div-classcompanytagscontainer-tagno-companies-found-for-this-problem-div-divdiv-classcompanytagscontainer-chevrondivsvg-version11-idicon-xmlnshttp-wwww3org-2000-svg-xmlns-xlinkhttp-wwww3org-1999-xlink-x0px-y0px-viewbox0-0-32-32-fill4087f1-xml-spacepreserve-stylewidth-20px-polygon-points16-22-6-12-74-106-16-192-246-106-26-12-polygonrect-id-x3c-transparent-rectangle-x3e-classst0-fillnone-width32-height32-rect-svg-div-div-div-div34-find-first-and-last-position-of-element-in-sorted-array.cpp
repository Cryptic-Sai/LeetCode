#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); // Initializing result vector with -1

        // Finding the leftmost index of the target
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                result[0] = mid; // Update leftmost index
                e = mid - 1; // Continue searching towards left for the leftmost occurrence
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        // Finding the rightmost index of the target
        s = 0, e = nums.size() - 1; // Resetting s and e pointers
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                result[1] = mid; // Update rightmost index
                s = mid + 1; // Continue searching towards right for the rightmost occurrence
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return result;
    }
};
