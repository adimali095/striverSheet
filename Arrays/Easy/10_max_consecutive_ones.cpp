class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0,count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 1){
                count++;
                if(count > maxi){
                    maxi = count;
                }
            }
            else{
                count = 0;
            }
        } 
        return maxi;
    }
};
