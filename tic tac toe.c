#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check(char *a, int t)
{
    while(a[t]!='*')
    {
        printf("\nYou have entered a wrong input!!\nPlease enter value again:");
        scanf("%d",&t);
        t=t-1;
    }
    return t;
}
int print(char *a,int t)
{
      int i;
      system("cls");
      printf("*****TIC TAC TOE******\n\n  !!Start playing!!\n");

    for(i=0;i<9;i++)
    {
        if(i==0||i==3||i==6)
        {
            printf("\n\n     ");
        }
        printf("%c    ",a[i]);
    }
    if(t==1)
    {
      printf("\n\nNow,its the turn of X\nEnter choice: ");
        scanf("%d",&t);
        t=check(a,t-1);
    }
    else if(t==0)
    {
        printf("\n\nNow,its the turn of 0\nEnter choice: ");
        scanf("%d",&t);
        t=check(a,t-1);
    }
    return t;

}
int main()
{
    int i,t,p;
    char a[9]={'*','*','*','*','*','*','*','*','*'};
    t=print(a,0);
    for(i=0;i<8;i++)
    {
        if(i%2!=0)
        {
            p=0;
           a[t]='X';
        }
        else if(i%2==0)
        {
            p=1;
            a[t]='0';
        }

        if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[3]=='0'&&a[4]=='0'&&a[5]=='0')||
           (a[6]=='0'&&a[7]=='0'&&a[8]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||
           (a[1]=='0'&&a[4]=='0'&&a[7]=='0')||(a[2]=='0'&&a[5]=='0'&&a[8]=='0')||
           (a[0]=='0'&&a[4]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
        {
            print(a,2);
            printf("\n\n      !!Hurray!!      \n*!*!*!*!0 WINS!*!*!*!*\n\n");
            return 0;
        }
        else if((a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')||
                (a[6]=='X'&&a[7]=='X'&&a[8]=='X')||(a[0]=='X'&&a[3]=='X'&&a[6]=='X')||
                (a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X')||
                (a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[2]=='X'&&a[4]=='X'&&a[6]=='X'))
                {
                    print(a,2);
                    printf("\n\n      !!Hurray!!      \n*!*!*!*!X WINS!*!*!*!*\n\n");
                    return 0;
                }

        t=print(a,p);
    }
    return 0;
}
