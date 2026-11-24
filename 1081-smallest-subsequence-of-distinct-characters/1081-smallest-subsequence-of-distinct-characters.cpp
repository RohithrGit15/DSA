class Solution {
public:
    string smallestSubsequence(string s) {
        string st;
       vector<int> lastIndex(26,0);
       vector<bool> visited(26,false);

       for(int i = 0;i < s.size();i++)
       {
           lastIndex[s[i] - 'a'] = i;
       } 

       for(int i = 0;i < s.size();i++)
       {
             if(visited[s[i] - 'a'])
                  continue;

            while(!st.empty() && st.back() > s[i] && lastIndex [st.back()- 'a'] > i )
            {
                visited[st.back() - 'a'] = false;
                st.pop_back();
            }
            st.push_back(s[i]);
            visited[s[i]  - 'a'] = true;
       }
       return st;
    }
};