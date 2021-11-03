/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int equals;
do
{
printf("How much is 7x8\n");
printf("7x8=");
scanf("%d",&equals);
if(equals == 56)
{
    printf("Congratulations you are correct!");
}
else
{
    printf("You are wrong! Try again!\n");
}

}
while(equals !=56);
    return 0;
}
