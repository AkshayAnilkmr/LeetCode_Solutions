class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long num=0;
        while(temp>0){
            num=num*10+(temp%10);
            temp/=10;

        }if(num==x){
            return true;
        }else{
            return false;
        }
        
    }
};