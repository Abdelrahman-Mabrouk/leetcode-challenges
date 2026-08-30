class Solution {
public:
    string intToRoman(int n) {
       const vector<pair<int, string>> m {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
                {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
                {5, "V"},    {4, "IV"},   {1, "I"}};
        string res = "";
        for (auto i = m.begin(); i != m.end() ; ++i) {
                while(n>=i->first){
                    res+=i->second;
                    n-=i->first;
                }
        }
        return res;

    }
    };
