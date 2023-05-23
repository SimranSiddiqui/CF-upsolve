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
        string s;
        cin >> s;

        string ans = "";
        for(int i=n-1;i>=0;)
        {
            if(s[i] == '0')
            {
                string x = "";
                x += s[i-2];
                x += s[i-1];

                ans += 'a'+stoi(x)-1;
                i -= 3;
            }
            else
            {
                ans += 'a' + s[i] - '1';
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}