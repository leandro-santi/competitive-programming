#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int v[n], sonja[n];
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v, v+n);

    for(int i = 0; i < n-1; i++){
        cin >> sonja[i];
    }

    sort(sonja, sonja+n-1);

    for(int i = 0; i < n; i++){
        if(sonja[i] != v[i]){
            cout << v[i] << endl;
            break;
        }
    }

    return 0;
}