#include<iostream>
using namespace std;
int main(){
    int pin = 1234;
    int enteredPin;
    int choice;
    double balance = 1000.0;
    double amount;
    cout<<"ATM MANAGEMENT SYSTEM"<<endl;
    cout<<"Enter PIN: ";
3    cin >> enteredPin;
    if(enteredPin != pin){
        cout<<"Incorrect PIN! Access Denied."<<endl;
        return 0;
    }
    do{
        cout<<"\n=====ATM MENU=====\n";
        cout<<"1.Check Balance"<<endl;
        cout<<"2.Deposit Money"<<endl;
        cout<<"3.Withdraw Money"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;
        switch ((choice))
        {
        case 1:
            cout<<"Current Balance:Rs. "<<balance<<endl;
            break;
        case 2:
        cout<<"Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout<<"Rs."<<amount<<"deposited successfully"<<endl;
        break;
        case 3:
        cout<<"Enter amount to withdraw: ";
        cin >> amount;
        if(amount <= balance){
            balance -= amount;
            cout<<"Please collect your cash."<<endl;
            cout<<"Reamaining Balance:Rs. "<<balance<<endl;
        }else{
            cout<<"Insufficient Balance!"<<endl;
        }
        break;
        case 4:
        cout<<"Thankyou for using our ATM!"<<endl;
        break;

        default:
        cout<<"Invalid Choice!"<<endl;
            
        }

    }while(choice != 4);
    return 0;
}