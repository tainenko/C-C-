#include<stdio.h>
//a simple function to count the length of string
int main()
{
char string[100];
printf("Please input a string:\n");
scanf("%s",&string);
int len;
len=length(&string);
printf("%s has %d letters",string,len);
}

int length(char *p)
{
int n=0;
while(*p!='\0')
  {
  n++;
  p++;
  }
return n;
}
