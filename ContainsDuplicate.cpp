class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for(const int &i: nums)    {
            set.insert(i);
        }
        
        return !(set.size() == nums.size());
    }
};
