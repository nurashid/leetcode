class Solution {
public:
    string intToRoman(int num) {
        map<int, string> mp;
        mp[1] = "I"; mp[4] = "IV";
        mp[5] = "V"; mp[9] = "IX";
        mp[10] = "X"; mp[40] = "XL";
        mp[50] = "L"; mp[90] = "XC";
        mp[100] = "C"; mp[400] = "CD";
        mp[500] = "D"; mp[900] = "CM";
        mp[1000] = "M";
        string result = "";
        while (num) {
            for (auto it = mp.rbegin(); it != mp.rend(); it++) {
                if (num >= it->first) {
                    num -= it->first;
                    result += it->second;
                    break;
                }
            }
        }
        return result;
    }
};
