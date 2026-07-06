class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if (s1.length() > s2.length())
            return false;

        unordered_map<char, int> s1Count;
        unordered_map<char, int> windowCount;

        // Count frequencies of s1
        for (char ch : s1)
            s1Count[ch]++;

        int windowSize = s1.length();

        // Build first window
        for (int i = 0; i < windowSize; i++)
            windowCount[s2[i]]++;

        if (windowCount == s1Count)
            return true;

        // Slide the window
        for (int i = windowSize; i < s2.length(); i++) {

            // Add new character
            windowCount[s2[i]]++;

            // Remove old character
            windowCount[s2[i - windowSize]]--;

            // Remove key if frequency becomes 0
            if (windowCount[s2[i - windowSize]] == 0)
                windowCount.erase(s2[i - windowSize]);

            if (windowCount == s1Count)
                return true;
        }

        return false;


    }
};
