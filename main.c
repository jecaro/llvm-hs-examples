#include <stdio.h>

extern int add(int a, int b);

int main(int argc, char ** argv)
{
    int x = add(1, 2);
    printf("x = %i", x);
}
