#include <stdio.h>

void swap(char *str1, char *str2){
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){
    char *str1 = "bar";
    char *str2 = "foo";
    swap(str1, str2);
    printf("%s %s", str1, str2);
    return 0;
}

// prints bar foo because the swap function only swaps the local copies of the pointers str1 and str2.