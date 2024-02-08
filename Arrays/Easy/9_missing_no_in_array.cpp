class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto &i : nums)
        sum += i;

        int n = nums.size();
        int actualSum = ( (1 +n)*n / 2);
        return actualSum - sum;
    }
};
