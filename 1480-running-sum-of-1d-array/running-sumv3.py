class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        """
        This method creates a new list to store running sum by replacing existing list.

        Time: O(n) where N is the length of numbers
        Space: O(1) because we're using existing list

        """
        
        # Iterate from the 1st index and do running sum. Overwrite the original value with the new calculated running sum.
        for i in range(1, len(nums)):
            runningsum = nums[i] + nums[i-1]
            nums[i] = runningsum
            # print(nums[i])

        return nums
