#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, result;
    char op;
    
    cin >> n;
    cin >> p >> op >> q;
    
    if(op == '+') result = p + q;
    else result = p * q;
    
    result <= n ? cout << "OK" << endl : cout << "OVERFLOW" << endl;

    return 0;
}