#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> check;
        for(int i = 0; i < nums.size(); i++) {
            if(check.find(nums[i]) != check.end()) {
                return true;
            }
            check[nums[i]] = i;
        }
        return false;
    }
};