class Solution {
public:
    bool isPalindrome(string s) {
        int last = s.length() -1;
        int start = 0;
        while(last >= start){
          while (start < last && !isalnum(s[start]))
        start++;

    // Skip invalid characters on the right
    while (start < last && !isalnum(s[last]))
        last--;

    // Compare (case-insensitive)
    if (tolower(s[start]) != tolower(s[last]))
        return false;

    start++;
    last--;
        }
        return true;
    }
};
