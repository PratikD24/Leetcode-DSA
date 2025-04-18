class Solution {
public:
    int compress(vector<char>& chars) {
        int indx = 0;
        int i = 0;

        while (i < chars.size()) {
            char ch = chars[i];
            int cnt = 0;
            int j = i;

            // Count how many times the current character repeats
            while (j < chars.size() && chars[j] == ch) {
                cnt++;
                j++;
            }

            // Write character
            chars[indx++] = ch;

            // If count > 1, convert count to string and store
            if (cnt > 1) {
                string str = to_string(cnt);
                for (auto e : str) {
                    chars[indx++] = e;
                }
            }

            // Move to the next group
            i = j;
        }

        chars.resize(indx);
        return indx;
    }
};
