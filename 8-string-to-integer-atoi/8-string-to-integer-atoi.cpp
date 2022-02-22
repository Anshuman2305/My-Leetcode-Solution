class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) {
            return 0;
        }
        int sign = 1, base = 0, i = 0;
        // Skip whitespaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i >= s.length()) {
            return 0;
        }
        // Check sign
        if (s[i] == '-' || s[i] == '+') {
            sign = s[i++] == '-' ? -1 : 1;
        }
        // Convert to integer and avoid overflow, avoid invalid input
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            if (base > INT_MAX / 10 || 
                (base == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            base = 10 * base + (s[i] - '0');
            i++;
        }
        return base * sign;
    }
};