#include<bits/stdc++.h>

using namespace std;

int main(){
    int v[5][5];
    int flag1, flag2;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> v[i][j];
            if(v[i][j] == 1){
                flag1 = i;
                flag2 = j;
            }
        }
    }
    cout << abs(flag1 - 3 + 1) + abs(flag2 - 3 + 1) << endl;

    return 0;
}