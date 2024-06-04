/**
 * @description: 
 * @author: Lei Chen
 * @date: 2024-06-04-(14:50:39)
**/
#include<bits/stdc++.h>
using i64  = long long;

void solve()
{
    int n = 0, x = 0, a = 0, b = 0;
    std::cin >> n >> x >> a >> b; 
    std::cout << (n -  x) * a + x * b << std::endl; 
} 

int main()
{
    std::cin.sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 0;
    std::cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
