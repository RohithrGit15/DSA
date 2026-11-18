class Solution {
public:
    int minAddToMakeValid(string s) {

        string st;
        int minadd = 0;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push_back(c);
            } else {
                if (st.empty()) {
                    minadd++;
                    continue;
                }
                if ((c == ')' && st.back() == '(') ||
                    (c == '}' && st.back() == '{') ||
                    (c == ']' && st.back() == '[')) {
                    st.pop_back();
                }
            }
        }
        
        return st.size() + minadd;
    }
};