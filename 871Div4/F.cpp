/*
  “ Laughing, crying, tumbling, mumbling,
    Gotta do more, gotta be more.
    Chaos screaming, chaos dreaming,
    Gotta be more, gotta do more.  ”
*/
#include <bits/stdc++.h>
 
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
 
using namespace std;
 
void Solve() {
    int n , m;
    cin >> n >> m;
    vector <int> nodes[n + 1];
    map < int , int > indegree;
    for(int i = 0;i<m;++i) {
        int u , v;
        cin >> u >> v;
        nodes[u].push_back(v);
        nodes[v].push_back(u);
        ++indegree[u];
        ++indegree[v];
    }
    for(int i = 1;i<=n;++i) {
        int tx = indegree[i];
        unordered_set < int > xd;
        bool poss = 1;
        for(int v : nodes[i]) {
            xd.insert(indegree[v] - 1);
            for(int x : nodes[v]) {
                if(x != i && indegree[x] != 1) {
                    poss = 0;
                    break;
                }
            }
            if(!poss) break;
        }
        if(xd.size() == 1 && poss) {
            
            cout << tx << ' ' << *xd.begin() << "\n" ;
            return;
        }
    }
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test_cases;
    cin >> test_cases;
    for(int i = 0;i<test_cases;i++) {
        Solve();
    }
 
    return 0;
}