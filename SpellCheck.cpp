#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;
        string s;
        cin >> s;
         
         string correct = "Timur" ;

           if(s.length()>5)
           {
            cout << "NO" << endl;
           }
           else
           {
            int i;
                 for( i=0;i<5;i++)
                {
                  if(s.find(correct[i]) == -1)
                  {
                     cout << "NO" << endl;
                     break;
                  }
                }

                if(i>=5)
                cout << "YES" << endl;
           }
        
    }
    return 0;
}