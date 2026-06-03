class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        int n = nums.size();
        vector<int> res(2);
        for (int i=0;i<n;i++){
            int diff = target - nums[i];
            if(a.count(diff)==0){
                a[nums[i]] = i;
            }
            else{
                res[1] = i;
                res[0] = a[diff];
                break;
            }
        }
        return res;
        
    }
};
