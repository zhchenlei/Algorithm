/**
 * @description: https://www.nowcoder.com/practice/acead2f4c28c401889915da98ecdc6bf?tpId=230&tqId=2021480&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D196
 * ![image.png](https://s1.vika.cn/space/2024/06/01/2ebb90d0ac6a471286b7a92f6dc4c2dc)
 * 前缀和->开苏求出数组中某一个连续区间的和-> O(q) + O(n）
 * - 第一步：先预处理出来一个前缀和数组
 * dp[i] 表示【1, i】区间内所有元素的和(状态表示)
 * dp[1] = dp[i - 1] + arr[i]; (状态转移方程)
 * - 第二步：使用前缀和数组
 * 同一类问题抽象为动态表示，进而用动态表示来解
 * 细节问题：为什么下标从1开始计数？
 * * 方便处理边界情况
 * @author: Lei Chen
 * @date: 2024-06-02-(09:31:05)
**/

#include<bits/stdc++.h>
#include <vector>

using i64 = long long;

void solve()
{
    int n = 0, q = 0;
    std::cin >> n >> q;
    std::vector<int> arr(n + 1);
    //dp[i] 表示【1, i】区间内所有元素的和(状态表示)
    std::vector<i64> dp(n + 1);
    for(int i = 1; i <= n; i++) std::cin >> arr[i];
    //状态转移方程
    for(int i = 1; i <= n; i++) dp[i] = dp[i - 1] + arr[i];
    while(q--)
    {
        int l = 0, n = 0;
        std::cin >> l >> n;
        std::cout << dp[n] - dp[l - 1] << std::endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}