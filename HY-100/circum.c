#include <stdio.h>
#define CIRCUM(R) (3.14*R*R) // ; is removed from #define + will output mistake on line 7
int main(){
    float r = 1.0,c;
    c = CIRCUM(r);
    printf("%f\n",c);
    if(CIRCUM(r) == 6.28){
    printf("\nGobbledygook");
    }
    return 0;
}