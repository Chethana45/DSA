int missingNumber(int* nums, int numsSize) {
    int visited[10001]={0};
    for(int i=0;i<numsSize;i++){

    visited[nums[i]]=1;
    }
    for (int i=0;i<=numsSize;i++){
        if(visited[i]==0) return i;
    }
    return 0;
    
}