class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        """
        This method creates a new list to store running sum using a more pythonic method with .append()

        Time: O(n) where N is the length of numbers
        Space: O(n) for the new list

        """
        # Create a new list to store the running sum. Initialise list with 0
        runningsums = []
        
        # Append the value from the 0th index from the original list to the new list
        runningsums.append(nums[0])
        # print(runningsums)

        # Iterate from the 1st index and do running sum. Append the running sum to the new list
        for i in range(1, len(nums)):
            runningsum = runningsums[i-1] + nums[i]
            runningsums.append(runningsum)
            # print(runningsums[i])

        # return new list 
        return runningsums