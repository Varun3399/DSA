// print sum of two integers
#include<iostream>
using namespace std;
int main () {
    cout<<"enter two numbers"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"the sum of two numbers are : " << a+b;
    return 0;
}

// area of rectangle
#include<iostream>
using namespace std;
int main () {
    int length,breadth;
    cout<<"enter the length"<<endl;
    cin>>length;
    cout<<"enter the breadth"<<endl;
    cin>>breadth;
    cout<<"Area of rectangle is: "<< (length*breadth);
    return 0;
}

// mathematical operations
#include<iostream>
using namespace std;
int main () {
    int num1,num2;
    cout<<"enter the number1"<<endl;
    cin>>num1;
    cout<<"enter the number2"<<endl;
    cin>>num2;

    cout<<"Addition of two numbers are: "<<num1+num2<<endl;
    cout<<"Subtraction of two numbers are: "<<num1-num2<<endl;
    cout<<"Multiplication of two numbers are: "<<num1*num2<<endl;
    cout<<"division of two numbers are: "<<num1/num2;

    return 0;
}

// simple interest
#include<iostream>
using namespace std;
int main () {
    int principal,time,rate;
    cout<<"enter the principal amount"<<endl;
    cin>>principal;
    cout<<"enter the time"<<endl;
    cin>>time;
    cout<<"enter the Rate"<<endl;
    cin>>rate;

    cout<<"simple interest is:"<< (principal * rate * time)/100;
    return 0;
}

// ASCII VALUE
#include<iostream>
using namespace std;
int main () {
    char ch;
    cin>>ch;
    cout<<(int)ch;
    return 0;
}

// typecasting into float and int.
#include<iostream>
using namespace std;
int main () {
    float f1;
    cin>>f1;
    
    cout<<"typecasted value:"<<(int)f1<<" "<<"original value"<<" "<<f1;
    return 0;
}

// uppercase letters
#include<iostream>
using namespace std;
int main () {
    int a;
    cin>>a;

    char uppercase = (char)a;
    cout<<uppercase;
    return 0;
}

// 9-> output problem
// 5,7 -> the value of x
// 11 -> output problem
// a=4,b=6,c=9; 

// 12 -> output problem

