#include "arithmetic.h"

// [1,1,2] => [1,2]
int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[index] != nums[i]) {
            nums[++index] = nums[i];
        }
    }
    return index + 1;
}

// [1,1,1,2,2,3] =>  [1,1,2,2,3]
int removeDuplicates_repeat(std::vector<int>& nums, int repeat) {
    if (nums.size() <= repeat) {
        return (int)nums.size();
    }
    int index = repeat;
    for (int i = repeat; i < nums.size(); i++) {
        if (nums[i] != nums[index - repeat]) {
            nums[index++] = nums[i];
        }
    }
    return index;
}