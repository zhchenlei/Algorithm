/**
 * @description: A. Long Live https://codeforces.com/gym/105139/problem/A
 * @author: Lei Chen
 * @date: 2024-06-04-(13:05:26)
**/

#include<bits/stdc++.h>
using i64  = long long;


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}

i64 lcm(i64 x, int y)
{
    return abs(x*y) / gcd(x,y);
}

void solve()
{
    i64 x = 1, y = 1;
    std::cin >> x >> y;
    std::cout<<1<<" "<<lcm(x,y)/gcd(x,y)<<std::endl;        
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
