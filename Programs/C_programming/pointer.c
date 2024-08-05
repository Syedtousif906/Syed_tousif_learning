#include<stdio.h>
int main()
{
    char a;
    char *p;
    printf("VAlue of a = %c\n",a);
    printf("Address  of a = %p\n",p);
    
    p=&a;
    printf("VAlue of a = %c\n",a);
    printf("Address of a = %p\n",p);
    printf("VAlue of p = %c\n",*p);
    a='A';
    printf("VAlue of a = %c\n",a);
    printf("Address of a = %p\n",p);
    printf("VAlue of p = %c\n",*p);
}