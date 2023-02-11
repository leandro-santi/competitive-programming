#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float r = 0, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        r += (x * y);
    }
    
    printf("%.3f", r);

    return 0;
}