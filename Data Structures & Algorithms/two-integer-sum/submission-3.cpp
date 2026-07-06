class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // Found the pair: return complement's index and current index
                return {numMap[complement], i};
            }
            
            // Otherwise, track the current number and its index
            numMap[nums[i]] = i;
        }
        
        // Return empty vector if no solution exists
        return {};
    }
};
