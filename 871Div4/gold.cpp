#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m)
{
        queue<int> q;
        q.push(n);
        
        unordered_map<int, int> mp;
        mp[n]++;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            if(node == m)
            {
                cout << "YES" << endl;
                return;
            }
            
            if(node%3 != 0 || node == 0)
            continue;

            if(mp.find(node/3) == mp.end())
            {
                mp[node/3]++;
                q.push(node/3);
            }
            node /= 3;
            if(mp.find(node*2) == mp.end())
            {
                mp[node*2]++;
                q.push(node*2);
            }
        }

        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
}