#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    map<int, int> mp;
    for(auto it : adj)
    {
        mp[it.size()]++;
    }

    for(auto it : mp)
    {
        
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}