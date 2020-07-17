#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    bool flag;
    string s[10]={"india","australia","america","srilanka","pakistan","london","canada","indonesia","singapore","bangaladesh"};
    string s2;
    int ch=3,len,pos,r,j,p=1,x;
    cout<<"\t\t"<<"Welcome to Hangman Game!!!!:"<<endl;
    cout<<"\t\t"<<"Coded By SIBI S M"<<endl<<endl;
    cout<<"Rules:You need to find the country within the 3 changes..If you guess a correct word the changes remain same but in case of any wrong guess the chances count get reduced..In case you find a correct country,You won game!!!,the game ends or   else you will lose..You can play again by pressing 1.."<<endl;
    cout<<endl;
    while(p==1)
    {
    r=rand()%10;
    r++;
    len=s[r].length();
    s2=s[r];
    for(int k=0;k<len;k++)
    {
       if(s2[k]>='a' && s2[k]<='z')
            s2[k]='_';
    }

    cout<<"\t\tWord you need to guess\n\t\t"<<s2<<endl;
    char c;
    while(ch>0)
    {
        cout<<"Enter a letter";
        cin>>c;
        flag=false;
       for(int i=0;i<len;i++)
       {
          if(c==s[r][i])
          {
              pos=i;
              for( j=0;j<len;j++)
              {
                  if(j==pos && s2[j]=='_')
                        {
                        s2[j]=c;
                         flag=true;
                        }
              }
          }
       }
       if(flag)
       {
           cout<<"\t\tGreat,You Found a character!!!!!"<<endl;
           cout<<"\t\t"<<s2<<endl;
           cout<<"\t\tChances left -->"<<ch<<endl;
           if(s[r]==s2)
           {
            cout<<"\t\tYou Won!!!!"<<endl;
            goto x;
           }
       }
       else
       {
           ch--;
           cout<<"\t\tWrong Guess!!!"<<endl;
           cout<<"\t\tChances left -->"<<ch<<endl;
       }
    }
    if(ch==0)
    {
        cout<<"\n\t\tBad Luck!!!!!"<<"\n\t\tYou Loss the game"<<endl;
        goto x;
    }
    x:
    cout<<"\t\tPress 1 to continue again!!!\n\t\tPress any key to exit"<<endl;
    int o;
    cin>>o;
    p=o;
    }
    return 0;
}
