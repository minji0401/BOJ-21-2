//2022.01.10 03625
//BOJ11651

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
}loc;

int cmp(const void *a, const void *b)
{
    loc* aLoc = (loc*)a;
    loc* bLoc = (loc*)b;
    
    if((aLoc->y) == (bLoc->y)) 
        return (aLoc->x) - (bLoc->x);   
    else
        return (aLoc->y) - (bLoc->y);
}
int main()
{
    int size;
    scanf("%d", &size);
    
    loc numArr[size];
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d %d", &numArr[i].x, &numArr[i].y);
    }
    
    qsort(numArr, size, sizeof(loc), cmp);  
    
    for(int i = 0; i < size; i++)
    {
        printf("%d %d\n", numArr[i].x, numArr[i].y);
    }
    
    return 0;
}