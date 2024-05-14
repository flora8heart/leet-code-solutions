/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
        /*
        *This method creates a new list to store running sum
        *
        * Time: O(n) where N is the length of numbers
        * Space: O(n) for the new list
        */  

        //Dereference the returnSize pointer and initialise its value to the length of the original array (give by the problem set)
        *returnSize = numsSize;
        // printf("Size is: %i\n", *returnSize);
        // printf("Size is: %d\n", *returnSize);

        // Declare and initialise a new array to store the running sum.
        int *runningsums = malloc(*returnSize * sizeof(int));

        // Check if malloc has failed. NULL if malloc failed
        if (runningsums == NULL)
        {
            *returnSize = 0;  // Set return size as 0 for error handling
            return 1;
        }

        // Overwrite the 0th index of the new list with the value from the 0th index of the original list
        runningsums[0] = nums[0];
        // printf("%d\n", runningsums[0]);

        //Iterate from the 1th index and do running sum. Store the running sum in the new list
        for (int i = 1; i < *returnSize; i++)
        {
            int runningsum = runningsums[i-1] + nums[i];
            // printf("nums[i] %d\n", nums[i]);
            // printf("runningsum %d\n", runningsum);
            runningsums[i] = runningsum;
        }

        // Return new list
        return runningsums;
}
