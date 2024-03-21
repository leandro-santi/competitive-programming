#include<bits/stdc++.h>

using namespace std;

int main(){
    float n1, n2; cin >> n1 >> n2;

    float m = (n1 * 2 + n2 * 3) / 5;

    if(m >= 7.0) cout << "Aprovado" << endl;
    else if(m >= 3) cout << "Final" << endl;
    else cout << "Reprovado" << endl;

    return 0;
}