#include<bits/stdc++.h> 
using namespace std;

vector<string> implementAPI(vector<string> logs)
{
    int n = logs.size();
    unordered_map<string, string> mp;
    unordered_map<string, int> current;
    vector<string> ans;

    for(int j=0;j<n;j++)
    {
        string log = logs[j];
        int size = log.length();

        int i =0;
        string func = "", user = "", pass = "";
        while(i<size && log[i] != ' ')
        {
            func += log[i];
            i++;
        }
        i++;

        while(i<size && log[i] != ' ')
        {
            user += log[i];
            i++;
        }
        i++;

        while(i<size && log[i] != ' ')
        {
            pass += log[i];
            i++;
        }

        if(func == "register")
        {
            if(mp.find(user) == mp.end())
            {
                mp[user] = pass;
                ans.push_back("Registered Successfully");
            }
            else
            ans.push_back("Username already exists");
        }
        else if(func == "login")
        {
            if(mp.find(user) != mp.end() && mp[user] == pass)
            {
                ans.push_back("Logged In Successfully");
                current[user]++;
            }
            else
            ans.push_back("Login Unsuccessful");
        }
        else
        {
            if(mp.find(user) != mp.end() && current.find(user) != current.end())
            {
                ans.push_back("Logged Out Successfully");
                current.erase(user);
            }
            else
            ans.push_back("Logout Unsuccessful");
        }


    }

    return ans;
}

int main()
{
    vector<string> logs;
    logs = {"register user05 qwerty",
    "login user05 qwerty",
    "logout user05"
    };

    vector<string> ans = implementAPI(logs);
    for(auto it: ans)
    cout << it << " ";
}

/*

-1
6
6
6
6
6
6
6
6
6
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
4
6
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4
4

*/