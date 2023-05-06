#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string code = "codeforces";
    while(t--)
    {
        string x;
        cin >> x;

        int count =0;
        for(int i=0;i<10;i++)
        {
            if(code[i] != x[i])
            count++;
        }

        cout << count << endl;
    }
}