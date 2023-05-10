#include<stdio.h>
#include<conio.h>

main()
{
    float celsius,fehrenhit;
    clrscr();
    printf("enter temp in celsius=");
    scanf("%f",&celsius);
    fehrenhit=(celsius*9/5)+32;
    printf("%.3f celsiua=%.3f fehrenhit", celsius , fehrenhit);
    getch();
}