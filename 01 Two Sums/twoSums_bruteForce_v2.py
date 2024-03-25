# Version 2 - Use Ad hoc list
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # A way to obtain indices from nums such as the 2 nums adds up to target

        # the i index starts at 0
        for i in range(len(nums)):
            # the j index starts at j+1 using the pyton range(start, stop) type
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                # Return an ad hoc list containing the indices.
                return [i, j]

        # Return empty list if there are no matching indices        
        return []