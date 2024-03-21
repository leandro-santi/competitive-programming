#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux, sum = 0; cin >> n;
    
    while(n--){
        cin >> aux;
        sum += aux;
    }
    
    cout << sum << endl;

    return 0;
}