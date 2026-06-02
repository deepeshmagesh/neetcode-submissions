class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()){
        return false;
       }

       unordered_map<char ,int> chars;
       unordered_map<char ,int> chart;

       for(int i=0;i<s.length();i++){
        chars[s[i]]++;
        chart[t[i]]++;
       }
       return chars==chart;
        
    }
};
