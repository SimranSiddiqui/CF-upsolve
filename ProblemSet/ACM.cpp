#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &nums, int n, int k, int sum, int curr, string &ans)
{
    if(n < 0)
    {
        if(k == 0 && sum == curr)
        ans = "yes";
        return;
    }
    if(k == 0 && sum == curr)
    {
        ans = "yes";
        return;
    }
    if(k == 0)
    return;

    func(nums, n-1, k-1, sum, curr+nums[n], ans);
    func(nums, n-1, k, sum, curr, ans);
}

int main()
{
    int n = 6, sum =0;
    vector<int> scores;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        scores.push_back(x);
        sum += x;
    }

    if(sum%2 != 0)
    {
        cout << "no" << endl;
        return 0;
    }

    sum /= 2;

    int curr = 0;
    string ans = "No";
    func(scores, n, 3, sum, curr, ans);

    cout << ans << endl;
}