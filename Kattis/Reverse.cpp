#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux; cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> aux;
        v[i] = aux;
    }

    for(int i = n-1; i >= 0; i--){
        cout << v[i] << endl;
    }

    cout << endl;
    
    return 0;
}