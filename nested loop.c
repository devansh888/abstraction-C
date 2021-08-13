#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    for(int i = 0; i<3; i++)
    {
        for(int n = -1; n<i; n++)
        {
            printf("#");
        }

        printf("\n");
    }

}