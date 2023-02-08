#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, aux, r, j;

    int jack[1000001], jill[1000001];
    
    while(1){

        cin >> n >> m;

        if(n == 0 && m == 0) break;

        r = 0;
        j = 0;

        for(int i = 0; i < n; i++){
            cin >> aux;
            jack[i] = aux;
        }

        for(int i = 0; i < m; i++){
            cin >> aux;
            jill[i] = aux;
        }

        for(int i = 0; i < n; i++){
            while(j < m && jill[j] < jack[i]){
                j++;
            }
            if (jill[j] == jack[i]) r++;
        }

        cout << r << endl;

    }

    return 0;
}