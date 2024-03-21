#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, aux, sum = 0; cin >> n;
    
    for(i = 0; i < n; i++){
        cin >> aux;
        sum += aux;
        if(sum >= 1000000) break;
    }
    
    cout << i + 1 << endl;

    return 0;
}