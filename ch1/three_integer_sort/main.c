#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a <= b && b <= c) printf("%d %d %d\n", c, b, a);
    if(b <= a && a <= c) printf("%d %d %d\n", c, a, b);
    if(b <= c && c <= a) printf("%d %d %d\n", a, c, b);
    if(a <= c && c <= b) printf("%d %d %d\n", b, c, a);
    return 0;
}
