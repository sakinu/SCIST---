#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5+5, mod=1e9+7;
int arr[MAX_N];

void solve() {
    set<int> st;
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        st.insert(x);       //一直把東西放入 set
    }
    cout << st.size() << "\n";  //由於 set 會幫忙去重，只需輸出裡面有多少元素，即可知道放入東西的種類數量
    for(auto it:st) cout << it << " ";  //for(auto it:st) 會依照順序用 it 跑過 st 內的所有東西，所以這樣寫等價於由小到大輸出 set 內所有元素
    cout << "\n";
    
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--) solve();
}