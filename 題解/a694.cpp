#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 500+5;
int arr[MAX_N][MAX_N];
int pre[MAX_N][MAX_N];

void solve() {
    int n,q;
    while(cin >> n >> q) {          //若有多組測資則可以這樣寫，意思是只要我還有讀入 n 和 q ，就執行 while 內的程式
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                cin >> arr[i][j];
            }
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                arr[i][j] = arr[i][j] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];  //做好二維前綴和
            }
        }
        while(q--) {
            int y1,x1,y2,x2;
            cin >> y1 >> x1 >> y2 >> x2;
            cout << arr[y2][x2] - arr[y1-1][x2] - arr[y2][x1-1] + arr[y1-1][x1-1] << "\n";  //輸出答案
        }
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}