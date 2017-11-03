#include<STDIO.H>
#include<conio.h>


void main()
{
int a,b,c,d,e;
clrscr();
printf("\n\n Etner ab values");
scanf("%d%d",&a,&b);
printf("\n Enter C value");
scanf("%d",&c);
printf("\n Enter D and E values");
scanf("%d%d",&d,&e);
c=a+b+c+d+e;
printf("The sum of two values are %d",c);
getch();
}


