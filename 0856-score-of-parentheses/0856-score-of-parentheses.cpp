class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(int i =0;i < s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(0);
            }
            else
            {
                int val = st.top();
                st.pop();

                int currentvalue = max(2*val,1);
                int previousScore = st.top();
                previousScore += currentvalue;

                st.pop();

                st.push(previousScore);
            }
        }
        return st.top();
    }
};