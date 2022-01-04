//2022.01.04 03625
//BOJ2750

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
    
    for(int i = 0; i < size; i++)
        printf("%d\n", numArr[i]);
    
    return 0;
}