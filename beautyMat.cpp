#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int onei, onej;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
            if(x)
            {
                onei = i;
                onej = j;
            }
        }
    }

    cout << abs(onei - 2)+abs(onej-2) << endl;

}