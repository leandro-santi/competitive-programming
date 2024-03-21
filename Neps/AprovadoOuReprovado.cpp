#include<bits/stdc++.h>

using namespace std;

int main(){
    float a, b; cin >> a >> b;

    float m = (a + b) / 2;

    if(m >= 7.0) cout << "Aprovado" << endl;
    else if(m >= 4) cout << "Recuperacao" << endl;
    else cout << "Reprovado" << endl;

    return 0;
}