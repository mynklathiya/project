#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z;
    clrscr();
    printf("enter value of x ");
    scanf("%d",&x);
    printf("\nenter value of y");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("\nswapping:x=%d,y=%d",x,y);
    getch();
}

