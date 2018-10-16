#include<stdio.h>
#include<stdib.h>

void main(){
int res,num1,num2,choice;
int add(int, int);//atishay
int sub(int,int);//aviral
float divide(int,int);//shubhi
int multiply(int, int);//divya

printf("\nEnter number 1: ");
scanf("%d",&num1);
printf("\nEnter number 2: ");
scanf("%d",&num2);

while(1){
printf("\nPress: 1-Addition \t2-Subtration \t3-Multiplication \t4-Division \tAny other key to exit\n");
scanf("%d",&choice);

switch(choice){

case 1:
res=add(num1,num2);
printf("\n%d",res);
break;

case 2:
res=sub(num1,num2);
printf("\n%d",res);
break;

case 3:
res=divide(num1,num2);
printf("\n%d",res);
break;

case 4:
res=multiply(num1,num2);
printf("\n%d",res);
break;

default:
exit(0);
}
}
}

int add(int num1,int num2){
return num1+num2;
}

float divide(int num1,int num2){
  return num1/num2;
}

