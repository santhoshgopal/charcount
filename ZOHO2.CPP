#include <stdio.h>
#include <string.h>
#include<conio.h>
void main()
{
clrscr();
char a[10];
int num,k=0,i=0,len,sec,fir,j=0;
printf("enter the string");
scanf("%s",&a);
len=strlen(a);
while(i<len)
{
sec=(int)a[i+2]-48;
fir=(int)a[i+1]-48;
	  if(sec>=0 && sec<=9)
	  {
	  num=fir*10+sec;
	  while(k<num)
	  {
	  printf("%c",a[i]);
	  k++;
	  }
	  i=i+3;
	  k=0;
	  }
	  else
	  {
	  num=fir;
	  while(j<num)
	  {
	  printf("%c",a[i]);
	  j++;
	  }
	  i=i+2;
	  j=0;
	  }

}
getch();
}