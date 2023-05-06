#include<bits/stdc++.h>
using namespace std;

bool bfs(int x, vector<int> vis, vector<int> adj[], int &lev1, int &lev2)
{
    queue<int> q;
    q.push(x);
    vis[x] = 1;

    int i =-1;

    while(!q.empty() )
    {
        int size = q.size();
        i++;
        for(int j=0;j<size;j++)
        {
                 int node = q.front();
                 q.pop();
           if(i == 0)
          {
            for(auto it : adj[node])
            {
                if(vis[it] == 0)
                {
                    vis[it] = 1;
                    q.push(it);
                    lev1++;
                }
            }
         }
        else if(i == 1)
        {
            for(auto it : adj[node])
            {
                if(vis[it] == 0)
                {
                    vis[it] = 1;
                    q.push(it);
                    lev2++;
                }
            }

            if(lev2%lev1 != 0)
            return false;
        }
        else if(i == 2)
        {
            for(auto it : adj[node])
            {
                if(vis[it] == 0)
                {
                    return false;
                }
            }
        }

        }
        
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
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

        for(int i =1;i<n+1;i++)
        {
            vector<int> vis(n+1, 0);
            int x=0, y=0;
            if(bfs(i, vis, adj, x, y))
            {
                cout << x << " " << y/x << endl;
                break;
            }
        }
    }
}