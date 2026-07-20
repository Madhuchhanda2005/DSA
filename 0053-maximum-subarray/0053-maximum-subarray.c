int maxSubArray(int* nums, int numsSize) {
    int i;
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (i = 0; i < numsSize; i++) {
        currentsum=currentsum+nums[i];
         if (currentsum > maxsum) {
             maxsum = currentsum ;
             }
        if (currentsum < 0) {
            currentsum = 0;
        }
    }
    printf("%d",maxsum);
    return maxsum;
}