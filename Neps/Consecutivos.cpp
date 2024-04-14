#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n, aux, count, max_occurrences = 0, previous;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        
        if(i == 0) {
            count = 1;
            max_occurrences = 1;
        }
        
        else{
            if(aux == previous) {
                count++;
                if (count > max_occurrences) max_occurrences = count;
             }
            else count = 1;
        }
        
        previous = aux;
    }
    
    cout << max_occurrences << endl;

    return 0;
}