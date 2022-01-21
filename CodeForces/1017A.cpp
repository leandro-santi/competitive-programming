#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s = a + b + c + d;
    int ans = 1;
    for(int i = 2; i <= n; i++){
        cin >> a >> b >> c >> d;
        if(a + b + c + d > s) ans++;
    }

    cout << ans << endl;

    return 0;
}