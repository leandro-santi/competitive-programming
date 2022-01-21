#include<bits/stdc++.h>

using namespace std;
// 2, 5, 8 = 15
int main(){
    int n, k; cin >> n >> k;
    int r, g, b;
    r = n * 2;
    g = n * 5;
    b = n * 8;
    int s = ((r+k-1)/k) + ((g+k-1)/k) + ((b+k-1)/k);
    cout << s << endl;
    return 0;
}