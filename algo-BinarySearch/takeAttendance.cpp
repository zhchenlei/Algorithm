/**
 * @description: 
 * @author: Lei Chen
 * @date: 2024-05-30-(12:55:59)
**/
#include<bits/stdc++.h>
using namespace std;


//解法1:哈希表
int takeAttendance1(vector<int>& records) 
{
    vector<int> hash(records.size(),1);
    for(int i = 0; i < records.size();i++)
    {
        if(hash[e] ==) return e;
    }
    return records.size();
}

//解法2：直接遍历求结果
int takeAttendance2(vector<int>& records) 
{
    for(int i = 0; i < records.size(); i++)
    {
        
        if(i != records[i]) return i;
    }
    return records.size();
}

//解法3：位运算
int takeAttendance3(vector<int>& records) 
{
    //处理边界情况
    if(records.back() == records.size() - 1) return records.size();
    for(int i = 0; i < records.size() - 1; i++)
    {
        
        if(i ^ records[i] == 1) return i;
        //else if(i==0 && records[i] != 0) return 0;
    }
    return 0;
}

//解法4：数学(高斯求和公式)
int takeAttendance4(vector<int>& records) 
{
    //处理边界情况
    if(records.back() == records.size() - 1) return records.size();
    //计算前n项和
    int ret = (0+records.back())*(records.size()+1)/2;
    for(int e : records)
    {
        ret -= e;
    }
    return ret;
}

//解法5：二分查找
int takeAttendance5(vector<int>& records) 
{
    int left = 0, right = records.size() - 1;
    if(records[right] == right) return right + 1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(records[mid] == mid) left = mid + 1;
        else right = mid;
    }
    return left;
}


int main()
{
    vector<int> nums({0, 1, 2, 3, 4, 5, 6, 8});
    cout << takeAttendance1(nums) << endl;
    cout << takeAttendance2(nums) << endl;
    cout << takeAttendance3(nums) << endl;
    cout << takeAttendance4(nums) << endl;
    cout << takeAttendance5(nums) << endl;
    return 0;
}