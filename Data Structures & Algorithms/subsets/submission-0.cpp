class Solution {
    public:
        vector<vector<int>> ans;

            void solve(int index, vector<int>& nums, vector<int>& curr) {
                    // Base case: all elements have been considered
                            if (index == nums.size()) {
                                        ans.push_back(curr);
                                                    return;
                                                            }

                                                                    // Choice 1: Include nums[index]
                                                                            curr.push_back(nums[index]);
                                                                                    solve(index + 1, nums, curr);

                                                                                            // Backtrack
                                                                                                    curr.pop_back();

                                                                                                            // Choice 2: Exclude nums[index]
                                                                                                                    solve(index + 1, nums, curr);
                                                                                                                        }

                                                                                                                            vector<vector<int>> subsets(vector<int>& nums) {
                                                                                                                                    vector<int> curr;
                                                                                                                                            solve(0, nums, curr);
                                                                                                                                                    return ans;
                                                                                                                                                        }
                                                                                                                                                        };