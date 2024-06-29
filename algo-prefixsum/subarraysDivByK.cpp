/**
 * @description: https://leetcode.cn/problems/subarray-sums-divisible-by-k/
 * 和可被K整除的⼦数组
 * 同余定理+C++的余数修正
 * @author: Lei Chen
 * @date: 2024-06-29-(21:25:01)
 * @status: 
**/

class Solution 
{
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        unordered_map<int, int> hash;
        hash[0 % k] = 1;

        int sum = 0, ret = 0;
        for(auto x : nums)
        {
            sum += x;   //当前位置前缀和
            int r= (sum % k + k) %k;    //当前位置前缀和的余数 + 修正余数
            if(hash.count(r)) ret += hash[r];
            hash[r]++;
        }
        return ret;
    }
};