#include<cmath>

bool is_prime1(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;

    if(n % 2 == 0) return false; // 添加这一行
    int sqrtN = int(sqrt(n)) + 1; // 计算sqrt(n)的上界
    for(int i = 3; i < sqrtN; i += 2) // 从3开始,步长为2
    {
        if(n % i == 0) return false;
    }
    return true;
}
