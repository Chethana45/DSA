int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    static int arr[100][3];
    static int* result[100];
    static int colsize[100];

    *returnSize = 0;
    *returnColumnSizes = colsize;

    for(int i = 0; i < numsSize; i++) {

        for(int j = i + 1; j < numsSize; j++) {

            for(int k = j + 1; k < numsSize; k++) {

                if(nums[i] + nums[j] + nums[k] == 0) {

                    int a = nums[i];
                    int b = nums[j];
                    int c = nums[k];

                    if(a > b) {
                        int t = a;
                        a = b;
                        b = t;
                    }

                    if(a > c) {
                        int t = a;
                        a = c;
                        c = t;
                    }

                    if(b > c) {
                        int t = b;
                        b = c;
                        c = t;
                    }

                    int duplicate = 0;

                    for(int x = 0; x < *returnSize; x++) {

                        if(arr[x][0] == a &&
                           arr[x][1] == b &&
                           arr[x][2] == c) {

                            duplicate = 1;
                            break;
                        }
                    }

                    if(!duplicate) {

                        arr[*returnSize][0] = a;
                        arr[*returnSize][1] = b;
                        arr[*returnSize][2] = c;

                        result[*returnSize] = arr[*returnSize];

                        colsize[*returnSize] = 3;

                        (*returnSize)++;
                    }
                }
            }
        }
    }

    return result;
}
