#include<bits/stdc++.h>
using namespace std;

class Complex{   
    public:
    int real,img;

    Complex(){
        real = 0;
        img = 0;
    }
    
    friend istream & operator >> (istream &, Complex &b){
        cin>>b.real>>b.img;
        return cin;
    }
    friend ostream & operator << (ostream &, Complex &a){

      cout<<a.real<<a.img<<endl;
      return cout;
    }

    Complex operator + (Complex c){
        Complex c1;
        c1.real=real+c.real;
        c1.img=img+c.img;
        return c1;
    }
    
    Complex operator * (Complex c){
        Complex c2;
        c2.real=real*c.real;
        c2.img=img*c.img;
        return c2;
    }

    void sum(){
        cout<<"The Sum of two numbers is "<<real<<" + "<<img<<"i"<<endl;
    }
    void multiply(){
        cout<<"The Product of two numbers is "<<real<<" + "<<img<<"i"<<endl;
    }

    };
int main(){
    Complex c1,c2,c3,c4;
    int choice;
    string decide;
    
    cout<<"Enter real and imaginary part of first number: ";
    cin>>c1;
    cout<<"Enter real and imaginary part of Second number: ";
    cin>>c2;
    int flag = 1;
    while (flag = 1){
        cout<<"1) Add both numbers"<<endl;
        cout<<"2) Multiply both numbers"<<endl;
        cout<<"3) Exit Program"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>choice;
       switch(choice){
        case 1 :
            c3 = c1 + c2;
            c3.sum();
            break;
        case 2 :
            c3 = c1 * c2;
            c3.multiply();
            break;
        default :
        cout<<"Thanks for using Program\n";
           return 0;
       }
       }
       
}
