/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
        /*
        *This method uses existing list to store running sum
        *
        * Time: O(n) where N is the length of numbers
        * Space: O(1) for using existing list
        */  

        // numSize is store in *returnSize so that the value of numSize is not lost when this function is the popped off the stack after being called.
         *returnSize = numsSize;

        //Iterate from the 1st index and do running sum. Overwrite exist value with the running sum with the new value
    
        for (int i = 1; i < numsSize; i++)
        {
            int runningSum = nums[i] + nums[i-1];
            // printf("nums[i] %d\n", nums[i]);
            // printf("runningsum %d\n", runningSum);
            nums[i] = runningSum;
        }

        // Return new list
        return nums;
}
