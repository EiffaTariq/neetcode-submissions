#include <stack>;
class Solution {
public:
    bool isValid(string s) {
        stack<char> open_brackets;
        
        for (char ch : s) {
            // Push opening brackets onto the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                open_brackets.push(ch);
            } 
            // Handle closing brackets
            else {
                // If stack is empty, there is no matching opening bracket
                if (open_brackets.empty()) {
                    return false;
                }
                
                char top_element = open_brackets.top();
                
                // Check if the closing bracket matches the last opened bracket
                if ((ch == ')' && top_element == '(') ||
                    (ch == '}' && top_element == '{') ||
                    (ch == ']' && top_element == '[')) {
                    open_brackets.pop(); // Valid pair found, remove from stack
                } else {
                    return false; // Mismatched bracket type
                }
            }
        }
        
        // If the stack is empty, all brackets were correctly matched
        return open_brackets.empty();
    }
};
