void fun(int num){
    if(num/8) fun(num/8);
    putchar((num%8) + '0');
}
// conversion of integer to octal representation