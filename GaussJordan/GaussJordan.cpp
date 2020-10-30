#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template <typename matriz>
void Resultados(matriz & miMatriz);

template <typename matriz>
void diagonal(matriz & miMatriz);
int k, i, j;
int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);
    Resultados(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);



    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();

    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}


/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
        const int variables=miMatriz.size();

        for(int i=0; i<variables; i++)
        {
            if(isnan(miMatriz[i][variables]))
            {
                cout<<"sin solucion"<<endl;
                return;
            }
            else
            {
                cout << "x" << i << " = ";
                cout << miMatriz[i][variables] << endl;
            }
        }

    }


template <typename matriz>
void GaussJordan(matriz & miMatriz) {

      diagonal(miMatriz);


}

template <typename matriz>
void diagonal(matriz & miMatriz)
{
    int variables=miMatriz.size();
    float x;

    for( i=0; i < variables; i++) {
        for( j = 0; i < variables; j++) {
            if(j!=i) {
                 x = miMatriz[j][i]/miMatriz[i][i];

                for(k=1; k<=variables+1; k++) {
                    miMatriz[j][k]=miMatriz[j][k]-x*miMatriz[i][k];
                }
            }
        }
    }


    }

template <typename matriz>
void Resultados(matriz & miMatriz)
{

    int variables=miMatriz.size();
    float y;

    for (int j=0; j < variables; i++)
    {
        y=miMatriz[j][j];
        for (int i=0; i<variables+1; i++)
        {
            miMatriz[i][j]=miMatriz[j][i]/y;
        }
    }
}



