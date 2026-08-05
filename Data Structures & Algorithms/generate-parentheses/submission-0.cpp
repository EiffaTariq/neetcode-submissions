class Solution {
    public:
        vector<string> ans;

            void solve(int open, int close, string curr, int n) {
                    // Base case: valid string of length 2*n is formed
                            if (curr.length() == 2 * n) {
                                        ans.push_back(curr);
                                                    return;
                                                            }

                                                                    // We can add '(' if we still have some left
                                                                            if (open < n) {
                                                                                        solve(open + 1, close, curr + '(', n);
                                                                                                }

                                                                                                        // We can add ')' only if it won't make the string invalid
                                                                                                                if (close < open) {
                                                                                                                            solve(open, close + 1, curr + ')', n);
                                                                                                                                    }
                                                                                                                                        }

                                                                                                                                            vector<string> generateParenthesis(int n) {
                                                                                                                                                    solve(0, 0, "", n);
                                                                                                                                                            return ans;
                                                                                                                                                                }
                                                                                                                                                                };