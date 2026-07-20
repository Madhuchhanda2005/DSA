int majorityElement(int* nums, int n) {
    int i;
   int candidate=0;
   int count=0;
   for(i=0;i<n;i++){
    if(count==0){
        candidate=nums[i];
    }
    if(nums[i]==candidate){
        count++;
    }
    else{count--;}
   }
    return candidate;
     
}
