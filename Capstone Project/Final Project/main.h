#include <iostream>
#include <stdbool.h>
#include <conio.h>

using namespace std;


class Bank{
    private:
        int total;
        string id;
        struct person{
            string name,ID, address;
            int contact, cash;
        }person[100];

    public:
        Bank(){
            total = 0;
        }
        void choice();

        void person_data();
        void add_money();
        void withdraw_bal();
        void bal_check();
        void ac_information();
        void ac_update();
        void delete_ac();
};

int main2()
{

    cout<<endl;
    cout<<endl;

    cout<< "                Welcome to Our Bank Project"<<endl<<endl<<endl;
    cout<<"                ///////////////////////////////////"<<endl;
    cout<<"                Project Name : \tBanking Account"<<endl;
    cout<<"                Project Language : \t C++ "<<endl;
    cout<<"                Project Author : \t Utin"<<endl;
    cout<<"                Project Date : \t 17/08/2022 "<<endl<<endl;
    cout<<"                ///////////////////////////////////"<<endl<<endl<<endl;

    Bank object;
    object.choice();


    getchar();
    return 0;
}

void Bank::choice()
{                
    char ch;
    bool t = true;

    while (t)
    {
        cout<<endl<<endl;
        cout<<"                ------------------"<<endl;
        cout<<"                    Main Menu     "<<endl;
        cout<<"                ------------------"<<endl<<endl;

        cout<<"                01. Create Account"<<endl;
        cout<<"                02. Deposit Balance"<<endl;
        cout<<"                03. Withdraw Balance"<<endl;
        cout<<"                04. Check Balance"<<endl;
        cout<<"                05. Account Update"<<endl;
        cout<<"                06. All Account Information"<<endl;
        cout<<"                07. Account Delete"<<endl;
        cout<<"                08. Exit"<<endl;

        ch = getch();
        system("CLS");
        printf("\n\n\n\n\n\n");

        switch (ch)
        {
        case '1':
            /* code */
            Bank::person_data();
            break;
        case '2':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else Bank::add_money();
            break;

        case '3':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else Bank::withdraw_bal();
            break;
        case '4':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else Bank::bal_check();
            break;
        case '5':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else Bank::ac_update();
            break;

        case '6':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else Bank::ac_information();
            break;
        case '7':
            if(total == 0){
                cout<<"                No data Found"<<endl;
            }
            else delete_ac();
            break;
        case '8':
            t = false;
            break;
        default:
            break;
        }
    }

}

void Bank::person_data(){
    cout<<"                ------------------"<<endl;
    cout<<"                Create New Account "<< total+1<<endl;
    cout<<"                ------------------"<<endl<<endl;

    cout<<"                Enter Your Name: ";
    if(total != 0){
        cin.ignore();
    }
    getline(cin,person[total].name);

    cout<<"                Enter Your ID: ";
    getline(cin,person[total].ID);

    cout<<"                Enter Your Address: ";
    getline(cin,person[total].address);

    cout<<"                Enter Your Contact Number : ";
    cin>>person[total].contact;

    cout<<"                Enter Your Cash : ";
    cin>>person[total].cash;

    total++;
}

void Bank::add_money(){
    int cash;

    cout<<"                ---------------"<<endl;
    cout<<"                Deposit Amount"<<endl;
    cout<<"                ---------------"<<endl;

    cout<<"                Enter Your ID: ";
    cin>>id;

    for(int i=0; i < total; i++){
        if(id == person[i].ID){
            cout<<"                Name: "<<person[i].name<<endl;
            cout<<"                Address: "<<person[i].address<<endl;
            cout<<"                Contact: "<<person[i].contact<<endl;
            cout<<"                Existing Cash : "<<person[i].cash<<endl<<endl;

            cout<<"                Inter Your Cash: ";
            cin>>cash;
            person[i].cash = person[i].cash + cash;
            cout<<"                New Cash Is: "<<person[i].cash<<endl;
            break;

        }
        if(i == total - 1){
            cout<<"\n\n                No Found Search Result"<<endl<<endl<<endl;
        }
    }


}

void Bank::withdraw_bal(){

    int cash;

    cout<<"                ---------------"<<endl;
    cout<<"                Withdraw Amount"<<endl;
    cout<<"                ---------------"<<endl;

    cout<<"                Enter Your ID: ";
    cin>>id;

    for(int i=0; i < total; i++){
        if(id == person[i].ID){
            cout<<"                Name: "<<person[i].name<<endl;
            cout<<"                Address: "<<person[i].address<<endl;
            cout<<"                Contact: "<<person[i].contact<<endl;
            cout<<"                Existing Cash : "<<person[i].cash<<endl<<endl;

            cout<<"                Inter Your Cash: ";
            cin>>cash;
            person[i].cash = person[i].cash - cash;
            cout<<"                New Cash Is: "<<person[i].cash<<endl<<endl;
            break;
        }
        if( i == total-1 ){
            cout<<"\n\n                No Found Search Result"<<endl<<endl<<endl;
        }
    }

}


void Bank::bal_check(){



    cout<<"                ----------------------------------------"<<endl;
    cout<<"                               Balance Check            "<<endl;
    cout<<"                ----------------------------------------"<<endl;

    cout<<"                Enter Your ID: ";
    cin>>id;

    for(int i=0; i < total; i++){
        if(id == person[i].ID){
            cout<<"                Name: "<<person[i].name<<endl;
            cout<<"                Address: "<<person[i].address<<endl;
            cout<<"                Contact: "<<person[i].contact<<endl;

            cout<<"                -------------------------------------"<<endl<<endl;
            cout<<"                             Cash : "<<person[i].cash << " TAKA "<<endl<<endl;
            cout<<"                -------------------------------------"<<endl;

            break;
        }
        if( i == total-1 ){
            cout<<"\n\n                No Found Search Result"<<endl<<endl<<endl;
        }
    }


}


void Bank::ac_information()
{
    cout<<"                ----------------------------------------"<<endl;
    cout<<"                              Ac Information            "<<endl;
    cout<<"                ----------------------------------------"<<endl<<endl;

    cout<<"                              Total Account:            "<<total<<endl;
    cout<<"                ----------------------------------------"<<endl;

    for(int i=0; i < total; i++){
        cout<<"                Account Name: "<<person[i].name<<endl;
        cout<<"                Account ID: "<<person[i].ID<<endl;

        cout<<"                - - - - - - - - - - - - - - - - - -"<<endl;
    }
}

void Bank::ac_update()
{
    cout<<"                ----------------------------------------"<<endl;
    cout<<"                              Ac Update                "<<endl;
    cout<<"                ----------------------------------------"<<endl<<endl;

    cout<<"                Please Your Account ID: "<<endl;
    cin>>id;

    for(int i=0; i< total; i++){
            string up_name,up_address;
            int up_contact;
        if(id == person[i].ID){
            cin.ignore();
            cout<<"                Enter Your Name: ";
            getline(cin,up_name);

            person[i].name = up_name;


            cout<<"                Enter Your Address: ";
            getline(cin,up_address);
            person[i].address = up_address;

            cout<<"                Enter Your Contact Number : ";
            cin>>up_contact;
            person[i].contact = up_contact;

        }
    }

}

void Bank::delete_ac()
{

    cout<<"                ---------------"<<endl;
    cout<<"                Delete Account "<<endl;
    cout<<"                ---------------"<<endl;

    cout<<"                Enter Your ID: ";
    cin>>id;

    for(int i=0; i < total; i++){
        if(id == person[i].ID){
            for(int j=i; j < total-2; j++){

                person[j].ID = person[j+1].ID;
                person[j].name = person[j+1].name;
                person[j].contact = person[j+1].contact;
                person[j].address = person[j+1].address;
                person[j].cash = person[j+1].cash;

                cout<<"                Your Account Deleted Successful"<<endl;
            }
            total--;
        }
    }
}
