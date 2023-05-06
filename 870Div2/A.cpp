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
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int ans = -1;
        for(int i=0;i<n;i++)
        {
            int countL = 0;
            for(int j=0;j<n;j++)
            {
                if(i != j)
                { 
                    if(nums[j] != nums[i])
                    {
                      countL++;
                    }
                }
            }

           if(countL >= nums[i])
            {
                if(countL >= nums[i])
                ans = max(ans, countL);
            }
        }

        cout << ans << endl;
    }


}