class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>mp1;
        mp1['I']=1;
        mp1['V']=5;
        mp1['X']=10;
        mp1['L']=50;
        mp1['C']=100;
        mp1['D']=500;
        mp1['M']=1000;
        int value=mp1[s.back()];
        for(int i=s.size()-2;i>=0;i--){
            
            if(mp1[s[i]]<mp1[s[i+1]]){
                value-=mp1[s[i]];
            }
            else{
                value+=mp1[s[i]];

            }
            
        }
        return value;
    }
};