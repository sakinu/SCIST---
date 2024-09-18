#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e4+5, mod=1e9+7; //mod 是題目給定要取模的數字
int dp[MAX_N];

void solve() {
    dp[0] = dp[1] = 1;      //將 dp[0] 和 dp[1] 設為 1
    for(int i=2;i<MAX_N;i++) {      //預先算好 dp[0~題目給定詢問最大值] 的所有答案，則接下來都只需要直接回答問題
        dp[i] = (dp[i-2] + dp[i-1]) % mod;      //我們定義好的轉移式，要注意在這邊就要先取模
    }
    int n;
    while(cin >> n) {
        cout << dp[n] << "\n";      //由於可能的詢問，我們都已經算出答案了，所以直接回答 dp[n] 即可！
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}