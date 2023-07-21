#include<stdio.h>
cube(int x){
  if(x%3==0&&x%5==0)
  {
  	printf("number is divisible by 3 and 5 ");
  }
 else
 {
   	printf("number is not divisible by 3 and 5 ");
  } 
}
main()
{  int a=3;
     cube(a);
}
