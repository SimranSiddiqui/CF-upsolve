#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<long long> arr;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end(), greater<int>());

        long long ans = 1;
        int i =0;
        for(i=0;i<n && arr[i] > 1;i++)
        {
            ans *= arr[i];
        }

        ans += n-1;

        cout << ans*2022 << endl;

    }
}