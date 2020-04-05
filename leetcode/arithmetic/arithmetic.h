#pragma once

#include <vector>

/* 删除排序数组中的重复项 */
// 不重复
int removeDuplicates(std::vector<int>& nums);
// 重复
int removeDuplicates_repeat(std::vector<int>& nums, int repeat = 2);


/* 搜索旋转排序数组 */
// 不重复
int searchRotateSortArr(const std::vector<int>& nums, int target);
// 重复
int searchRotateSortArr_repeat(const std::vector<int>& nums, int target);


/* 2个排序数组的中位数 */