
///Write a program in C to display the n terms of even natural number and their sum

#include <stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter a Number to Sum of Nth Even Number: \n");
    scanf("%d",&number);
    for(i=0;i<=number;i+=2){
      sum+=i;
    }
    printf("The Sum Of Nth Even Number is : %d\n",sum);
    return 0;

}
