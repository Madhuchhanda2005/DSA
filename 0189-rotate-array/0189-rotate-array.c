void rotate(int* nums, int numsSize, int k) {
    int i, b[numsSize];
    for(i=0;i<numsSize;i++){
        b[(i+k)%numsSize]=nums[i];
    }
    for(i=0;i<numsSize;i++){
        nums[i]=b[i];
        
}
}