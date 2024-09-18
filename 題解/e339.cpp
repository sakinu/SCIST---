#include<bits/stdc++.h>
using namespace std;

#define int long long   //加上這行來防止 overflow

signed main() {         //int 改成 signed
    int n;
    cin >> n;
    int arr[n+1];       //開一個陣列
    int pre[n+1];       //開一個前綴和陣列
    for(int i=1;i<=n;i++) {
        cin >> arr[i];  //輸入 n 個數
    }
    pre[0] = 0;
    for(int i=1;i<=n;i++) {
        pre[i] = pre[i-1] + arr[i];           //將前綴和的內容做好
    }
    for(int i=1;i<=n;i++) {
        cout << pre[i] << " ";           //輸出前綴和
    }
    cout << "\n";
}