/**
 * @description: A. Verify Password  https://codeforces.com/contest/1976/problem/A
 * @author: Lei Chen
 * @date: 2024-05-30-(22:41:24)
**/
#include<bits/stdc++.h>
using namespace std;

auto init_ = [](){
    cin.tie(nullptr)->sync_with_stdio(false);
    return 0;
}();

int main()
{
    //t is the number of testcase
    int t = 0;
    cin >> t;
    while(t--)
    {
        bool ret = true; 
        //tt is the length of password
        int tt = 0;
        string s;
        cin >> tt;
        //input
        while(tt--)
        {
            char x = 0;
            cin >> x;
            s.push_back(x);
        }
        int flag = 0; //lowercase Latin letters
        if(s[0] < '0' || (s[0] > '9' && s[0] < 'a') || s[0] > 'z') ret = false;
        for(int i = 1; i < s.size();i++)
        {
            //lowercase Latin letters and digits 
            if(s[i] < '0' || (s[i] > '9' && s[i] < 'a') || s[i] > 'z')
            {
                ret = false;
                break;
            }
            //non-decreasing order
            if(s[i - 1] > s[i])
            {
                ret = false;
                break;
            }
            if(s[i] >= 'a' && s[0] <= 'z') flag = 1;

        }
        if(flag == 1 && s[s.size()-1] >= '0' && s[s.size()-1] <= '9') ret = false;
        if(ret) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}