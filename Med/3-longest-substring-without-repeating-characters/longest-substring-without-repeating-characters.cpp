using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int last_seen[256];
        for (int i = 0; i < 256; i++) {
            last_seen[i] = -1;
        }

        int max_count = 0;
        int left = 0;
        for (int right = 0; right < n; right++) {
            unsigned char c = (unsigned char)s[right];
            if (last_seen[c] >= left) {
                left = last_seen[c] + 1;
            }
            last_seen[c] = right; 

            if (right - left + 1 > max_count) {
                max_count = right - left + 1;
            }
        }

        return max_count;
    }
};