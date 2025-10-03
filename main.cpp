#include <iostream>
using namespace std;    
int main() {    
    int a,b;
    int resultado;
    cout << "Ingrese dos numeros: ";    
    cin >> a >> b;
    cout << "Ingrese la operacion (+, -, *,/ ): ";    
    char signo;
    cin >> signo;
    switch(signo) {

        case '+':
            resultado = a + b;
            cout << a << " + " << b << " = " << resultado << endl;
            break;
        case '-':
            resultado = a - b;
            cout << a << " - " << b << " = " << resultado << endl;
            break;
        case '*':
            resultado = a * b;
            cout << a << " * " << b << " = " << resultado << endl;
            break;
        case '/':
            resultado = a / b;
            cout << a << " / " << b << " = " << resultado << endl;
            break;
        default:
            cout << "Operacion no valida" << endl;
            break;
    }
    return 0;    
}