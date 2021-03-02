#include <string.h>
#include <stdio.h>
void per(char*s,int i, int n)
{
static int count; int j;
if(i==n)
{
    count++;
    printf("(%d)%s\t",count,s);

}
else
    for(j=i;j<=n;j++)
{
    swap((s+i),(s+j));
    per(s,i+1,n);
    swap((s+i),(s+j));
}
}
void swap(char*x,char*y)
{
    char ch;
    ch= *x;
    *x = *y;
    *y = ch;
}
main()
{
    char*str;
    printf("enter string\n");
    gets(str);
    per(str,0,strlen(str)-1);
}
