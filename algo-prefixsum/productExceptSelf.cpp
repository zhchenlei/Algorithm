/**
 * @description:除⾃⾝以外数组的乘积 https://leetcode.cn/problems/product-of-array-except-self/description/
 * @author: Lei Chen
 * @date: 2024-06-24-(01:41:05)
 * @status: access
**/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n = nums.size();
        vector<int> f(n), g(n), ret(n);
        f[0] = 1;
        g[n-1] = 1;
        for(int i = 1; i < n; i++)
            f[i] = f[i - 1] * nums[i - 1];
        for(int i = n - 2; i >= 0; i--)
            g[i] = g[i + 1] * nums[i + 1];
        for(int i = 0; i < n; i++)
            ret[i] = f[i] * g[i];
        return ret;     
    }
};

/**
>空间换时间
>一个问题不能被解决时，试着对其给出的数据预处理
**前缀积**
>f(i) = f(i-1) * nums[i];
>f(0) = 1;
**后缀积**
>g(i) = g(i + 1) * nums[i];
>g(n-1) = 1;
>ret(i) = f(i)* g(i);
![image.png](https://s1.vika.cn/space/2024/06/23/ecf34a6069c948a68a232dfc0ad1e84b)
*/