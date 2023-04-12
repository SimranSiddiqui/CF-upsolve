#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int n  = s.length();
    int count =1;
    int ans= INT_MIN;
    for(int i=0;i<n-1;i++)
    {
      if(s[i] == s[i+1])
      {
       count++;
       ans = max(ans, count);
      }
      else
      {
        count =1;
      }
    }

    if(ans >= 7)
    cout << "YES" ;
    else
    cout << "NO";
}