# Version 1 - Created list as a separate entity
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # Create a list to store indices of 2 number that adds up to target
        result = []

        # A way to obtain indices from nums such as the 2 nums adds up to target

        # the i index starts at 0
        for i in range(len(nums)):
            # the j index starts at j+1 using the pyton range(start, stop) type
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    # Append indices to list to list
                    result.append(i)
                    result.append(j)
                    return result
                
        return result