class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;

         for(int i =0;i < s.size();i++)
         {
            char ch = s[i];
            if(!st.empty())
            {
                if(ch == st.top())
                {
                    st.pop();
                    continue;
                }
                
            }
            st.push(s[i]);
         }
         string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
    
        reverse(result.begin(), result.end());
        return result;
    }
};