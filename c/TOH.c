main()
{
    int n;
    printf("number of discs : \n");
    scanf("%d",&n);

    toh(n,'a','b','c');
}
void toh(int n,char beg,char aux,char end)
{
    if(n>=1){
        toh(n-1,beg,end,aux);
        printf("%c to %c \n",beg,end);
        toh(n-1,aux,beg,end);
    }
}
