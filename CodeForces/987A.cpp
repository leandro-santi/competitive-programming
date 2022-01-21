#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    int cont = 6;
    string x[6] = {"Power","Time","Space","Soul","Reality","Mind"};
    memset(v,0,6);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "purple") v[0] = 1;
        else if(s == "green") v[1] = 1;
        else if(s == "blue") v[2] = 1;
        else if(s == "orange") v[3] = 1;
        else if(s == "red") v[4] = 1;
        else if(s == "yellow") v[5] = 1;
        cont--;

    }
    cout << cont << endl;

    for(int i = 0; i < 6; i++){
        if(v[i] != 1){
            cout << x[i] << endl;
        }
    }

    return 0;
}