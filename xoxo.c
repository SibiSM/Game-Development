#include<stdio.h>
#include<stdlib.h>
int check(int,int [3][3]);
void main()
{
    int n,a[3][3]={'*','*','*','*','*','*','*','*','*'},c,count,c1=9,k=1,r=0,flag,p;
    printf("Player 1:X\nPlayer 2:O\n\n");
    while(c1>=1)
    {
    count=1;
    printf("Enter player %d",k);
    printf("\n");
    scanf("%d",&c);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(c==count && k==1 && a[i][j]=='*')
               {
                a[i][j]='X';
                printf(" %c ",a[i][j]);
                  k++;
               }
           else if(c==count && k==2 && a[i][j]=='*')
               {
                a[i][j]='O';
                printf(" %c ",a[i][j]);
                  k--;
               }
            else
                {
                printf(" %c ",a[i][j]);
                p=k;
                }
            count++;
        }
        printf("\n");
    }
    printf("\n");
    r=check(k,a);

    if(r==1)
    {
    printf("Player 1 wins");
    break;
    }
    if(r==2)
    {
    printf("Player 2 wins");
    break;
    }
    c1--;
    }
    if(r!=1 && r!=2)
        printf("Match Draw!!!");
}
int check(int k,int a[3][3])
{
   if((a[0][1]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') || (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X'))
        return 1;
   else if((a[0][1]=='O' && a[0][1]=='O' && a[0][2]=='O') || (a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') || (a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O') || (a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O') || (a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O') || (a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O') || (a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O') || (a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O'))
        return 2;
}
