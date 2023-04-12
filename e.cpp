#include<bits/stdc++.h>
using namespace std;

vector<int> func(vector<int>& A, vector<int> &B)
{
    int n = A.size();
    vector<int> Psum;
    int sum =0;

    for(int i=0;i<n;i++)
    {
        sum += A[i];
        Psum.push_back(sum);
    }

    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int x = B[i], curr =0;
        if(x > sum)
        {
            curr += (x/sum)*n;
            x = x%sum;
        }

          int low = 0, high = n-1;
          while(low<high) {
                int mid = low +(high-low)/2.0;
                if(Psum[mid]<x) {
                   low = mid + 1;
                   }
                else high = mid;
                 }

                if(x > 0) 
               curr += high+1;
        ans.push_back(curr);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A, B;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x ;
        A.push_back(x);
    }

    
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x ;
        B.push_back(x);
    }

   vector<int> ans = func(A, B);

   for(int i=0;i<n;i++)
   cout<<ans[i] << " ";

}
