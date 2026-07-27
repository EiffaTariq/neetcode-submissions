class Solution {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res = "";

        for (string &str : strs) {
            res += to_string(str.size()) + "#" + str;
        }

        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the delimiter '#'
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            j++; // Skip '#'

            res.push_back(s.substr(j, len));

            i = j + len;
        }

        return res;
    }
};