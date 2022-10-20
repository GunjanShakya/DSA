class Solution {
public:
    string intToRoman(int num) {
          int value[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string symbol[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        string ans = "";
        int index = 12;
        while(num)
        {
            int quo = num / value[index];
            num = num % value[index];
            while(quo)
            {
                ans += symbol[index];
                quo--;
            }
            index--;
        }
        return ans;
    }
};