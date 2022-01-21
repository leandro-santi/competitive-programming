class Solution {
public:
    int subtractProductAndSum(int n) {
        int s1 = 0, s2 = 1;
        while(n != 0){
            s1 = s1 + (n%10);
            s2 = s2 * (n%10);
            n = n / 10;
        }
        
        return s2 - s1;
    }
};