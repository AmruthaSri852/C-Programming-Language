// C program to print the LCM of any two numbers

#include<stdio.h>
int main()
{int num1,num2,hcf,lcm,i,t;
printf("Enter the two numbers : ");
scanf("%d%d",&num1,&num2);
if(num1>num2)
{t=num2;
}
else
t=num1;
for(i=1;i<=t;i++)
{if(num1%i==0&&num2%i==0)
hcf=i;
}
lcm=(num1*num2)/hcf;
printf("\nhcf of %d and %d is : %d",num1,num2,hcf);
printf("\nlcm of %d and %d is : %d",num1,num2,lcm);
return 0;}
