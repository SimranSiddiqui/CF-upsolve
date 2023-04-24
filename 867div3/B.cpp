#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        priority_queue<int> pq;
        int n; 
        cin >> n;

        vector<long long> nums;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        sort(nums.begin(), nums.end());

        long long ans = 0;
        if(n == 2)
        ans= nums[0]*nums[1];
        else
        ans= max(nums[0]*nums[1] , nums[n-1]*nums[n-2]);

        cout << ans << endl;
    }
}