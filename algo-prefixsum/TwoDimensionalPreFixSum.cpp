/**
 * @description: https://www.nowcoder.com/practice/99eb8040d116414ea3296467ce81cbbc?tpId=230&tqId=2023819&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D196
 * O(m*n + q); 画图类比面积和，其余边界控制与一维类似
 * @author: Lei Chen
 * @date: 2024-06-02-(10:46:27)
**/

#include<bits/stdc++.h>
using i64 = long long;

void solve()
{
    int m = 0, n = 0, q = 0;
    std::cin >> n >> m>> q;
    std::vector<std::vector<int>> arr(n+1,std::vector<int>(m + 1));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            std::cin >> arr[i][j];

    std::vector<std::vector<i64>> dp(n+1,std::vector<i64>(m + 1));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];

    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    while (q--)
    {
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << std::endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
