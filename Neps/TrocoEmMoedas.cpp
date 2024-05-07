#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int c, coins = 0; cin >> c;
    int m100, m50, m25, m10, m5, m1;
    m100 = m50 = m25 = m10 = m5 = m1 = 0;
    
    while(c > 0){
        if(c >= 100){
            c -= 100;
            m100++;
        }
        else if(c >= 50){
            c -= 50;
            m50++;
        }
        else if(c >= 25){
            c -= 25;
            m25++;
        }
        else if(c >= 10){
            c -= 10;
            m10++;
        }
        else if(c >= 5){
            c -= 5;
            m5++;
        }
        else if(c >= 1){
            c -= 1;
            m1++;
        }
        coins++;
    }
    
    cout << coins << endl 
    << m100 << endl 
    << m50 << endl 
    << m25 << endl 
    << m10 << endl 
    << m5 << endl 
    << m1 << endl;
    
	return 0;
}