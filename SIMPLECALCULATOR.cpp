#include<iostream>
using namespace std;

// function for calculating the addition of two numbers
double addition(double n1,double n2){
    return n1 + n2;
}

// function for calculating the subtraction of two numbers
double subtraction(double n1,double n2){
    return n1 - n2;
}

// function for calculating the multiplication of two numbers
double multiplication(double n1,double n2){
    return n1 * n2;
}

// function for calculating the division of two numbers
double division(double n1,double n2){
    if(n2==0){
        cout<<"Please enter a non-zero value for n2!"<<endl;
        return 0;
    }
    return n1 / n2;
}

int main(){
    char Operator;
    double n1,n2;
    double result;

    cout<<"Enter the value of n1: "<<endl;
    cin>>n1;

    cout<<"Enter the value of n2: "<<endl;
    cin>>n2;

    cout<<"Enter an operator out of (+,-,*,/): "<<endl;
    cin>>Operator;

    switch(Operator){
        case '+':
         result =addition(n1,n2);
         break;

        case '-':
         result=subtraction(n1,n2);
         break;

        case '*':
         result=multiplication(n1,n2);
         break;

        case '/':
         result=division(n1,n2);
         break;

        default:
         cout<<"Provide an valid operator!"<<endl;
    }
    cout<<"Your Result is: "<<result<<endl;
    return 0;
}