//2022.01.05 03625
//BOJ10989

#include <stdio.h>

int main()
{
    int numCnt[10001] = {'\0', }, size, num;
    
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &num);
        numCnt[num]++;
    }

    for(int i = 0; i < 10001; i++)
    {
        while(numCnt[i]--)
            printf("%d\n", i);
    }
    
    return 0;
}