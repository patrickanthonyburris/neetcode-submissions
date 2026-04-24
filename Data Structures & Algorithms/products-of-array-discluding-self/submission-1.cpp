class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tot_product = 1;
        int count_zeroes = 0;
        int zero_index = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                tot_product = tot_product * nums[i];
            } else {
                count_zeroes++;
                zero_index = i;
            }
        }
        if(count_zeroes > 1) {
            return vector<int>(nums.size(), 0);
        }
        
        vector<int> res(nums.size(), 0);
        if(count_zeroes == 1) {
            res[zero_index] = tot_product;
            return res;
        } else {
            for(size_t i = 0; i < nums.size(); i++) {
                res[i] = tot_product / nums[i];
            }
        return res;
        }
    }
};
