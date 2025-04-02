class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int index=0;
        string str1=strs[0];
        string str2=strs[strs.size()-1];
        while(index<strs[0].size()){
            if(str1[index]==str2[index]){
                index++;
            }
            else{
                break;
            }
        }
        return index==0?"":str1.substr(0,index);


    }
};