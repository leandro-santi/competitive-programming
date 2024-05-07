#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int c, coins = 0; cin >> c;
    
    while(c > 0){
        if(c >= 100){
            c -= 100;
        }
        else if(c >= 50){
            c -= 50;
        }
        else if(c >= 25){
            c -= 25;
        }
        else if(c >= 10){
            c -= 10;
        }
        else if(c >= 5){
            c -= 5;
        }
        else if(c >= 1){
            c -= 1;
        }
        coins++;
    }
    
    cout << coins << endl;
    
	return 0;
}