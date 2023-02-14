#include<bits/stdc++.h>

using namespace std;

int main(){
    int s, max_sum = 0, winner, a, b, c, d;

    for(int i = 0; i < 5; i++){
        cin >> a >> b >> c >> d;
        s = a + b + c + d;
        if(s > max_sum){
            max_sum = s;
            winner = i + 1;
        }
        
    }

    cout << winner << " " << max_sum << endl;
    
    return 0;
}