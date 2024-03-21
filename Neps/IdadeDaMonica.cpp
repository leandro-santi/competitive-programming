#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, a, b, c = 0;
    cin >> m >> a >> b;
    
    c = m - a - b;
    
    if(c < a) swap(c, a);
    if(c < b) swap(c, b);
    
    cout << c << endl;
    
    return 0;
}