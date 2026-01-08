void fun(int num){
    if(num/8) fun(num/8);
    putchar((num%8) + '0');
}

// Function to convert an integer to its octal representation