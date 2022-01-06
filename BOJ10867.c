//2022.01.06 03625
//BOJ10867

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int size;
    scanf("%d", &size);
    
    int numArr[size];
    
    for(int i = 0; i < size; i++)
        scanf("%d", &numArr[i]);
    
    qsort(numArr, size, sizeof(int), cmp);
    
    printf("%d ", numArr[0]);
    for(int i = 1; i < size; i++)
    {
        if(numArr[i] != numArr[i - 1])
            printf("%d ", numArr[i]);
    }
    
    return 0;
}