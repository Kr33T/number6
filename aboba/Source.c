#include "header.h"

int main()
{
    struct s* us = calloc(1, sizeof(struct s*));
    us->a = 10;
    us->b = 2;
    printf("%d", aboba(us));
}