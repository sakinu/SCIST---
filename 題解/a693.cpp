#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5+5;
int arr[MAX_N];

void solve() {
    int n,q;
    while(cin >> n >> q) {          //若有多組測資則可以這樣寫，意思是只要我還有讀入 n 和 q ，就執行 while 內的程式
        int arr[n+1];       //開一個陣列
        int pre[n+1];       //開一個前綴和陣列
        for(int i=1;i<=n;i++) {
            cin >> arr[i];  //輸入 n 個數
        }
        pre[0] = 0;
        for(int i=1;i<=n;i++) {
            pre[i] = pre[i-1] + arr[i];           //將前綴和的內容做好
        }
        while(q--) {    //回答 q 次詢問
            int l,r;
            cin >> l >> r;  //讀入詢問的區間
            cout << pre[r] - pre[l-1] << "\n";  //按照定義，這樣就能得到 arr[r~l] 的和
        }
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}