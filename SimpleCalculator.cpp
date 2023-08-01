
/** CODSOFT INTERNSHIP 
 * ----------------------------------------------------------
 * Develop a calculator program that performs basic arithmetic
    operations such as addition, subtraction, multiplication, and
    division. Allow the user to input two numbers and choose an
    operation to perform.
 * --------------------------------------------------------
 *  TASK - 2(SIMPLE CALCULATOR)
 * --------------------------------------------------------
 * INTERN NAME - SAKSHYA BHATTACHARYA
 * -------------------------------------------------------
*/
#include<iostream>
using namespace std;

//define class SimpleCalc
class SimpleCalc
{
    private:
                double a;//declare the first Variable as private
                double b;//declare the second Variable as private
    public:
            void Add(double a,double b); //Add() for performing addition
            void Sub(double a,double b); //Sub() for performing subtraction
            void Mul(double a,double b); //Mul() for performing Multiplication
            void Div(double a,double b); //Div() for performing Division
};
void SimpleCalc::Add(double a,double b)
{
    double c = a+b;
    cout<<"Addition result is: "<<c<<endl;
}
void SimpleCalc::Sub(double a,double b){
    double c = a-b;
    cout<<"Subtraction result is: "<<c<<endl;
}
void SimpleCalc::Mul(double a,double b){
    double c = a*b;
    cout<<"Multiplication result is: "<<c<<endl;
}
void SimpleCalc::Div(double a,double b){
    double c,d;
    if(a>b){c=a/b;
        cout<<"Division result is: "<<c<<endl;
    }
    else{
        d=b/a; 
        cout<<"Division result is: "<<d<<endl;
    } 
        
}  
//defining Main function
int main(){
    SimpleCalc ob ; // creating ob as SimpleCalc class object
    double a,b;
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
            default:
                    cout<<"Please recheck the entered choice!! It is invalid!! "<<endl;
        }
        
    }while(ch!=4); 
}
