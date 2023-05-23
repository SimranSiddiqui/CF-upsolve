#include<bits/stdc++.h>
using namespace std;

int binaryS(int i, int j, int target)
{
    while(i<j)
    {
        int mid = (i+j)/2;
        
    }

}

int main()
{
    int n;
    cin >> n;
    vector<int> shop;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        shop.push_back(x);
    }

    int q;
    cin >> q;
    vector<int> ans; 
    for(int i=0;i<q;i++)
    {
        int x;
        cin >> x;
        if(binaryS(0, n-1, x) == -1)
        ans.push_back(0);
        else
        ans.push_back(binaryS(0, n-1, x));
    }
}