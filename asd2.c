#include<stdio.h>
#include<cs50.h>
#include<string.h>

void hello(int n);

int main(void){

    hello(3);
}

void hello(int n)
{
    for(int i=0; i<n; i++){

        printf("hello, there\n");
    }
}