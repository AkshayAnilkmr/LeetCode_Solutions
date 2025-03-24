class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=needle.size();
        int count=0;
       for(int i=0;i<haystack.size();i++){
        if(haystack.substr(i,len)==needle){
            return i;
        }
        
        
    }return -1;
    }
};