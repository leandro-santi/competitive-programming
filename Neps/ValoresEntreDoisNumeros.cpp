#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    
    if (a > b) swap(a, b);
    
    for(int i = a; i <= b; i++){
        cout << i << " ";
    }
    
    cout << endl;

    return 0;
}