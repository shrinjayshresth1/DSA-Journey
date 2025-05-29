class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; 

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement exists
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; 
            }

            // Store current number with its index
            numMap[nums[i]] = i;
        }

        return {}; // Return empty vector if no solution
    }
};