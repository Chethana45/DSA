int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int capacity = 64; 
    int **res = (int **)malloc(capacity * sizeof(int *));
    int count = 0;

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates
        if (nums[i] > 0) break; 

        int left = i + 1;
        int right = numsSize - 1;
        int target = -nums[i];

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                // allocate triplet
                int *triplet = (int *)malloc(3 * sizeof(int));
                triplet[0] = nums[i];
                triplet[1] = nums[left];
                triplet[2] = nums[right];
                if (count >= capacity) {
                    capacity *= 2;
                    res = (int **)realloc(res, capacity * sizeof(int *));
                }
                res[count++] = triplet;

                left++;
                right--;
                // skip duplicates
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    // prepare returnColumnSizes
    int *colSizes = (int *)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++) colSizes[i] = 3;

    *returnColumnSizes = colSizes;
    *returnSize = count;

    return res;
}