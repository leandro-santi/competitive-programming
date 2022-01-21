class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cont = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i]%2 != 0){ 
                cont++;
                if(cont == 3) return true;
            }
            else cont = 0;
        }
        return false;
    }
};