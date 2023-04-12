#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
 
        string ans = "no" ;
        for(int i=0;k*i<=n;i++)
        {
            if((n-(k*i))%2 == 0)
            {
                ans = "yes";
                break;
            }
        }
 
        cout << ans << endl;
    }
}