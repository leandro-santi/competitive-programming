#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, n;
    cin >> x >> y >> n;
    string r = "";

    for(int i = 1; i <= n; i++){
        if (i % x == 0) r += "Fizz";
        if (i % y == 0) r += "Buzz";
        if (r == "") r += to_string(i);
        cout << r << endl;
        r = "";
    }

    return 0;
}