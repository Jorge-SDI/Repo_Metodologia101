#include <iostream>
using namespace std;    
int main() {    
    int a,b;
    cout << "Ingrese dos numeros: ";    
    cin >> a >> b;
    cout << "Ingrese la operacion (+, -, *,/ ): ";    
    char signo;
    cin >> signo;
    switch(signo) {

        case '+':
            cout << "Resultado: " << a + b << endl;
            break;
        case '-':
            cout << "Resultado: " << a - b << endl;
            break;
        case '*':
            cout << "Resultado: " << a * b << endl;
            break;
        case '/':
            cout << "Resultado: " << a / b << endl;
            break;
        default:
            cout << "Operacion no valida" << endl;
            break;
    }
    return 0;    
}