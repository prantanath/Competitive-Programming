

#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool  f= ((1<<9)*33*3)%(1<<4);
    printf("%d",f);
    char z;
    scanf("%c",&z);
    if(z<='Z' && z>='A') z+=32;
    switch (z)
    {
    case 'a':
        puts("Ada");
        break;
    case 'b':
        puts("Basic");
        break;
    case 'c':
        puts("Cobol");
        break;
    case 'd':
        puts("dBase III");
        break;
    case 'f':
        puts("Fortran");
        break;
    case 'p':
        puts("Pascal");
        break;
    case 'v':
        puts("Visual C++");
        break;
    default:
        puts("Incorrect Input");
        break;
    }
} 