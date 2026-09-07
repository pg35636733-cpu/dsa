class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<bool> count(256, false);

        int First = 0;
        int second = 0;
        int len = 0;

        while (second < s.size()) {

            // If duplicate character is found
            while (count[s[second]]) {
                count[s[First]] = false;
                First++;
            }

            // Add current character
            count[s[second]] = true;

            // Update maximum length
            len = max(len, second - First + 1);

            second++;
        }

        return len;  // MUST be outside the while loop
    }
};