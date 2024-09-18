#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5+5, mod=1e9+7;
int arr[MAX_N];

void solve() {
    set<string> st;
    int n;
    cin >> n;
    while(n--) {
        string gmail, id;
        cin >> gmail >> id; //讀入 gmail 和 id
        if(st.count(gmail)) {      //gmail 已註冊過（已存在於 set 之中
            cout << id << " " << "account has been used\n";
        }
        else {
            st.insert(gmail);      //這個 gmail 成功註冊，將其放入 set 內
            cout << "welcome," << " " << id << "\n";
        }
    }
    
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}