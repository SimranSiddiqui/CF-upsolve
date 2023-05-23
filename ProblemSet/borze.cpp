#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    string num  = "";
    for(int i=0;i<n;i++)
    {
        if(s[i] == '.')
        num += '0';
        else if(s[i+1] == '.')
        {
            num += '1';
            i++;
        }
        else
        {
             num += '2';
             i++;
        }
    }

    int ans =0;
    for(int i=0;i<num.length();i++)
    {
        ans = ans*10+num[i];
    }

    cout << num << endl;
}