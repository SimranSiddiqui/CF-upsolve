#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string line= "";
    for(int i=0;i<n;i++)
    {
        char x;
        cin >> x;
        line += x;
    }

    while(t--)
    {
        bool swap = false;
        for(int i=1;i<n;i++)
        {
            if(line[i-1] == 'B' && line[i] == 'G')
            {
                char temp = line[i-1];
                line[i-1] = line[i];
                line[i] = temp;
                swap = true;
                i++;
            }
        }
        if(!swap)
        break;
    }

    cout << line << endl;
}