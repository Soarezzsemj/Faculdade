#include <stdio.h>
#include <stdlib.h>



int main()
{
    system("rmdir pasta1");
    system("rmdir pasta2");
    system("mkdir pasta1");
    system("mkdir pasta2");

    printf("pasta criadas\n");
    system("clear");system("mkdir pasta1");
    system("mkdir pasta2");

    printf("suas pastas estao criadas");
    system("ls");

    return 0;
}