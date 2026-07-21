int maximumDifference(int* nums, int numsSize) {
    int minimum=nums[0];
    int maxdifference=nums[1]-nums[0];
    int i;
    for(i=1;i<numsSize;i++){
        if(nums[i]-minimum>maxdifference){
            maxdifference= nums[i]-minimum;
        }
    if(nums[i]< minimum){
        minimum=nums[i];
    }
    }
    if(maxdifference <= 0)
        return -1;
    return maxdifference;
    
}