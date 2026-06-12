/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int answer[2];
    for(int i=0;i<numsSize;i++){
        for(int j=i+1 ;j<numsSize;j++){
    if(target == nums[i]+nums[j]){
        answer[0]=i;
        answer[1]=j;
        *returnSize =2;
        return answer;
    }}}
    return answer;
    }
    
