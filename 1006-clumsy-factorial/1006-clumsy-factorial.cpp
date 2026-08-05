class Solution {
public:
    int clumsy(int n) {

        stack<int> st;

        // Put the first number in the stack
        st.push(n);

        n--;

        // 0 -> *
        // 1 -> /
        // 2 -> +
        // 3 -> -
        int op = 0;

        while (n > 0) {

            if (op == 0) {
                // Multiply with the top element
                int top = st.top();
                st.pop();
                st.push(top * n);
            }
            else if (op == 1) {
                // Divide the top element
                int top = st.top();
                st.pop();
                st.push(top / n);
            }
            else if (op == 2) {
                // Addition -> push positive number
                st.push(n);
            }
            else {
                // Subtraction -> push negative number
                st.push(-n);
            }

            op = (op + 1) % 4;   // Move to the next operation
            n--;
        }

        // Add everything in the stack
        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};