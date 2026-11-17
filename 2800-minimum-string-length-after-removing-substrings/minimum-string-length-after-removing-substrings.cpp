class Solution {
public:
    int minLength(string s) {
        int writeIdx = 0; 

        for (int readIdx = 0; readIdx < s.size(); readIdx++) {
            if (writeIdx > 0 && 
               ((s[writeIdx - 1] == 'A' && s[readIdx] == 'B') || 
                (s[writeIdx - 1] == 'C' && s[readIdx] == 'D'))) {
                writeIdx--;
            } else {
                s[writeIdx] = s[readIdx]; 
                writeIdx++;
            }
        }

        return writeIdx;
    }
};