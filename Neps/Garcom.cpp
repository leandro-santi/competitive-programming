#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int l, c, total = 0;
    
    while(n--){
        cin >> l >> c;
        
        if(l > c) total += c;
    }
    
    cout << total << endl;

    return 0;
}