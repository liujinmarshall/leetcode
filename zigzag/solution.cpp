class Solution { 
    public:
        string convert(string s, int numRows) {
            if (numRows == 1) {
                return s;
            }
            string res = "";
            for (int i = 0; i < numRows; i++) {
                int index = i;
                int k = 0;
                while (index < s.length()) {
                    res += s[index];
                    if (i == 0 || i == numRows - 1) {
                        index += (2 * numRows - 2);
                    } else {
                        if (k % 2 == 0) {
                            index += (2 * numRows - 2 - 2 * i);
                        } else {
                            index += 2 * i;
                        }
                    }
                    k++;
                }
            }
            return res;
        }

};
