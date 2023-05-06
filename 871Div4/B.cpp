#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        int ans = INT_MIN;
        for(int i=0;i<n;)
        {
            int curr = 0;
            if(arr[i] == 0)
            {
                while(i<n && arr[i] == 0)
                {
                    curr++;
                    i++;
                }

                ans = max(ans, curr);
            }
            else
            i++;
        }

        if(ans != INT_MIN)
        cout << ans << endl;
        else
        cout << 0 << endl;
    }
}