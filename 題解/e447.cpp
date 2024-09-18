#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5+5, mod=1e9+7;
int arr[MAX_N];

void solve() {
    int q;
    cin >> q;
    queue<int> que;
    while(q--) {
        int tp;
        cin >> tp;
        if(tp==1) {
            int x;
            cin >> x;
            que.push(x);
        }
        if(tp==2) {
            if(que.size() == 0) {           //queue 是空的？
                cout << "-1\n";
            }
            else {
                cout << que.front() << "\n";
            }
        }
        if(tp==3) {
            if(!que.size() == 0) {          //queue 裡有東西才做 pop
                que.pop();
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}