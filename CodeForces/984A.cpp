#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int v[1005];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v,v+n);
    
    cout << v[(n-1) / 2] << endl;
    
    return 0;
}