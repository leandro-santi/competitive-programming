#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux; cin >> n;
    bool a = false, b = false;
    while(n--){
        cin >> aux;
        if(aux == 1){
            a = !a;
        }
        if(aux == 2){
            a = !a;
            b = !b;
        }
            
    }
    cout << a << endl << b << endl;
}