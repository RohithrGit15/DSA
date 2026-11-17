class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int i = s.size() -1;
        int j = t.size() - 1;

        int sSkip = 0;
        int tSkip = 0;

        while(i >= 0 || j >= 0)
        {
            while(i >= 0)
            {
                if(s[i] == '#')
                {
                    sSkip++;
                    i--;
                }
                else if(sSkip > 0)
                {
                    sSkip--;
                    i--;
                }
                else
                {
                    break;
                }
            }
            while(j >= 0)
            {
                if(t[j] == '#')
                {
                    tSkip++;
                    j--;
                }
                else if(tSkip > 0)
                {
                    tSkip--;
                    j--;
                }
                else
                {
                    break;
                }
            }
            if(i >= 0 && j >= 0)
            {
                if(s[i] != t[j])
                {
                    return false;
                }
            }
            else
            {
                if(i >= 0 || j >= 0)
                {
                    return false;
                }
            }
            i--;
            j--;
        }
        return true;
    }
};