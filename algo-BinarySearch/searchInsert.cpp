/**
 * @description: https://leetcode.cn/problems/search-insert-position/
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
 * 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 * 请必须使用时间复杂度为 O(log n) 的算法。
 * @author: Lei Chen
 * @date: 2024-05-29-(12:15:39)
**/

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    int left = 0, right = nums.size() - 1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] < target) left = mid + 1;
        else right = mid;
    }
    if(nums[left] < target) return left + 1;
    return left;
}

int main()
{
    vector<int> nums({1,3,5,6});
    int target = 5;
    cout << searchInsert(nums,target) << endl ;
    return 0;
}
