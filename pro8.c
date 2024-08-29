#include <stdio.h>

void main()
{
 int i,j,a[3][4],n,I,J,ba=100, X=0,M=3,N=4,W=2;

 do
{printf("1.Row major\n 2.Column major \n 3.exit\n");
 printf("enter choice:");
 scanf("%d",&n);
 switch(n)
{ case 1:
 printf("Enter the elements for 3x3 matrix \n");
 for(i=0;i<3;i++)
 { for(j=0;j<4;j++)
   { scanf("%d",&a[i][j]);
   }
 }
 printf("\n Row major order\n");
 for(i=0;i<3;i++)
 { for(j=0;j<4;j++)
   { printf("%d \t",a[i][j]);
   }
 printf("\n");
 }
 printf("enter value of I and J:\n");
 scanf("%d%d",&I,&J);

 X=ba + W*((N*I)+J);
 printf("\n Address of A[%d][%d]=%d \n",I,J,X);
 break;
 case 2:
 printf("enter elements\n");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
   { scanf("%d",&a[j][i]);
   }
 }
  printf("\n column major order\n");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
   { printf("%d \t",a[i][j]);
   }
 printf("\n");
 }
  printf("enter value of I and J:\n");
 scanf("%d%d",&I,&J);

 X=ba + W*((M*J)+I);
 printf("\n Address of A[%d][%d]=%d \n",I,J,X);
 break;
 case 3 : break;
 default : printf("enter valid choice\n");
 break; }
 } while(n!=3);

 }
