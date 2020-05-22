#include <stdio.h>

int main() {
    long i=1;
    while(1){
        if(i<0)
        break;
        i=i*2;
    }
    printf("%ld\n", i-1);
}
