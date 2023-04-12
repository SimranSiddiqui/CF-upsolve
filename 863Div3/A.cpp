#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, dig;
        cin >> n >> dig;

        string num;
        cin >> num;

        bool toPlace = true;
        string ans = "";
        for(int i=0;i<n;i++)
        {
            if(toPlace)
            {
                if(dig > num[i]-'0')
                {
                    ans += to_string(dig);
                    toPlace = false;
                }
            }

            ans += num[i];
        }

        if(ans.length() == n)
        ans += to_string(dig);

        cout << ans << endl;

    }
}