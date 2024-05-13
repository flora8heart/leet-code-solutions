class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        """
        This method creates a new list to store running sum using C-like method

        Time: O(n) where N is the length of numbers
        Space: O(n) for the new list

        """
        # Create a new list to store the running sum. Initialise the list with 0 * the size of nums
        runningsum = [0] * len(nums)
        
        # Overwrite the 0th index of the new list with the value from the 0th index of the original list
        runningsum[0] = nums[0]
        
        # Iterate from the 1th index and do running sum. Store the running sum in the new list
        for i in range(1, len(nums)):
            runningsum[i] = runningsum[i-1] + nums[i]

        # return new list 
        return runningsum