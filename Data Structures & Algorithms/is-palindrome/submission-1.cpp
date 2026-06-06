class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int b = 0;
        int e = n - 1;
        while(b<e){
            while(b<e && !isalnum(s[b])){
                b++;
            }
            while(e>b && !isalnum(s[e])){
                e--;
            }
            if(tolower(s[b]) != tolower(s[e])){
                return false;
            }
            b++;
            e--;
        }
        return true;
    }
};
