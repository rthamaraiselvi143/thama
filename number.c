#include <stdio.h>

int main()
{
    int A,B,C;
    printf("enter the number A,B and C:");
    scanf("%d %d %d",&A,&B,&C);
    if(A >=B && A>=C)
      printf("%d is a largest number.",A);
      if(B>=A && B>=C)
      printf("%dis a largest number.",B);
      if(C>=A && C>=B)
      printf("%d is a largest number.",C);

    return 0;
}
