#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, n, used = 0, a;
    cin >> x >> n;

    while(n--){
        cin >> a;
        used += x - a;
    }

    cout << used + x << endl;

    return 0;
}