#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> mat;
        for(int i=0;i<n;i++)
        {
            vector<long long> x;
            for(int j=0;j<m;j++)
            {
                long long val;
                cin >> val;
                x.push_back(val);
            }
            mat.push_back(x);
        }

        for(int i=0;i<m;i++)
        {
            vector<int> x;
            for(int j=0;j<n;j++)
            {
                x.push_back(mat[j][i]);
            }
            sort(x.begin(), x.end());

            for(int j=0;j<n;j++)
            {
                mat[j][i] = x[j];
            }
        }


        vector<vector<long long>> prefix(n, vector<long long>(m, 0));

        for(int i=0;i<m;i++)
        {
            long long sum =0;
            for(int j=n-1;j>=0;j--)
            {
                prefix[j][i] = sum;
                sum += mat[j][i];
            }
        }


        long long ans =0;
        for(int i=0;i<m;i++)
        {
            long long curr =0;
            for(int j=0;j<n-1;j++)
            {
                curr += prefix[j][i] - (n-j-1)*mat[j][i];
            }
            ans += curr;
        }
        
        cout << ans << endl;
    }  
}
