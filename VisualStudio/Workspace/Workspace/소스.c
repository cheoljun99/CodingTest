#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    char a[16];
    char b[16];
    char c[16];
    strncpy(a, "0123456789abcdef", sizeof(a));
    strncpy(b, "0123456789abcdef", sizeof(b));
    //strcpy(c, a);

    printf("%s",a);

   /* int i;
    strcpy_s(s1, sizeof(s2), s2);
    const int test = strlen(s1);
    dest = (char*)malloc(strlen(s1));
    for (i = 0; i < 11; i++)
        dest[i] = s1[i];
    dest[i] = '\0';
    printf("dest = %s", dest);*/
}
