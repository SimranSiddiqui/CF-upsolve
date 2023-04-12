#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while(t--)
   {
    int n, m;
    cin >> n;
    vector<int> a, b;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    cin >> m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int i =0, j=0 ;
    int sum =0, ans = INT_MIN;

    while(i<n || j<m)
    {
        if(i>=n)
        {
            sum += b[j];
            j++;
        }
        else if(j >= m)
        {
            sum += a[i];
            i++;
        }
        else if(a[i] >= b[j])
        {
            sum += a[i];
            i++;
        }
        else
        {
            sum += b[j];
            j++;
        }

        ans = max(max(ans, sum),0);
    }

    cout << ans << "\n";



   } 


}