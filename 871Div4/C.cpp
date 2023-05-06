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

        vector<int> time;
        vector<string> skill;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            string y ;
            cin >> y;

            time.push_back(x);
            skill.push_back(y);
        }

        int both = INT_MAX;
        int s1 = INT_MAX, s2 = INT_MAX;

        for(int i=0;i<n;i++)
        {
            if(skill[i][0] == '1' && skill[i][1] == '1')
            both = min(both, time[i]);
            if(skill[i][0] == '1')
            s1 = min(s1, time[i]);
            if(skill[i][1] == '1')
            s2 = min(s2, time[i]);
        }

        
        if(both == INT_MAX && s1 == INT_MAX && s2 == INT_MAX)
        cout << -1 << endl;
        else if(both == INT_MAX && s1 == INT_MAX)
        cout << -1 << endl;
        else if(both == INT_MAX && s2 == INT_MAX)
        cout << -1 << endl;
        else
        cout << min(both, s1+s2) << endl;
    }
}