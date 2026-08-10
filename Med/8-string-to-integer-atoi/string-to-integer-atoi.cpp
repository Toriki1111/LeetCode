#include <string>
#include <climits> 
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        long long result = 0;
        bool isNeg = false;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                isNeg = true;
            }
            i++; 
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
            if (!isNeg && result > INT_MAX) {
                return INT_MAX; // 2147483647
            }
            if (isNeg && -result < INT_MIN) {
                return INT_MIN; // -2147483648
            }
            i++;
        }
        return isNeg ? -result : result;
    }
};