#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int s1, s2;
        s1 = (a + c - 1)/ c;
        s2 = (b + d - 1) / d;

        if((s1 + s2) <= k) cout << int(s1) << " " << int(s2) << endl;
        else cout << -1 << endl;

    }
    return 0;
}