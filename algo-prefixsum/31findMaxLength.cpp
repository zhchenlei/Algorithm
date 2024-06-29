/**
 * @description: https://leetcode.cn/problems/contiguous-array/
 * 31. 连续数组 前缀和+哈希表（细节问题较多）
 * @author: Lei Chen
 * @date: 2024-06-29-(22:28:47)
 * @status: 
**/

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution 
{
public:
    int findMaxLength(std::vector<int>& nums) 
    {
        std::unordered_map<int, int> hash{{0, -1}}; // 初始化哈希表
        int sum = 0, maxLength = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i] == 1 ? 1 : -1; // 更新前缀和
            if (hash.find(sum) != hash.end()) {
                maxLength = std::max(maxLength, i - hash[sum]); // 更新最大长度
            } else {
                hash[sum] = i; // 存储前缀和的索引
            }
        }

        return maxLength;
    }
};

int main() {
    std::vector<int> nums = {0, 1, 0, 1, 0, 1, 0};
    Solution solution;
    std::cout << solution.findMaxLength(nums) << std::endl;
    return 0;
}
