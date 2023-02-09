#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, r = "";
    int cont = 0, aux;
    cin >> s;

    aux = s.length();

    for(int i = 0; i < aux; i++){
        if(s[i] == 'e') cont++;
    }

    for(int i = 0; i < aux + cont; i++){
        if(i == 0) r += 'h';
        else if(i == (aux+cont)-1) r += 'y';
        else r += 'e';
    }

    cout << r << endl;
    
    return 0;
}