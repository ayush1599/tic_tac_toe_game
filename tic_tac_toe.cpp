#include<iostream>
#include<cstdlib>
char a[9]={'1','2','3','4','5','6','7','8','9'};
using namespace std;
void pl1();
void pl2();
void get();
void loop();
void color();
void play();
void upgrades();
void develop();

void color()
{
    #ifdef _WIN32
    system("cls");
    #endif
}
void develop()
{
    color();
     cout << endl <<endl<< endl;
    cout <<"\t\t\t\t\t\t"<< "\e[1;32m" << "Developer : AYUSH GUPTA" << "\e[0m"<<endl;
    exit(0);
}
void upgrades()
{
    color();
    cout << endl <<endl<< endl;
    cout <<"\t\t\t\t\t\t"<< "\e[1;31m" << "Updates Are Coming Soon" << "\e[0m"<<endl;
    cout <<"\t\t\t\t\t\t"<< "\e[1;31m" << "please Stay Tuned" << "\e[0m" <<endl;

}
void play()
{
    color();
    int a;
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout <<"\t\t\t\t\t\t"<< "TIC TAC TOE GAME" <<endl;
    cout <<"\t\t\t\t\t\t"<< "--------------------" <<endl;;
    cout <<"\t\t\t\t\t\t"<<"\e[1;36m"<<  "1 : To Play The Game " << "\e[0m"<< endl;
    cout <<"\t\t\t\t\t\t"<< "\e[1;32m"<< "2 : To Exit " << "\e[0m"<< endl;
    cout <<"\t\t\t\t\t\t"<< "\e[1;31m"<< "3 : Upgrades Level" << "\e[0m"<< endl;
    cin >> a;
    switch(a)
    {
    case 1 :
        get();
        loop();
        break;
    case 2 :
        develop();
        break;
    case 3 :
        upgrades();
        break;
    }
}

void loop()
{
     for(int j=0;j<9;j++)
    {
        if(j%2==0)
        {
            cout <<"\e[1;31m"<< "Player 1 :" <<"\e[0m";
            pl1();
        }
        else
        {
            cout <<"\e[1;32m"<< "Player 2 :" << "\e[0m";
            pl2();
        }
    }
}
void pl2()
{
    int n;
       cin>>n;
    for(int i=0;i<1;i++){

    if(n==1)
    {
        a[n-1]='O';
        get();
    }
    if(n==2)
    {
        a[n-1]='O';
        get();
    }
    if(n==3)
    {
        a[n-1]='O';
        get();
    }
     if(n==4)
    {
        a[n-1]='O';
        get();
    }
     if(n==5)
    {
        a[n-1]='O';
        get();
    }
     if(n==6)
    {
        a[n-1]='O';
        get();
    }
     if(n==7)
    {
        a[n-1]='O';
        get();
    }
     if(n==8)
    {
        a[n-1]='O';
        get();
    }
     if(n==9)
    {
        a[n-1]='O';
        get();
    }
}
}
void pl1()
{
  int m;
    cin>>m;
    for(int i=0;i<1;i++){
    if(m==1)
    {
        a[m-1]='X';
        get();
    }
    if(m==2)
    {
        a[m-1]='X';
        get();
    }
    if(m==3)
    {
        a[m-1]='X';
        get();
    }
     if(m==4)
    {
        a[m-1]='X';
        get();
    }
     if(m==5)
    {
        a[m-1]='X';
        get();
    }
     if(m==6)
    {
        a[m-1]='X';
        get();
    }
     if(m==7)
    {
        a[m-1]='X';
        get();
    }
     if(m==8)
    {
        a[m-1]='X';
        get();
    }
     if(m==9)
    {
        a[m-1]='X';
        get();
    }
}
}
void get()
{
    char c;
    system("cls");
    cout <<endl<<endl<< "\t\t\t\t\t\t" <<"\e[1;32m"<<"WELCOME TO THE TIC TAC TOE " <<"\e[0m"<< endl <<endl;
    cout << endl <<"\e[1;36m"<< "PLAYER 1 - X" <<"\e[0m";
    cout << endl <<"\e[1;36m"<<"PLAYER 2 - O" << "\e[0m";
    cout << endl << endl ;
    cout << "\t\t\t\t\t\t" << "        |       |      " << endl;
    cout << "\t\t\t\t\t\t" << "    " <<"\e[1;37m" << a[0] << "\e[0m"<< "   |" << "   " <<"\e[1;37m"<< a[1] <<"\e[0m"<< "   |" << "   " <<"\e[1;37m"<< a[2] << "       " <<"\e[0m"<< endl ;
    cout << "\t\t\t\t\t\t" << "______" << "__|_______" << "|_______" << endl;
    cout << "\t\t\t\t\t\t" << "        |       |      " << endl;
    cout << "\t\t\t\t\t\t" << "    " << "\e[1;37m" << a[3] << "\e[0m"<< "   |" << "   " <<"\e[1;37m" <<  a[4] << "\e[0m"<< "   |" << "   " <<"\e[1;37m" <<  a[5] << "\e[0m"<< "       " << endl;
    cout << "\t\t\t\t\t\t" << "______" << "__|_______" << "|_______" << endl;
    cout << "\t\t\t\t\t\t" << "        |       |      " << endl;
    cout << "\t\t\t\t\t\t" << "    " << "\e[1;37m" << a[6] << "\e[0m"<< "   |" << "   " <<"\e[1;37m" <<  a[7] << "\e[0m"<< "   |" << "   " <<"\e[1;37m" <<  a[8] << "\e[0m"<< "       " << endl;
    cout << "\t\t\t\t\t\t" << "        |       |      " << endl;
    if((a[0]=='X' && a[1]== 'X' && a[2]=='X' && a[0]==a[1] && a[1]==a[2]) || (a[0]=='X' && a[3]=='X' && a[6]=='X' && a[0]==a[3] && a[3]==a[6]) || (a[0]=='X' && a[4]=='X' && a[8]=='X' && a[0]==a[4] && a[4]==a[8]))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 1 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    else if((a[1]=='X' && a[4]== 'X' && a[7]=='X' && a[1]==a[4] && a[4]==a[7] ) || (a[2]=='X' && a[5]== 'X' && a[8]=='X' && a[2]==a[5] && a[5]==a[8]) || (a[3]=='X' && a[4]== 'X' && a[5]=='X' && a[3]==a[4] && a[4]==a[5]))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 1 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    else if((a[6]=='X' && a[7]== 'X' && a[8]=='X' && a[6]==a[7] && a[7]==a[8]) || (a[6]=='X' && a[4]== 'X' && a[2]=='X' && a[6]==a[4] && a[4]==a[2]))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 1 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    else if((a[0]=='O' && a[1]== 'O' && a[2]=='O' && a[0]==a[1] && a[1]==a[2]  ) || (a[0]=='O' && a[3]=='O' && a[6]=='O' && a[0]==a[3] && a[3]==a[6]) || (a[0]=='O' && a[4]=='O' && a[8]=='O' && a[0]==a[4] && a[4]==a[8]))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 2 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    else if((a[1]=='O' && a[4]== 'O' && a[7]=='O' && a[1]==a[4] && a[4]==a[7] ) || (a[2]=='O' && a[5]== 'O' && a[8]=='O' && a[2]==a[5] && a[5]==a[8]) || (a[3]=='O' && a[4]== 'O' && a[5]=='O' && a[3]==a[4] && a[4]==a[5]))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 2 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    else if((a[6]=='O' && a[7]== 'O' && a[8]=='O' && a[6]==a[7] && a[7]==a[8]) || (a[6]=='O' && a[4]== 'O' && a[2]=='O' && a[6]==a[4] && a[4]==a[2] ))
    {
        cout << endl;
        cout <<"\t\t\t\t\t\t"<<"\e[1;31m"<< "player 2 won" << "\e[0m"<<  endl << endl;
        exit(0);
    }
    }
    int main()
    {
        play();
    }



