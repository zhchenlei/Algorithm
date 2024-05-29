/**
 * @description: https://leetcode.cn/problems/find-peak-element/
 * @author: Lei Chen
 * @date: 2024-05-29-(13:07:40)
**/

#include<bits/stdc++.h>
using namespace std;

// qianxi
auto init_ = [](){
    cin.tie(nullptr)->sync_with_stdio(false);
    return 0;
}();

//解法一
int findPeakElement(vector<int>& nums) 
{
    int max = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > nums[max]) max = i;
    }
    return max;
}

//解法二：二分查找
int findPeakElement1(vector<int>& nums) 
{
    int left = 0, right = nums.size()-1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] > nums[mid + 1]) right = mid;
        else left = mid + 1;
    }
    return left;
}

int main()
{
    vector<int> arr({1,2,1,3,5,6,4});
    cout << findPeakElement(arr) << endl;
    cout << findPeakElement1(arr) << endl;
    return 0;
}