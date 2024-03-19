#include<bits/stdc++.h>

using namespace std;

// Obs: Fazer com Grafos

int main(){
    int n, a, b; cin >> n;

    string v[n], aux;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n-1; i++){
        cin >> a >> b;
        v[a-1] += v[b-1];
        v[b-1] = "";
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << "";
    }

    cout << endl;

    return 0;
}