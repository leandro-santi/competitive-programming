class Solution {
public:
    bool divisorGame(int N) {
        bool flag = true;
        int x = 1;
        while(N > 0){
            if(N%x == 0){
                flag = !flag;
                N = N - x;
                x = 1;
            }
            else x++;
        }
        return flag;
    }
};