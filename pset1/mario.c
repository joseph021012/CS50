#include<stdio.h>
#include<cs50.h>

int main()
{
int n;
    do{
        printf("Height: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);
    
    for (int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
        printf(" ");
        }
         for (int k = 0; k <= i; k++){
        printf("#");
        }
    printf("\n");
    }
}
