#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toasts = (k * l) / nl;
    int maxlemon = c * d;
    int salt = p / np;
    int answ = min(min(toasts, maxlemon),salt) / n;
    cout << answ << endl;

    return 0;
}