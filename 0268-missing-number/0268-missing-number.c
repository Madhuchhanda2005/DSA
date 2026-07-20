int missingNumber(int* nums, int numsSize) {
    int expectedsum =numsSize*(numsSize+1)/2;
    int actualsum=0;
    
    int i;
    int difference;
    for (i=0;i<numsSize;i++)
    {
        actualsum=actualsum+nums[i];
    }
    difference= expectedsum-actualsum;
    return difference;
}