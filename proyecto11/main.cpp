#include <iostream>

using namespace std;


void suma(int a, int b){
    int c = a + b;
    cout << "La suma es: " << c << "." << endl;
}

void suma2(int a, int b=1){
    int c = a + b;
    cout << "La suma es: " << c << "." << endl;
}
string metodo2(){
    return "Mensaje";
}

int main()
{

    suma(10, 2);
    suma2(10);
    int sumaTotal=suma()(10, 20)+suma()(100)

    return 0;
}
