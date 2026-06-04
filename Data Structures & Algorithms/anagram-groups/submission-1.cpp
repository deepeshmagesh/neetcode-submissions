class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();
        if (n == 0 || n == 1) {
            res.push_back(strs);
            return res;
        }
        unordered_map<string,vector<string>> kv;
        for(const auto& s:strs){
            vector<int> count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            string key = to_string(count[0]);
            for(int i=1;i<26;i++){
                key += ',' + to_string(count[i]);
            }
            kv[key].push_back(s);
        }
        for(const auto& j: kv){
            res.push_back(j.second);
        }

        return res;
    }
};
