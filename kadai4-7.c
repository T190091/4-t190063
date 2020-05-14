#include <stdio.h>

int main(){
    long n,i=1;
    for(n=1;n<=16;n++)
    i=n*i;
    printf("解散は%ld日後\n",i);
}