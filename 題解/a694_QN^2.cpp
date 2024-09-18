#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 500+5;
int arr[MAX_N][MAX_N];

void solve() {
    int n,q;
    while(cin >> n >> q) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                cin >> arr[i][j];
            }
        }
        while(q--) {
            int y1,x1,y2,x2;
            cin >> y1 >> x1 >> y2 >> x2;
            int sum = 0;
            for(int y=y1;y<=y2;y++) {
                for(int x=x1;x<=x2;x++) {
                    sum += arr[y][x];
                }
            }
            cout << sum << "\n";
        }
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}