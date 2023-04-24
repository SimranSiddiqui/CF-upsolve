#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l;
        cin >> n >> l;

        vector<int> dur, inter;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            dur.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            inter.push_back(x);
        }

        int ans = INT_MIN;
        int ind = -1;
        for(int i=0;i<n;i++,l--)
        {
            if(dur[i] <= l)
            {
                if(ans <= inter[i])
                {
                ans = inter[i];
                ind = i+1;
                }
            }
        }

        cout << ind << endl;
    }
}