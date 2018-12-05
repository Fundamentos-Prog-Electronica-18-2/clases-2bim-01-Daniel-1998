#include <iostream>

using namespace std;

void obtenerTablaMultiplicar (int valor_tabla, int limite){
    int contador = 1;
    while (contador <= limite){
        int resultado1 = contador + valor_tabla;
        cout << valor_tabla << "*" << contador << "=" << resultado1 << endl;
        contador = contador + 1;


    }

}

void obtenerTablaSumar(int valor_tabla, int limite){

    for (int i = 1;i<=limite;i++){
            int resultado2=valor_tabla+i;

        cout << valor_tabla << "+"<<i<< "="<< resultado2<<endl;
    }



}

int main()
{
    int limite, valor_tabla, opcion;

    cout << "Ingrese el limite: " << endl;
    cin >> limite;

    cout << "Ingrese el valor de la tabla: " << endl;
    cin >> valor_tabla;

    cout << "Elija la opcion (1) Multiplicacion (2) Suma: " << endl;
    cin >> opcion;

    if(opcion==1){
        obtenerTablaMultiplicar(valor_tabla, limite);
    }else{
        if(opcion==2){
            obtenerTablaSumar(valor_tabla, limite);
        }else{
            cout << "Opcion incorrecta";
        }
    }

    return 0;
}
