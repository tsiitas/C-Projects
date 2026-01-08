#include <stdio.h>

int main(int argc, char** argv){
    while (argc--)
    {
        printf("%s\n", argv[argc]);
    }
    return 0;
}
// prints the command line arguments in reverse order