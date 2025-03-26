class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp1;
        for(int i=0;i<nums.size();i++){
            if(mp1.find(nums[i])!=mp1.end()&&abs(i-mp1[nums[i]])<=k){
                return true;
            }
            mp1[nums[i]]=i;
        }
        return false;
        
    }
};