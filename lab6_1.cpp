#include<iostream>
using namespace std;

int main(){
    int x ;
    int a = 0 ;
    int b = 0 ;
    cout << "Enter an integer: ";
    cin >> x;
    while( x!=0 ){
        if(x%2==0)
        {a=a+1;}
        else{b=b+1;}
    cout << "Enter an integer: ";
    cin >> x;

    }
    cout << "#Even numbers = " << a << endl;
    cout << "#Odd numbers = " << b << endl;
    return 0;
}
