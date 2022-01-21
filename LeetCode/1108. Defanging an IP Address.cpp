class Solution {
public:
    string defangIPaddr(string address) {
        string aux = "";
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                aux = aux + '[' + address[i] + ']';
            }
            else aux = aux + address[i];
        }
        return aux;
    }
};