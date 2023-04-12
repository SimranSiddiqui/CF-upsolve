#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> mp(5,0);
    int ans =0;

   for(int i=0;i<n;i++)
   {
      int x;
      cin >> x;
      mp[x]++;
   }

   ans += mp[4];
   ans += mp[3];
   mp[1] -= mp[3];

   if(mp[2] %2 == 0)
   ans += mp[2]/2;
   else{
    ans += mp[2]/2;
    ans += 1;
    mp[1] -= 2;
   }
  
  if(mp[1] > 0)
  {
    ans += ceil((float)mp[1]/4);
  }

   cout << ans;
}