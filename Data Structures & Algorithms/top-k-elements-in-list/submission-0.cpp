class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> freq;

        // Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Store {element, frequency} pairs
        vector<pair<int, int>> elements;

        for (auto it : freq) {
            elements.push_back(it);
        }

        // Sort by frequency (highest first)
        sort(elements.begin(), elements.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        // Take first k elements
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(elements[i].first);
        }

        return result;
    
    }
};
