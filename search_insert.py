class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if len(nums) == 0:
            return 0
        
        left = 0
        right = len(nums)-1

        while(left <= right):
            mid = left+(right-left)//2
            print(mid)
            if nums[mid] == target:
                return mid
            elif target > nums[mid]:
                    left = mid+1
            else:
                    right = mid-1


        return left
