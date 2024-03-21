#include<bits/stdc++.h>

using namespace std;

int main(){
    int bino, cino; cin >> bino >> cino;

    (bino + cino) % 2 == 0 ? cout << "Bino" << endl : cout << "Cino" << endl;

    return 0;
}