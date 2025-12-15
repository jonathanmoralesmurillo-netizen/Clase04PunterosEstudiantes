//
// Created by ESINF 2-004805 on 15/12/25.
//

#include <iostream>
using namespace std;

int main() {



    int x = 10;
    int *p;
    p = &x;// tiene una referencia por eso se usa el Ampersand
    cout << "x: "<<x <<endl;// Esto imprime el valor de la variable int no es un puntero
    cout <<"&x: "<< &x << endl;// esto imprime la referencia de la posicion de memoria
    cout <<"p: " <<p << endl;// Esto imprime el valor de la variable
    cout << "*p: "<<*p << endl;


    int arr[4] = {5, 10, 15, 20};
    int* pA = arr;

    for (int i = 0; i < 4; i++) {
        cout << *(pA + i) << endl;
    }
    return 0;



}