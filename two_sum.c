/* 
Instructions:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/

int* twoSum nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int *res = (int *)malloc(2 * sizeof(int));
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    return res;
}
