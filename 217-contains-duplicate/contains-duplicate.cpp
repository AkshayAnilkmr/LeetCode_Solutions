class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp1;
        for(auto sam:nums){
            mp1[sam]++;
        }
        for(auto temp:mp1){
            if(temp.second>1){
                return true;
            }        
        }
        return false;
        
        
    }
};