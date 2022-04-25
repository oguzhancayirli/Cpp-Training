#include <iostream>
using namespace std;
/*
 note here
 cin = console input
 cout = console output
     \n = <<endl;

int main() {
  cout << "Hello World!";
  return 0;
}

*/

//--------------------------------------------

/*
        Naming the variable;
 1-Variables cannot be defined with numbers.
 2-no spaces.
 3-#,$,* ve þ,ð,ý,ç expressions cannot be used.
 4- Abc & abc not equal

*/

//----------------------------------------------

/*
int a = 5;               // Integer (whole number)
float b = 5.99;         // Floating point number
double c = 9.98;       // Floating point number
char d = 'D';         // Character
bool e = true;       // Boolean
string f = "Hello"; // String
*/

//----------------------------------------------

/*      OPERATORS;
 %     Mod
 ++    +1
 --    -1
 ^     2^3      2x2x2
 +=    a+=b     a=a+b
 *=    a*=b     a=a*b
 /=    a/=b     a=a/b
 %=    a%=b     a=a%b

 ==     Equal to                     x == y
 !=	    Not equal                    x != y
 <  	Less than                    x > y
 >      Greater than                 x < y
 >=  	Greater than or equal to     x >= y
 <=	    Less than or equal to        x <= y


  int main(){
    int a,b;
    cout<<"a enter the number:";
    cin>>a;
    cout<<"b enter the number:";
    cin>>b;
    cout<<"a%b= "<<a%b<<endl;

    return 0;
  }

*/



int main(){
    double a,b,c;
    double d;
    cout << "1. enter the number: ";
    cin >>a;
    cout << "2. enter the number: ";
    cin >>b;
    cout << "3. enter the number: ";
    cin >>c;

    d=(a+b+c)/3;

    cout <<"average="<<d;





    return 0;
}
