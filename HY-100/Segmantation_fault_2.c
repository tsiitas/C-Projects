#include <stdio.h>
#include <string.h>
void concat(char *a, char *b) {
int i , m, n;
m = strlen(a);
n = strlen(b);
for (i = 0; i <= n; i++) {
a[m+i] = b[i];
}
}
int main() {
/*char *str1 = ”Hello ”;   <--- this line will cause segmentation fault
char *str2 = ”world!”;     <--- this line will cause segmentation fault
concat(str1, str2);
printf(”%s ”, str1);
*/
return 0;
}

// the program will cause segmentation fault because str1 points to a string literal which is stored in a read-only section of memory
// to fix use char str1[100] = "Hello "; instead of char *str1 = "Hello ";