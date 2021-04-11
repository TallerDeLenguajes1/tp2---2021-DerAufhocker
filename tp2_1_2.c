#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 5

int main(){
    int c,f;
    float mt[N][M]={
        {2.2 , 3.1 , 2.6 , 9.2 , 0.5},
        {3.5 , 2.4 , 5.6 , 6.6 , 0.2},
        {2.2 , 3.1 , 2.6 , 9.2 , 0.5},
        {3.5 , 2.4 , 5.6 , 6.6 , 0.2},
        {4.3 , 0.2 , 4.4 , 2.2 , 1 }
    };

    float *pmt;

    pmt = &mt[0][0];

    for (int f = 0; f < N; f++)
    {
        for (int c = 0; c< M; c++)
        {
            printf("%.1f\t", *(pmt + c));
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

