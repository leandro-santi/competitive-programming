#include<bits/stdc++.h>

using namespace std;

// Obs: Descobrir o erro da saída

int main(){
    int n, k, aux, sum = 0, judges;
    float max = 0, min = 0;
    cin >> n >> k;

    judges = n;
    n -= k;

    while(k--){
        cin >> aux;
        sum += aux;
    }

    max = min = sum;

    while(n--){
        max += 3;
        min -= 3;
    }

    printf("%.2f ", min / judges);
    printf("%.2f\n", max / judges); 
    
    return 0;
}