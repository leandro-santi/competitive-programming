#include <bits/stdc++.h>

using namespace std;

int main(){
    char op; cin >> op;
    double a, b; cin >> a >> b;
    
    switch(op){
        case 'M':
            printf("%.2f", a * b);
            break;
        case 'D':
            printf("%.2f", a / b);
            break;
    }
	
	return 0;
}