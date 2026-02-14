#include <stdio.h>
#include <string.h>

int main()
{
    char name1[5] = "magic";
    char name2[5] = "logic";

    strcpy(name1, name2);

    printf("name1 = %s\tname2 = %s", name1, name2);

    return 0;
}