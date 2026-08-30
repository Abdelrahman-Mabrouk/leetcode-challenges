class Solution {
public:
    string intToRoman(int n) {
        map<int, string> m = {
                {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"},
                {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"},
                {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
        };

        string res = "";
        for (auto i = m.rbegin(); i != m.rend(); ++i) {
            while (n >= i->first) {
                res += i->second;
                n -= i->first;
            }
        }
        return res;

    }
    };
