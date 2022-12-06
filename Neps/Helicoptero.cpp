#include<bits/stdc++.h>

using namespace std;

int main(){
    int h, p, f, d;
    cin >> h >> p >> f >> d;

    while(1){
        if(f == h){
            cout << 'S' << endl;
            break;
        }
        else if(f == p){
            cout << 'N' << endl;
            break;
        }
        else{
            f+=d;
            if(f > 15) f = 0;
            else if(f < 0) f = 15;
        }
    }

    return 0;
}