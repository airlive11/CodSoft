#include<iostream>
using namespace std;

//define class SimpleCalc
class SimpleCalc
{
    private:
                int a;//declare the first Variable as private
                int b;//declare the second Variable as private
    public:
            void Add(int a,int b);//Add() for performing addition
            void Sub(int a,int b);//Sub() for performing subtraction
            void Mul(int a,int b);//Mul() for performing Multiplication
            void Div(int a,int b);//Div() for performing Division
            void Rem(int a,int b);//Rem() for Performing Reminder
};
void SimpleCalc::Add(int a,int b)
{
    int c = a+b;
    cout<<"Addition result is: "<<c<<endl;
}
void SimpleCalc::Sub(int a,int b){
    int c = a-b;
    cout<<"Subtraction result is: "<<c<<endl;
}
void SimpleCalc::Mul(int a,int b){
    int c = a*b;
    cout<<"Multiplication result is: "<<c<<endl;
}
void SimpleCalc::Div(int a,int b){
    int c,d;
    if(a>b){c=a/b;
        cout<<"Division result is: "<<c<<endl;
    }
    else{
        d=b/a; 
        cout<<"Division result is: "<<d<<endl;
    } 
        
}  

void SimpleCalc::Rem(int a,int b)
{
    int c;
    c=a%b;
}

//defining Main function
int main(){
    SimpleCalc ob ; // creating ob as SimpleCalc class object
    int a,b;
    int ch;
    do{    
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Press <1> for the Addition(+) Operation"<<endl;
    cout<<"Press <2> for the Subtraction(-) Operation"<<endl;
    cout<<"Press <3> for the Multiplication(*) Operation"<<endl;
    cout<<"Press <4> for the Divide(/) Operation"<<endl;
    cout<<"Press <5> for the Remainder Operation"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                ob.Add(a,b);
                break;
        case 2:
                ob.Sub(a,b);
                break;
        case 3:
                ob.Mul(a,b);
                break;
        case 4:
                ob.Div(a,b);
                break;
        case 5:
                ob.Rem(a,b);
                break;
    }
    }while(ch!=5);
    
    
    

}