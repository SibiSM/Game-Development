#include<bits/stdc++.h>
using namespace std;
int rad()
{
    int r;
    r=rand()%7;
    return r;
}
void display(int num1,string player1,int num2,string player2)
{
    if(num1==100)
        {
        cout<<"Congratulations !!!   Player->"<<player1<<"    Wins!!!!!!"<<endl;
        exit(0);
        }

    cout<<"-------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Player"<<player1<<" is at position:"<<num1<<endl;
    cout<<"Player"<<player2<<" is at position:"<<num2<<endl<<endl;
    int c=100;
    for(int i=0;i<10;i++)
    {
        if(i%2==1)
        {
            c=c-9;
        for(int j=0;j<10;j++)
        {
            if(c==num2)
                cout<<player2<<"\t";
            if(c==num1)
                cout<<player1<<"\t";
            else
                cout<<c<<"\t";
            c++;
        }
        c=c-11;
        }
        else
        {
        for(int j=0;j<10;j++)
        {
            if(c==num2)
                cout<<player2<<"\t";
            if(c==num1)
                cout<<player1<<"\t";
            else
                cout<<c<<"\t";
            c--;
        }
        }
        cout<<endl;
    }
        cout<<"-------------------------------------------------------------------------------------------"<<endl;

}
 main()
{
    int ch,cur_pos_p1=0,cur_pos_p2=0,num;
    bool flag=true;
    cout<<"\t\t"<<"Welcome to Snake and Ladder Game!!!!:"<<endl;
    cout<<"\t\t"<<"Coded By SIBI S M"<<endl<<endl;
    while(1)
    {
         cout<<endl<<"Snake Position:"<<"\t"<<"Ladder Postion:"<<endl;
         cout<<"27 to 5"<<"\t\t"<<"13 to 42"<<endl;
         cout<<"65 to 40"<<"\t"<<"60 to 83"<<endl;
         cout<<"89 to 53"<<"\t"<<"70 to 93"<<endl;
         cout<<"54 to 31"<<"\t"<<"13 to 46"<<endl;
         cout<<"99 to 41"<<"\t"<<"42 to 67"<<endl;
         cout<<"Enter 1 for Player 1"<<"\n"<<"Enter 2 for Player 2"<<"\n"<<"3 for exit"<<endl;
         cin>>ch;
         switch(ch)
         {
            case 1: num=rad();
                    if(flag)
                    {
                    flag=false;
                    cout<<"\t"<<"Dice Thrown===>"<<num<<endl;
                    cur_pos_p1=cur_pos_p1+num;
                    if(cur_pos_p1<101)
                    {
                    if(cur_pos_p1==27)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(5,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==65)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(40,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==89)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(53,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==54)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(31,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==99)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(41,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==13)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(42,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==60)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(83,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==70)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(93,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==13)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(46,"*P1*",cur_pos_p2,"*P2");
                        }
                    if(cur_pos_p1==42)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(67,"*P1*",cur_pos_p2,"*P2");
                        }
                    else
                        display(cur_pos_p1,"*P1*",cur_pos_p2,"*P2");
                    }
                    else
                    {
                        cout<<"\t\t"<<"Out of range:"<<endl;
                        cur_pos_p1=cur_pos_p1-num;
                        display(cur_pos_p1,"*P1*",cur_pos_p2,"*P2");
                    }
                    }
                    else
                    {
                        cout<<"\t\tIt's Turn for Player 2!!!!!!!!!!"<<endl;
                    }
                    break;
            case 2: num=rad();
                    if(!flag)
                    {
                    flag=true;
                    cout<<"\t"<<"Dice Thrown===>"<<num<<endl;
                    cur_pos_p2=cur_pos_p2+num;
                    if(cur_pos_p2<101)
                    {
                    if(cur_pos_p2==27)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(5,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==65)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(40,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==89)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(53,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==54)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(31,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==99)
                        {
                        cout<<"\t\t"<<"OOPS!!!!! That was a snake!!!!!"<<endl<<endl;
                        display(41,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==13)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(42,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==60)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(83,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==70)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(93,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==13)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(46,"*P2*",cur_pos_p1,"*P1");
                        }
                    if(cur_pos_p2==42)
                        {
                        cout<<"\t\t"<<"GREAT THROW!!!!! That was a Ladder!!!!!"<<endl<<endl;
                        display(67,"*P2*",cur_pos_p1,"*P1");
                        }
                    else
                        display(cur_pos_p2,"*P2*",cur_pos_p1,"*P1");
                    }
                    else
                    {
                        cout<<"\t\t"<<"Out of range:"<<endl;
                        cur_pos_p2=cur_pos_p2-num;
                        display(cur_pos_p2,"*P2*",cur_pos_p1,"*P1");
                    }
                    }
                    else
                    {
                        cout<<"\t\tIt's Turn for Player 1!!!!!!!!!!"<<endl;
                    }
                    break;
            case 3:exit(0);break;
            default:cout<<"\t\tInvalid Option..Please Enter valid option available!!!!!!"<<endl;
         }
    }
}
