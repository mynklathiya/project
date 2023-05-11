#include<stdio.h>
#include<conio.h>
main()
{
  float base_salary,hra,da,ta,gross_salary;
  clrscr();
  printf("enter value of base_salary\n");
  scanf("%f",&base_salary);
  printf("enter value of hra\n");
  scanf("%f",&hra);
  printf("enter value of da\n");
  scanf("%f",&da);
  printf("enter value of ta\n");
  scanf("%f",&ta);
  gross_salary=base_salary+(base_salary*hra/100)+(base_salary*da/100)+(base_salary*ta/100);
  printf("gross_salary=%f",gross_salary);

  getch();

}