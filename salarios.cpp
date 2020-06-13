#include <iostream>
#include <cmath>

using namespace std;

float salariototal(float x, float y){
    float salariot = 0;
    salariot = (x*1.75) + (y*2.5);

    return salariot;
}

float salarioreal(float z){
    float salarior = 0, seguro = z*0.04, afp = z*0.0625;

    if(z > 500){
        float renta = z*0.1;
    
        salarior = z - (seguro + afp + renta);

        return salarior;
    }else if(z <= 500){

        salarior = z - (seguro + afp);

        return salarior;
    }
}

int main(){
    int num;

    do{
        cout<<"1- Calcular el salario mensual de un empleado."<<endl;
        cout<<"2- Salir."<<endl;
        cout<<"Ingresa el numero segun la opcion que prefieras: ";
        cin>>num;

        switch (num){
            case 1:
            float horan, horae, t, e;
            cout<<"Ingresa cuantas horas normales trabajo: ";
            cin>>horan;
            cout<<"Ingresa cuantas horas extras trabajo: ";
            cin>>horae;

            t = salariototal(horan, horae);
            cout<<"El salario total es de: "<<t<<endl;
            e = salarioreal(t);
            cout<<"El salario real es de: "<<e<<endl;
            break;

            case 2:
            cout<<"Gracias, vuelva pronto";
            break;
        }
    }while(num!=2);

return 0;
}