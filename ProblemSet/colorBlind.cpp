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
        char arr[2][n];

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] == 'G')
                arr[i][j] = 'B';
            }
        }
         int i;
        for( i=0;i<n;i++)
        {
            if(arr[0][i] != arr[1][i])
            break;
        }

        if(i>=n)
        cout << "YES"<< endl;
        else
        cout << "NO" << endl;

    }
    return 0;
}