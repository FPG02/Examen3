#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
    int x, a = 0, num, cont = 0;

    srand((unsigned)time(NULL));
    x = rand()%(101);

    cout<<"Adivina el numero que se encuentra entre 0 y 100"<<endl<<endl;

    do{

        cout<<"Introduce un numero: "<<endl;
        cin>>num;
        cont++;

        if(num > x){
            cout<<"El numero es menor"<<endl;

        }else if(num < x){
            cout<<"El numero es mayor"<<endl;

        }else{
            cout<<"Felicidades, encontraste le numero :D"<<endl;
            cout<<"No. de intentos: "<<cont<<endl;
            break;
        }
    }while(a==0 ^ cont == 5);

    cout<<"El numero es: "<<x<<endl;

return 0;
}