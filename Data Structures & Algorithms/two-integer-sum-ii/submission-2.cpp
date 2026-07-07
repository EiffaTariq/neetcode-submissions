class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left = 0;
        int right = numbers.size() -1;
        int curr_sum = 0;
        vector<int> arr;
        while(left<right)
        {
            curr_sum = numbers[left] + numbers[right];
            if(curr_sum > target)
            {
                right--;
            }
            if(curr_sum == target)
            {
                left++;
                right++;
                arr.push_back(left);
                arr.push_back(right);
                return arr;
            }
            if(curr_sum < target)
            {
                left++;
            }
        }
        return arr;
    }
};
