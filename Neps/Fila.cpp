#include <bits/stdc++.h>

#define N 50001

using namespace std;

int main(){
    int n, i, j, m, number, counter = 0; cin >> n;
    
    int v[N], aux[n];
    
    for(i = 0; i < n; i++){
        cin >> number;
        aux[i] = number;
        v[number] = 1;
    }
    
    cin >> m;
    
    while(m--){
        cin >> number;
        v[number] = -1;
    }
    
    for(i = 0; i < n; i++){
        if(v[aux[i]] != -1) cout << aux[i] << " ";
    }
    
    cout << endl;
	
	return 0;
}