class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = (i + 1); j < nums.size(); j++) {
                if(target == (nums[i] + nums[j])) {
                    vector<int> answer;
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
    }
};
