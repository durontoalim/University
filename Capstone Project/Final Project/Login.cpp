#define _WIN32_WINNT 0x0500
#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>


#include <conio.h>
#include <windows.h>

#include "main.h"

using namespace std;
int main();
void login()
{
        printf("\n\n\n\n\n\n");
        int count;
        string user,pass,u,p;
        system("cls");
        printf("\n\n\n\n\n\n");
        cout<<"\t\tplease enter the following details"<<endl;
        cout<<"\t\tUSERNAME :  ";
        cin>>user;
        cout<<"\t\tPASSWORD :  ";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                        printf("\n\n\n\n\n\n");
                }
        }
        input.close();
        if(count==1)
        {
                printf("\n\n\n\n\n\n");
                cout<<"\n\t\tHello,\t\t"<<user<<"\n\t\tLOGIN SUCESS\n\t\tWe're glad that you're here.\n\t\tThanks for logging in\n";
                cin.get();
                cin.get();
                system("cls");
                printf("\n\n\n\n\n\n");
                main2();
                cin.get();
                main();
        }
        else
        {
                cout<<"\n\t\tLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}
void registr()
{
        printf("\n\n\n\n\n\n");

        string reguser,regpass,ru,rp;
        system("cls");
        printf("\n\n\n\n\n\n");
        cout<<"\t\tEnter the username :  ";
        cin>>reguser;
        cout<<"\n\t\tEnter the password :  ";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        printf("\n\n\n\n\n\n");
        cout<<"\n\t\tRegistration Sucessful\n";
        main();


}

void forgot()
{
        printf("\n\n\n\n\n\n");
        int ch;
        system("cls");
        printf("\n\n\n\n\n\n");
        cout<<"\t\tForgotten ? We're here for help\n";
        cout<<"\t\t1.Search your id by username"<<endl;
        cout<<"\t\t2.Search your id by password"<<endl;
        cout<<"\t\t3.Main menu"<<endl;
        cout<<"\t\tEnter your choice :  ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\n\t\tEnter your remembered username :  ";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\n\t\tHurray, account found\n";
                                cout<<"\n\t\tYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                printf("\n\n\n\n\n\n");
                                main();
                        }
                        else
                        {
                                cout<<"\n\t\tSorry, Your userID is not found in our database\n";
                                cout<<"\n\t\tPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\n\t\tEnter the remembered password :  ";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\n\t\tYour password is found in the database \n";
                                cout<<"\n\t\tYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                printf("\n\n\n\n\n\n");
                                main();
                        }
                        else
                        {
                                cout<<"\t\tSorry, We cannot found your password in our database \n";
                                cout<<"\n\t\tkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"\t\tSorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}

int ConsoleTitle(void)
{

    SetConsoleTitle("1st_Workplace");

    return 0;

}
int MaximizeOutputWindow(void)
{

    HWND ConsoleWindow;

    ConsoleWindow = GetConsoleWindow();

    ShowWindow(ConsoleWindow, SW_MAXIMIZE);

    return 0;

}

int SetConsoleSize(void)
{

    system("mode CON: COLS=220");

    return 0;

}


main()
{
        ConsoleTitle();
        MaximizeOutputWindow();
        SetConsoleSize();
        system("COLOR 5E");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        char a[16] = "Loading......!!";
        for(int i=0;i<16;i++)
        {
                printf("%c",a[i]);
                Sleep(60);
                printf(" ");
        }
        printf("\n\n\n\t\t\t\t");
                system("pause");
                system("cls");
                printf("\n\n\n\n\n\n");
        int n;
        printf("\n\n\n\n\t\t");

        int choice;
        printf("\n\n\n\n\n\n");
        cout<<"\t\t***********************************************************************\n\n";
        cout<<"\t\t                Welcome to Bank Admin login page                               \n\n";
        cout<<"\t\t*******************        MENU        ********************************\n\n";
        cout<<"\t\t1.LOGIN\n";
        cout<<"\t\t2.REGISTER\n";
        cout<<"\t\t3.FORGOT PASSWORD (or) USERNAME\n";
        cout<<"\t\t4.Exit\n";
        cout<<"\n\t\tEnter your choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"\t\tThanks for using this program\nThis program is created by DIU_HUNTERS\n\n";
                        break;
                default:
                        system("cls");
                        printf("\n\n\n\n\n\n");
                        cout<<"\t\tWrong Choice Intered\n"<<endl;
                        main();
        }

}








