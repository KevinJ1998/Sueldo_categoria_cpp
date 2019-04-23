#include<iostream>
using namespace std;
int main(){
    int hordia,horatotal=0,numdias=1,categoria;
    float sueldo,porc;
    string nombre;
    cout<<"Ingrese el nombre del empleado: ";
    cin>>nombre;
    cout<<"Ingrese el sueldo de "<<nombre<<": ";
    cin>>sueldo;
    cout<<"Ingrese la categoria del sueldo: ";
    cin>>categoria;
    switch (categoria){
    case 1:
        porc=0.15;
        sueldo=sueldo+(sueldo*porc);
    break;
    case 2:
        porc=0.10;
        sueldo=sueldo+(sueldo*porc);    
    break;
    case 3:
        porc=0.08;
        sueldo=sueldo+(sueldo*porc);
    break;
    case 4:
        porc=0.07;
        sueldo=sueldo+(sueldo*porc);                
    default:
        cout<<"Categoria incorrecta";
    break;
    }
    
    while (numdias<=5){
        cout<<"Ingrese el # de horas trabajadas el dia "<<numdias<<": ";
        cin>>hordia;
        numdias++;
        horatotal=hordia+horatotal;
    }
    cout<<"Horas trabajadas en la semana: "<<horatotal<<endl;
    cout<<"Sueldo pagado a "<<nombre<<" en la semana: "<<(sueldo*horatotal)<<endl;
    cout<<"La categoria del sueldo es: "<<categoria<<" por lo que se incrementa un: "<<(porc*100);

    return 0;
}