class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        // Count frequency of each number
        for (int num : nums)
        {
            freq[num]++;
        }

        // Find the number that appears once
        for (int num : nums)
        {
            if (freq[num] == 1)
            {
                return num;
            }
        }

        return -1; // This line will never be reached for valid input
    
    }
};
