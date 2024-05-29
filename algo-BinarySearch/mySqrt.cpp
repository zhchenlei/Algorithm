/**
 * @description: https://leetcode.cn/problems/sqrtx/    
 * 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
 * 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
 * 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
 * @author: Lei Chen
 * @date: 2024-05-29-(11:35:29)
**/

#include<bits/stdc++.h>
using namespace std;

// 解法一
int mySqrt(int x)
{
    if(x == 0) return 0;

    int left = 1, right = x;
    while(left < right)
    {
        long long mid = left + (right - left + 1) /2;
        if(mid * mid <= x) left = mid;
        else right = mid - 1;
    }
    return left;
}

//解法二：二分查找
int mySqrt1(int x) 
{
   long long i = 0;  
   for( i = 0; i <= x; i++)
    {
        if(i*i == x) return i;
        else if(i*i > x)
            return i -1;
    }
        return 0;
}

int main()
{
    int x = 0;
    cin >> x;
    cout << mySqrt1(x) << endl;
    cout << mySqrt(x) << endl;
    return 0;
}