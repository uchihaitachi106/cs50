#include<stdio.h>
#include<conio.h>
#include"cs50.h"
int main(void)
{
    int n1= get_int("number 1: \n");
    int n2=get_int("number 2: \n");
    printf("the sum of the number is: %i\n",n1+n2);
    float z= (float) n1/(float) n2;
    printf("the answer is: %f",z);
}


