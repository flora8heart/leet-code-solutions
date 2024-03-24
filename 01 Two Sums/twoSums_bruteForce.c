/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    //Declare and initialise a dynamic array to store returned results of size two

    //Dereference the returnSize pointer and initialise its value to 2
    *returnSize = 2;

    // Declaration of a dynamic array
    int* result = malloc(*returnSize * sizeof(int));

    // Check if malloc has failed. NULL if malloc failed.
    if (result == NULL)
    {
        return 1;
    }

    // Iterate over the array and compare addition of two values to target. Since loop starts at zero, i and j will loop until it's numsSize-1 so i < numsSize or i <= numsSize - 1
    for (int i = 0; i < numsSize ; i++)
    {
        // make sure that the jth index is not compared to ith index
        for (int j = i + 1 ; j < numsSize ; j++)
        {
            // if the ith index and ith index value adds up to target, store value in result array.
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    // After looping through the array, and there is no two sums that adds up to target, *returnSize = 0
    *returnSize = 0;
    free(result);
    return 0;
}