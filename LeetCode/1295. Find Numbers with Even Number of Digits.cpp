class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int aux = 0;
            while(nums[i] >= 1){
                nums[i] = nums[i]/10;
                aux++;
            }
            if(aux%2 == 0) count++;
        }
        
        return count;
    }
};