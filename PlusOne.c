/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    
  
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }

    
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (result[i] < 9) {
            result[i]++;
            *returnSize = digitsSize;
            return result;
        } else {
            result[i] = 0;
        }
    }


    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}
