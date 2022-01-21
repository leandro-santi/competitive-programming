class Solution {
public:
    int xorOperation(int n, int start) {
        int vector[n];
        for(int i = 0; i < n; i++){
            vector[i] = start + (2 * i);
        }
        int xoraum = vector[0];
        for(int i = 1; i < n; i++){
            xoraum = xoraum ^ vector[i];
        }
        
        return xoraum;
    }
};