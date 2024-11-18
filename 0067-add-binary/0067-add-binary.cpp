class Solution {
public:
    string addBinary(string a, string b) {
        int len_of_a = a.length();
        int len_of_b = b.length();

        int idx_a = len_of_a - 1;
        int idx_b = len_of_b - 1;

        char carry = '0';
        string result = "";

        while (idx_a >= 0 || idx_b >= 0) {
            char first = idx_a >= 0 ? a[idx_a] : '0';
            char second = idx_b >= 0 ? b[idx_b] : '0';

            if (first == '1' && second == '1') {
                result += carry == '1' ? '1' : '0';
                carry = '1';
            }
            else if (first == '0' && second == '0') {
                result += carry == '1' ? '1' : '0';
                carry = '0';
            }
            else {
                result += carry == '1' ? '0' : '1';
            }
            idx_a--;
            idx_b--;
        }
        if (carry == '1') {
            result += '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};