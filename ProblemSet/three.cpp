#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int , int> mp;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        mp[x] = i+1;
    }

    if(mp.size() < 3)
    cout << -1 << -1 << -1 << endl;
    else
    {
        int k = 3;
        for(auto it: mp)
        {
            if(k > 0)
            cout << it.second << " ";
            else
            break;

            k--;
        }
    }

}