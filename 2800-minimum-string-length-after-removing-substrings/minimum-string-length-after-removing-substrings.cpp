class Solution {
public:
    int minLength(string s) {
        int writeIdx = 0; // Acts as the top of our in-place stack

        for (int readIdx = 0; readIdx < s.size(); readIdx++) {
            if (writeIdx > 0 && 
               ((s[writeIdx - 1] == 'A' && s[readIdx] == 'B') || 
                (s[writeIdx - 1] == 'C' && s[readIdx] == 'D'))) {
                writeIdx--; // "Pop" by moving the write pointer back
            } else {
                s[writeIdx] = s[readIdx]; // "Push" by overwriting in-place
                writeIdx++;
            }
        }

        return writeIdx; // Represents the final valid length
    }
};