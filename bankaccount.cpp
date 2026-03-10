#include<iostream>
#include<string.h>
using namespace std;

class bankaccount{
    int accountnumber;
    string accountholdername;
    double balance;

    public:
    void setaccountnumber(int acc){
        accountnumber = acc;

    }

    void setaccountholdername(string holder){
        accountholdername = holder;
    }

    void setbalance(double bal){
        balance =bal;
    }

    int getaccountnumber(){
        return accountnumber;
    }

    string getaccountholdername(){
        return accountholdername;
    }

    double getbalance(){
        return balance;
    }

    void deposite(double amount){
        balance = balance + amount;
        cout<< "amount deposited successfully...."<<endl;
    }

    void withdraw(double amount){
        if(amount <= balance){
            balance = balance - amount;
        }else{
            cout<<"insufficient balance..."<<endl;
        }
    }

    void displayaccountdetails(){
        cout<<"\n Account details \n";
         cout << "Account Number: " << accountnumber << endl;
        cout << "Account Holder Name: " << accountholdername << endl;
        cout << "Current Balance: " << balance << endl;
    }

};

int main(){
    bankaccount account;

    int choice;
    int accno;
    string name;
    double bal, amount;

    cout<<"Enter the account number ";
    cin>>accno;
    account.setaccountnumber(accno);

    cout<<"Enter the account name ";
    cin>>name;
    account.setaccountholdername(name);

    cout<<"Enter the inital balance :";
    cin>>bal;
    account.setbalance(bal);
    
    do{
        cout<<"\n...Bank menu.....\n";
        cout<<"1. Deposite money\n";
        cout<<"2.withdraw money\n";
        cout<<"3.display account details\n";
        cout<<"4.Exit\n";
        cin>>choice;

        switch(choice){
            case 1:
            cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposite(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.displayaccountdetails();
                break;

            case 4:
                cout << "Thank you! Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);
 
    return 0;
}
