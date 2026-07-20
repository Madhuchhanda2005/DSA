int maxProduct(int* nums, int numsSize) {
    int i;
 int maxpro= nums[0];
 int minpro=nums[0];
 int answer=nums[0];
  for(i=1;i<numsSize;i++){
  if(nums[i]<0){
    int temp= maxpro;
    maxpro= minpro;
    minpro=temp;
  }
  if(nums[i]>maxpro*nums[i]){
    maxpro=nums[i];
  }
else {maxpro=maxpro*nums[i];
}
  if(nums[i]<minpro*nums[i]){
    minpro=nums[i];

  }
  else {
    minpro=minpro*nums[i];
  
  }
if (answer<maxpro){
    answer=maxpro;
}
}
 return answer;
}