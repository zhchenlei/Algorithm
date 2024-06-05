/**
 * @description: 寻找数组的中心下标（easy) https://leetcode.cn/problems/find-pivot-index/
 * @author: Lei Chen
 * @date: 2024-06-05-(23:30:08)
 * @status: 
**/
#include<bits/stdc++.h>
using i64  = long long;

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) 
    {
        int n = nums.size();
        std::vector<int> f(n),g(n);
        for(int i = 1; i < n; i++)
            f[i] = f[i - 1] + nums[i - 1];
        for(int i = n - 2; i >= 0; i--)
            g[i] = g[i + 1] + nums[i + 1];
        for(int i = 0; i < n; i++)
        {
            if(f[i] == g[i]) return i;
        } 
        return -1;
    }
};

int main()
{
    std::cin.sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t = 0;
    std::cin >> t;
    while(t--)
    {
        const Solution::pivotIndex()
    }
    return 0;
}