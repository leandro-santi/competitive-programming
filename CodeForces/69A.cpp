#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int aux1 = 0;
    int aux2 = 0;
    int aux3 = 0;
    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        aux1+=a;
        aux2+=b;
        aux3+=c;
    }

    if(!aux1 && !aux2 && !aux3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}