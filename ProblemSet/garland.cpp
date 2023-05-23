#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        int ans =0;
        if(mp.size() == 1)
        ans = -1;
        else if(mp.size() == 2)
        {
            for(auto it: mp)
            {
                if(it.second > 2 || it.second < 2)
                {
                    ans = 6;
                    break;
                }
                ans = 4;
            }
        }
        else 
        ans = 4;

        cout << ans << endl;
    }
}

