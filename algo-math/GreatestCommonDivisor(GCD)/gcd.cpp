/**
 * @description: 最大公约数(Greatest Common Divisor, GCD)——辗转相除法
 * 定义：最大公约数指能够整除多个整数的最大正整数。例如8和12的最大公约数为4
 * @author: Lei Chen
 * @date: 2024-05-29
**/


#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}


int main()
{
    int a = 0, b = 0;
    cin >> a >> b;

    cout << gcd(a,b) << endl;
    return 0;
}