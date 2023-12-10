#include<iostream>
using namespace std;

int main(){

    /* Approach 1 - Addition and Subtraction */

     int a;
     int b;

     a = 5;
     b=3;

    a = a-b;
    b = a+b;
    a = b-a;

    cout << a << endl << b << endl;


    /* Approach 2 - Bitwise XOR */


    int c  = 7;
    int d = 4;

    c = c^d;

    cout << c << endl;

    d = c^d;

    cout << d << endl;

    c = c^d;

    cout << c << endl;

 
}