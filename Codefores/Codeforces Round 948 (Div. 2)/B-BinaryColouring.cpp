/**
 * @description: https://codeforces.com/contest/1977/problem/B .Binary Colouring
 * n --[1,32] ；
 * ai --[1,0,-1]  i --[0, n - 1]；
 * x -- sum(i=[0->n-1])(ai*2^i)；
 * i -- [0, n - 2] 里ai和a(i+1)不能同时为0；
 * 如果被证明满足以上限制，则认为数组合法
 * input: 输入t组测试样例，
 * output:第一行输出数组长度，第二行输出数组元素
 * @author: Lei Chen
 * @date: 2024-05-28
**/

#include<bits/stdc++.h>

using namespace std;

int mian()
{
    int t = 0;
    cin >> t;
    while(t--)
    {
        int x = 0;
        cin >> x;
        vector<int> a;
        int n = 0;
        for(int i = 0; i < n - 1; i++)
        {
            x -= (a[i] * pow(2,i));
        }
    }
    return 0;
}