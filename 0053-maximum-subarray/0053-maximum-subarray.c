int maxSubArray(int* nums, int numsSize) {
    int sum=0;
    int maxi=nums[0];
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    if(sum>maxi)
    maxi=sum;
        if(sum<=0)
        sum=0;
    }
    return maxi;
}