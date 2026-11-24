class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string s;

        for(int i = 0;i < num.size();i++)
        {
            char ch = num[i];

            while(k > 0 && !s.empty() && s.back() > ch)
            {
                s.pop_back();
                k--;
            }
            s.push_back(ch);
        }
        s.resize(s.size() - k);
        int start = 0;

        while(start < s.size() && s[start] == '0')
        {
            start++;
        }
        string result = s.substr(start);

        return result.empty() ? "0" : result;
    }
};