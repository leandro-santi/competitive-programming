class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> aux;
        for(int i = 0; i < A.size(); i++){
            if(A[i]%2 == 0) aux.push_back(A[i]);
        }
        for(int i = 0; i < A.size(); i++){
            if(A[i]%2 != 0) aux.push_back(A[i]);
        }
        return aux;
    }
};