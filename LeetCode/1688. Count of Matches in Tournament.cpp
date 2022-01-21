class Solution {
public:
    int numberOfMatches(int n) {
        int s = 0, aux = 0;
        while(n > 1){
            aux = 0;
            if(n%2 == 0){
                aux = (n/2);
                s += aux;
                n = aux;
            }
            else{
                aux = ((n-1)/2);
                s += aux;
                n = aux + 1; //
            }
        }
        return s;
    }
};