#include <stdio.h>

int main()
{
    char str[100]; 

    scanf_s("%[^'\n']s", str, 100); 

    printf("%s\n", str);  

    return 0;
}
