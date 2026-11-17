class Solution {
public:
    bool isValid(string s) {
        
        string result = "";
        for(int i =0;i < s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                result.push_back(s[i]);
            }
            else
            {
                if(result.empty()) {
                    return false;
                }
                if(!result.empty())
                { 
                    if(s[i] == ')' && result.back() != '(' ||
                       s[i] == ']' && result.back() != '[' ||
                       s[i] == '}' && result.back() != '{')
                       {
                         return false;
                       }
                       result.pop_back();
                }
            }
        }
        return result.empty();
    }
};