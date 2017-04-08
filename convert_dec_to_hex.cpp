class Solution {
private:
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}; 
public:
    string toHex(int num) {
        if (num  == 0)
            return "0";
        string result;
        int cnt = 0;
        while (num && cnt++ < 8) {
            result = hex[(num & 0b1111)] + result;
            num >>= 4;
        }
        return result;
    }
};
