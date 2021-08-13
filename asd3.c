#include<stdio.h>
#include<cs50.h>
#include<string.h>

int get_positive_int(void);

int main(void)
{
    printf("%i", get_positive_int());
}

int get_positive_int(void)
{
    int n;

    do
    {
        n = get_int("pos no: ");
    }

    while(n<1);
    return n;
}
