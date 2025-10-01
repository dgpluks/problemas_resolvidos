int missingNumber(int* nums, int numsSize) {
    int mai=0;
    for(int i=0;i<numsSize;i++){
        int t=0;
        if(mai<nums[i]){
            mai=nums[i];
        }
        while(t!=numsSize){
            if(t==numsSize-1 && nums[t]!=i){
                return i;
            }
            if(nums[t]!=i){
                t++;
            }else{
                t=numsSize;
            }
        }
    }
    return mai+1;
}
