class Solution {
public:
    bool isSubsequence(string s, string t) {
       
       int correctCount=0;
       int slen=s.size();
       int sCount=0;
       int tCount=0;
       while(tCount<t.size()&&sCount<s.size()){
        if(s[sCount]==t[tCount]){
            sCount++;
            }
        tCount++;
        
       }
       return sCount==s.size();

           }
};