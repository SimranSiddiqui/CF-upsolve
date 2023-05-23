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
    int x;
    cin >> x;
    int y;
    cin >> y;
    queue < int > bfs;
    map < int , int > vis;
    vis[x] = 1;
 
    bfs.push(x);
    while(bfs.size()) {
        int curr = bfs.front();
        bfs.pop();
        
        if(curr == y) {
            cout << "YES\n";
            return;
        }
 
        if(curr == 0) continue;
        if(curr % 3 == 0) {
            if(vis[curr/3] == 0) {
                vis[curr/3] = 1;
                bfs.push(curr/3);
 
            }
            curr = curr/3;
            curr *= 2;
            if(vis[curr] == 0) {
                vis[curr] = 1;
                bfs.push(curr);
            }
        }
    }
    cout << "NO\n" ;
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