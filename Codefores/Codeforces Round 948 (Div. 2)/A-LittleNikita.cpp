/**
 * @description: https://codeforces.com/contest/1977/problem/A
 * @author: Lei Chen
 * @date: 2024-05-28
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        if(n >= m && (n - m)%2 == 0)
            cout<<"Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}