#include<iostream>
using namespace std;

class Bank
{
    private:
            long acc;
            string username;
            string password; 
            string cus_name,branch_code,IFSC_code,acc_type;   
    public:
            void reg();
            void login();
            void check_balance();
            void cus_details();
            void saving_acc();
            void current_acc();
            void cus_details_show();
};
void Bank::reg()
{
    cout<<"*************Welcome to ABC Bank****************"<<endl;
    cout<<"************Welcome To The Register Page of ABC Bank*********"<<endl;
    cout<<"Please Enter the Username: "<<endl;
    cin>>username;
    cout<<"Please Enter the Password: "<<endl;
    cin>>password;
}
void Bank::login()
{
    cout<<"Please Enter the UserName: "<<endl;
    
}
void Bank::check_balance()
{

}
void Bank::current_acc()
{

}
void Bank::saving_acc()
{


}
void Bank::cus_details()
{
    cout<<"Please Enter Your Name: "<<endl;
    cout<<"Please Enter Your Branch Code: "<<endl;
    cout<<"Please Enter Your IFSC Code: "<<endl;
    cout<<"Please Enter Account Number: "<<endl;
    cout<<"Please Enter Your Account Type: "<<endl;
    cin>>cus_name>>branch_code>>IFSC_code>>acc>>acc_type;
}
void Bank::cus_details_show()
{
    cout<<"Welcome "<<"Mr./Mrs."<<cus_name<<endl;
    cout<<"Account Number: "<<acc<<endl;
    cout<<"Branch: "<<branch_code<<endl;
    cout<<"Account Type: "<<acc_type<<endl;
}
int main()
{
    int ch;
    Bank ob;
    do
    {
        cout<<"******Welcome to the ABC Bank Main Page******"<<endl;
        cout<<"Press <1> for Register Yourself to Bank"<<endl;
        cout<<"Press <2> for Login into the Bank Main Page"<<endl;
        cout<<"Press <3> for Show up your details"<<endl;
        cout<<"Press <4> for the Check the Bank Balance: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    ob.reg();
                    break;
            case 2:
                    ob.login();
                    break;
            case 3:
                    ob.cus_details_show();
                    break;
            case 4:
                    ob.check_balance();
                    break;
            default:
                    cout<<"Please check all the details , You have enterd an wrong choice"<<endl;
    
        }
        

    } while (ch=!6);
    
    
    
}