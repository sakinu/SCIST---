#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5+5;
int arr[MAX_N];
int pre[MAX_N];

signed main() {
    int n,q;        //n=陣列長度、q=詢問次數
    cin >> n >> q;
    for(int i=1;i<=n;i++) cin >> arr[i];
    for(int i=1;i<=n;i++) pre[i] = pre[i-1]+arr[i];
    while(q--) {
        int l,r;    //詢問的左右界
        cin >> l >> r;
        int sum = pre[r]-pre[l-1];
        //透過前綴和快速得到答案
        cout << sum << "\n";
    }
}