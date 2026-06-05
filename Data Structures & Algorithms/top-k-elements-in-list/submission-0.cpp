class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i: nums){
            count[i]++;
        }
        vector<vector<int>> freq (nums.size()+1);
        for(const auto& i: count){
            freq[i.second].push_back(i.first);
        }
        
        vector<int>res;
        for(int i = freq.size()-1;i>0;i--){
            for(int j : freq[i]){
                if(res.size()<k){
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};
