class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n=len(nums)
        for i in range(len(nums)):
            if nums[i]==target:
                return i
        else:
            nums.append(target)
            nums.sort()
            return nums.index(target)
                
                
                