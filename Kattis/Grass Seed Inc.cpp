#include<bits/stdc++.h>

using namespace std;

int main(){
    int l, aux;
    float c, x, y, r = 0;
    cin >> c >> l;

    while(l--){
        cin >> x >> y;
        r += (x*y);
    }

    printf("%.7f\n", r * c);

    return 0;
}