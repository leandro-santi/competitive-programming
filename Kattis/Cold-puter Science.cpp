#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n, aux, count = 0;
    cin >> n;

    while(n--){
        cin >> aux;
        if (aux < 0) count ++;
    }

    cout << count << endl;

    return 0;
}