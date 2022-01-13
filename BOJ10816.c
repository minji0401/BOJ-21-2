//2022.01.04 03625
//BOJ10816

#include <stdio.h>

int nCnt[10000001];
int nCntNeg[10000001];

int main()
{
    int size, num;
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &num);
        if(num >= 0)
            nCnt[num]++;
        else
            nCntNeg[(num * -1)]++;
    }
    
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &num);
        if(num >= 0)
            printf("%d ", nCnt[num]);
        else
            printf("%d ", nCntNeg[(num * -1)]);
    }
    return 0;
}