/*
NAMA   : M. FADLI ZEIN
KELAS  : TK 1 B
NO BP  : 1601081035
NP     : ARRAY 1\
*/

#include <stdio.h>
void main()
{
    int A[100];
    int B[100];
    int C[100];
    int i,n;
    printf("MASUKAN BNYAK DATA : "); scanf("%d",&n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d} = ",i+1); scanf("%d",&A[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("B[%d} = ",i+1); scanf("%d",&B[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        C[i]=A[i]+B[i];
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("C[%d} = %d\n",i+1,C[i]);
    }

}
