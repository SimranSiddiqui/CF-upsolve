#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &grid, int &curr,int i, int j)
{
    int n = grid.size();
    int m = grid[0].size();

    queue<pair<int, int>> q;
    q.push(make_pair(i, j));
    curr += grid[i][j];
    grid[i][j] = 0;

    while(!q.empty())
    {
        int s = q.size();
        for(int i=0;i<s;i++)
        {
            pair<int, int> node = q.front();
            q.pop();
            int row = node.first;
            int col = node.second;

            if(row+1 < n && grid[row+1][col] != 0)
            {
                curr += grid[row+1][col];
                grid[row+1][col] = 0;
                q.push(make_pair(row+1, col));
            }
            if(row-1 >= 0 && grid[row-1][col] != 0)
            {
                curr += grid[row-1][col];
                grid[row-1][col] = 0;
                q.push(make_pair(row-1, col));
            }
            if(col+1 < m && grid[row][col+1] != 0)
            {
                curr += grid[row][col+1];
                grid[row][col+1] = 0;
                q.push(make_pair(row, col+1));
            }
            if(col-1 >= 0 && grid[row][col-1] != 0)
            {
                curr += grid[row][col-1];
                grid[row][col-1] = 0;
                q.push(make_pair(row, col-1));
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;

        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<m;j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }

            grid.push_back(temp);
        }

        int ans = INT_MIN;
        for(int i =0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] != 0)
                {
                    int curr = 0;
                    bfs(grid, curr, i, j);
                    ans = max(ans, curr);
                }
            }
        }

        if(ans == INT_MIN)
        cout << 0 << endl;
        else
        cout << ans << endl;
    }
}