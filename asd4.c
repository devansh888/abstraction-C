#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n;
    
    do{
        n = get_int("No:");
    }
    while(n<1);
    
    for(int i = 0; i<n; i++)
    {
        printf("?\n");
    }
    
}