/**
 * @description: 素数判断
 * A.试除法
 * B.优化1
 * C.优化2
 * @author: Lei Chen
 * @date: 2024-05-29
**/

#include<bits/stdc++.h>
using namespace std;

//A. 试除法
extern bool is_prime(int n);
extern bool is_prime1(int n);
extern bool is_prime2(int n);

int main()
{
    int x = 0;
    cin >> x;
    for(int i = 2; i <= x; i++)
    {
        if(is_prime(i)) cout<< i <<" ";
    }
    cout<<"\n";
    for(int i = 2; i <= x; i++)
    {
        if(is_prime1(i)) cout<< i <<" ";
    }
     cout<<"\n";
    for(int i = 2; i <= x; i++)
    {
        if(is_prime2(i)) cout<< i <<" ";
    }
    return 0;
}