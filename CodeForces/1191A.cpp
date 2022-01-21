#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int s;
    char c = 'Z';
    for(int i = 0; i <= 2; i++){
        if((n+i)%4 == 0){
            if(c > 'D'){
                c = 'D';
                s = i;
            }
        }
        if((n+i)%4 == 2){
            if(c > 'C'){
                c = 'C';
                s = i;
            } 
        }
        if((n+i)%4 == 3){
            if(c > 'B'){
                c = 'B';
                s = i;
            }
        }
        if((n+i)%4 == 1){
            if(c > 'A'){
                c = 'A';
                s = i;
            } 
        }
    }

    cout << s << " " << c << endl;
    return 0;
}