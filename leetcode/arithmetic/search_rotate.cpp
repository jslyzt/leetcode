#include "arithmetic.h"

// nums = [4,5,6,7,0,1,2], target = 0, output = 4
// nums = [4,5,6,7,0,1,2], target = 3, output = -1
int searchRotateSortArr(const std::vector<int>& nums, int target) {
    int first = 0, last = (int)nums.size();
    while (first != last) {
        const int mid = first + (last - first) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[first] <= nums[mid]) {
            if (nums[first] <= target && target < nums[mid]) {
                last = mid;
            } else {
                first = mid + 1;
            }
        } else {
            if (nums[mid] < target && target <= nums[last - 1]) {
                first = mid + 1;
            } else {
                last = mid;
            }
        }
    }
    return -1;
}

// nums = [1,3,1,1,1], target = 1, output = 2
int searchRotateSortArr_repeat(const std::vector<int>& nums, int target) {
    int first = 0, last = (int)nums.size();
    while (first != last) {
        const int mid = first + (last - first) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[first] < nums[mid]) {
            if (nums[first] <= target && target < nums[mid]) {
                last = mid;
            } else {
                first = mid + 1;
            }
        } else if (nums[first] > nums[mid]) {
            if (nums[mid] < target && target <= nums[last - 1]) {
                first = mid + 1;
            } else {
                last = mid;
            }
        } else { //skip duplicate one
            first++;
        }
    }
    return -1;
}