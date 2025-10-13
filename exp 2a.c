#include <stdio.h>
int main() {
  int start, end, i, sum = 0;
  printf("enter starting number");
  scanf("%d",&start);
  printf("enter ending number");
  scanf("%d",&end);
  for(int i=start;i<=end;i++)
  {
if(i%2!=0)
        { 
            printf("%d",i); 
      sum=sum+i;
        }
  }
printf("sum of all odd number  is %d\n", sum);

    return 0;
}
