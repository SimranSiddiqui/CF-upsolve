#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(n);
    for(int i=1;i<n;i++)
    {
        arr.push_back(i);
    }

    

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}