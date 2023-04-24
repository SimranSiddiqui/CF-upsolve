#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long sum = n*3 ;
        
        sum += (n*(n+1))/2 +1;
        sum += ((n-2)*(n-1))/2 ;

        cout << sum << endl;
    }
}