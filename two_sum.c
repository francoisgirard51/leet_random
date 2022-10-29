/* 
Instructions:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/

int* twoSum nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int *result = (int *)malloc(2 * sizeof(int));
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return result;
}
