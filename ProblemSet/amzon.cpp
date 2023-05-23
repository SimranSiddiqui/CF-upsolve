#include<bits/stdc++.h>
using namespace std;

vector<int> findDataLocations(vector<int> locations, vector<int> movedFrom, vector<int> movedTo)
{
    unordered_map<int, int> mp;
    int m = locations.size();
    int n = movedFrom.size();

    for(int i=0;i<m;i++)
    {
        mp[locations[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        mp.erase(movedFrom[i]);
        mp[movedTo[i]]++;
    }

    vector<int> ans;

    for(auto it: mp)
    {
        ans.push_back(it.first);
    }

    sort(ans.begin(), ans.end());
    return ans;

}

int main()
{
    vector<int> l, from, to;
    l = {1, 5, 2, 6};
    from = {1, 4, 5, 7};
    to = {4, 7, 1, 3};

    vector<int> x = findDataLocations(l, from, to);
    for(auto it: x)
    cout << it;

}