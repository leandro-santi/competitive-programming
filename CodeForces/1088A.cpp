#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    
    for(int i = 0; i <= x; i ++){
        for(int j = 1; j <= x; j++){
            if(i%j == 0 && i*j > x && i/j < x){
                cout << i << " " << j << endl; 
                return 0;
            }
        }
    }
    cout << "-1" << endl;
    return 0;
}