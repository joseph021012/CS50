#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main()
{
    float a=0.00;
    int i=0;
    printf("O hai! ");
    do{
        printf("How much change is owed?\n");
        a = GetFloat();
    }while(a<0);
    a=a*100;
    int b=round(a);
    int c = b;
    while(c>=25){
    c=c-25;
    i=i+1;
    }
    while(c>=10){
    c=c-10;
    i=i+1;
    }
    while(c>=5){
    c=c-5;
    i=i+1;
    }
    while(c>0){
    c=c-1;
    i=i+1;
    }
    printf("%d\n", i);
    return 0;
}
