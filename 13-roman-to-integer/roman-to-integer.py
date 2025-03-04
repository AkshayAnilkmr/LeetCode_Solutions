class Solution:
    def romanToInt(self, s: str) -> int:
        n=len(s)
        result=0
        dict={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        for i in range(n):
            if i<n-1 and dict[s[i]]<dict[s[i+1]]:
                result-=dict[s[i]]
            
            else:
                 result+=dict[s[i]]
        return result
                


        
        