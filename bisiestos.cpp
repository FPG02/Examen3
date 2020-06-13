#include <iostream>

using namespace std;

int main(){
    int a, b = a;

    cout<<"Ingresa un año para saber si es bisiesto: "<<endl;
    cin>>a;

    if(a%400 == 0){
        cout<<"El año "<<a<<" si es bisiesto"<<endl;

    }else if(a%400!=0){
        int b = a;

        if(b%4==0 && b%100!=0){
            cout<<"El año "<<b<<" si es bisiesto"<<endl;

        }else if(b%4!=0 || b%100==0 || b%100!=0){
            cout<<"El año "<<b<<" no es bisiesto"<<endl;
        }
    }
return 0;
}