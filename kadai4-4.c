#include <stdio.h>

int main() {
    int i=1;
    while(1){
        if(i<0)
        break;
        i=i*2;
    }
    printf("%d\n", i-1);
}
