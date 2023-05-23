#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans = "";

    for(int i=0;i<n;i++)
    {
      char x = tolower(s[i]);
      if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u' && x!='y') 
      {
        ans += '.';
        ans += x;
      }
    }

    cout << ans;
}