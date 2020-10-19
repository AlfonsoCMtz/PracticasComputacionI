#include <iostream>

using namespace std;
int main()
{
    char ope;
    double num1, num2;

    std::cout << "inserte su primer número" << endl;
    cin >> num1;

    std::cout << "inserte segundo número" << endl;
    cin >> num2;

    std::cout << "elija su operación" << endl;
    cin >> ope;

    if( (num2 == 0) && (ope == '/'))
        cout << "error no se puede dividir entre 0" << endl;

    switch (ope)
    {
        case '+':
            cout << num1+num2;
            break;

        case'-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;

        case'/':
            cout << num1/num2;
            break;
        default:
            cout << "error operador no valido";
    }
    return 0;
}

