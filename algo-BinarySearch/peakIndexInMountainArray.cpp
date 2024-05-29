/**
 * @description: https://leetcode.cn/problems/peak-index-in-a-mountain-array/
 * 二段性：能把数组分为两部分
 * 
 * @author: Lei Chen
 * @date: 2024-05-29-(12:36:37)
**/
#include<bits/stdc++.h>
using namespace std;

// qianxi
auto init_ = [](){
    cin.tie(nullptr)->sync_with_stdio(false);
    return 0;
}();

int peakIndexInMountainArray(vector<int>& arr) 
{
    for(int i = 1; i < arr.size() - 2; i++)
    {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) return i;
    }
    return 0;
}

int peakIndexInMountainArray1(vector<int>& arr) 
{
    int left = 1, right = arr.size() - 2;
    while (left < right)
    {
        int mid = left + (right - left + 1) / 2;
        if(arr[mid] > arr[mid - 1]) left = mid;
        else right = mid - 1;
    }
    return left;
}

int main()
{
    vector<int> arr({0,2,1,0});
    cout << peakIndexInMountainArray(arr) << endl;
    cout << peakIndexInMountainArray1(arr) << endl;
    return 0;
}