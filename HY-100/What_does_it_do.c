void f(char *s, char *t){
    while((*s++ = *t++) != '\0');
}

// copies string t into string s