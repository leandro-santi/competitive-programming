#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, r = 0, aux, s;
    cin >> n;
    while (n--){
        cin >> s;
        aux = s % 10;
        s /= 10;
        r += pow(s, aux);
    }

    cout << r << endl;

    return 0;
}