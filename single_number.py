class Solution:
    def singleNumber(self, nums: List[int]) -> int:

        freq = {}

        for el in nums:
            freq[el] = 0
        for el in nums:
            freq[el] +=1

        for key in freq:
            if freq[key] == 1:
                return key

        return -1