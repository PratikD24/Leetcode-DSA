class Solution {
public:
    string largestOddNumber(string num) {
       int i = 0;
        int j = num.length() - 1;
        string str = "";

        while (i <= j) {  
            char ch = num[j];
            int number = ch - '0';

            if (number % 2 != 0) {  
                str = num.substr(0, j + 1);  // Fix: Extract correctly
                break;
            }
            j--;
        }

        return str;
    }
};