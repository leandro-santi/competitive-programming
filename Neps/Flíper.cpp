#include<bits/stdc++.h>

using namespace std;

int main(){
    int p, r; cin >> p >> r;
    
    if(p == 1 && r == 1) cout << 'A' << endl;
    else if(p == 1 && r == 0) cout << 'B' << endl;
    else cout << 'C' << endl;

    return 0;
}