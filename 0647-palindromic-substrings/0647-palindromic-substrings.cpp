class Solution {
public:
    bool isPalindrome(string st) {
        int left = 0, right = st.size() - 1;
        while (left < right) {
            if (st[left] != st[right]) return 0;
            left++;
            right--;
        }
        return 1;
    }

    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            string t = "";
            for (int j = i; j < n; j++) {
                t += s[j];
                if(isPalindrome(t)) count++;
            }
        }
        return count;
    }
};