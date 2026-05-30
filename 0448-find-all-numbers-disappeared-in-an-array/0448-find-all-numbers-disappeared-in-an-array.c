
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    int* visited = (int*)calloc(numsSize + 1, sizeof(int));

    for(int i=0;i<numsSize;i++) {
        visited[nums[i]] = 1;
    }

    int* result = (int*)malloc(numsSize * sizeof(int));

    *returnSize = 0;

    for(int i=1;i<=numsSize;i++) {

        if(visited[i] == 0) {

            result[*returnSize] = i;
            (*returnSize)++;
        }
    }

    return result;
}
 