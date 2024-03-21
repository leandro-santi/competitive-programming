#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a != b && b == c) cout << a << endl;
    else if(a != b && a == c) cout << b << endl;
    else cout << c << endl;
    
    return 0;
}