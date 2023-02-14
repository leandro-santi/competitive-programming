#include<bits/stdc++.h>

using namespace std;

int main(){
    int h, m, aux = 45; cin >> h >> m;

    while(aux--){
        m--;
        if(m < 0){
            m = 59;
            h--;
            if(h < 0) h = 23;
        }
    }

    cout << h << " " << m << endl;
    
    return 0;
}