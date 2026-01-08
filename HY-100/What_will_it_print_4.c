#include <stdio.h>

int main(){
    int arr[5];

    // arr++; Θα βγαλει λαθος στην μεταγλωτιση
    printf("%u", arr);
    return 0;
}