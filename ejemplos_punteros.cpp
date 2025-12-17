//
// Created by ESINF 2-004805 on 14/12/25.
//


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// ============================================================================
// CLASE PERSONA (Ya está completa - no modificar)
// ============================================================================

class Persona {
private:
    string nombre;
    int edad;
    int id;
public:
    Persona(string nombre = "", int edad = 0, int id = 0) {
        this->nombre = nombre;
        this->edad = edad;
        this->id = id;
    }

    string getNombre() { return nombre; }
    int getEdad() { return edad; }
    int getId() { return id; }

    void setNombre(string nombre) { this->nombre = nombre; }
    void setEdad(int edad) { this->edad = edad; }
    void setId(int id) { this->id = id; }

    string toString() {
        stringstream s;
        s << "Nombre: " << nombre << ", Edad: " << edad << ", ID: " << id;
        return s.str();
    }
};

// =====================       =======================================================
// EJEMPLO 1: OPERADORES FUNDAMENTALES (& y *)
// ============================================================================
// TODO:
// 1. Declara una variable entera llamada 'valor1' con valor 10
// 2. Declara un puntero 'ptr1' que apunte a 'valor1'
// 3. Muestra: el valor de valor1, la dirección de valor1, el contenido de ptr1, y el valor apuntado por ptr1

void ejemplo1_OperadoresFundamentales() {
    cout << "\n=== EJEMPLO 1: OPERADORES FUNDAMENTALES ===" << endl;

    // COMPLETA AQUÍ
    int valor1 = 10;
    int* ptr1 = &valor1;

    cout << "valor1: " << valor1 << endl;        // Valor: 10
    cout << "&valor1: " << &valor1 << endl;      // Dirección de valor1
    cout << "ptr1: " << ptr1 << endl;            // Contenido de ptr1 (dirección)
    cout << "*ptr1: " << *ptr1 << endl;          // Valor apuntado: 10

}

// ============================================================================
// EJEMPLO 2: DECLARACIÓN E INICIALIZACIÓN
// ============================================================================
// TODO:
// 1. Declara una variable 'valor2' con valor 10
// 2. Declara un puntero 'ptr2a' y asígnalo a valor2 (forma 1)
// 3. Declara e inicializa 'ptr2b' en una línea apuntando a valor2 (forma 2)
// 4. Declara 'ptr2c' inicializado con nullptr (forma 3)
// 5. Muestra los valores apuntados por ptr2a y ptr2b
// 6. Verifica si ptr2c es nullptr

void ejemplo2_DeclaracionInicializacion() {
    cout << "\n=== EJEMPLO 2: DECLARACIÓN E INICIALIZACIÓN ===" << endl;

    // COMPLETA AQUÍ
    int valor2 = 10;
    // Forma 1: Declarar y luego asignar
    int* ptr2a;
    ptr2a = &valor2;
    cout << "*ptr2a: " << *ptr2a << endl;

    // Forma 2: Declarar e inicializar en una línea
    int* ptr2b = &valor2;
    cout << "*ptr2b: " << *ptr2b << endl;
    // Forma 3: Inicializar con nullptr (recomendado)
    int* ptr2c = nullptr;
    if (ptr2c == nullptr) {
        cout << "ptr2c es nullptr (correcto)" << endl;

    }

}

// ============================================================================
// EJEMPLO 3: MODIFICAR VALORES A TRAVÉS DE PUNTEROS
// ============================================================================
// TODO:
// 1. Declara 'valor3' con valor 5
// 2. Crea un puntero 'ptr3' que apunte a valor3
// 3. Muestra valor3 antes de modificar
// 4. Modifica valor3 a través del puntero (cambia a 10)
// 5. Muestra valor3 después de modificar

void ejemplo3_ModificarValores() {
    cout << "\n=== EJEMPLO 3: MODIFICAR VALORES A TRAVÉS DE PUNTEROS ===" << endl;

    // COMPLETA AQUÍ
    int valor3 = 5;
    int* ptr3 = &valor3;
    cout << "Antes: valor3 = " << valor3 << endl;
    *ptr3 = 10;  // Modifica valor3 a través del puntero
    cout << "Después: valor3 = " << valor3 << endl;


}

// ============================================================================
// EJEMPLO 4: MÚLTIPLES PUNTEROS A LA MISMA VARIABLE
// ============================================================================
// TODO:
// 1. Declara 'valor4' con valor 42
// 2. Crea tres punteros (ptr4a, ptr4b, ptr4c) que apunten a valor4
// 3. Muestra el valor inicial de valor4
// 4. Modifica valor4 a través de ptr4a (cambia a 100)
// 5. Muestra los valores apuntados por los tres punteros y valor4

void ejemplo4_MultiplesPunteros() {
    cout << "\n=== EJEMPLO 4: MÚLTIPLES PUNTEROS A LA MISMA VARIABLE ===" << endl;

    // COMPLETA AQUÍ
    int valor4 = 42;
    int* ptr4a = &valor4;
    int* ptr4b = &valor4;
    int* ptr4c = &valor4;
    cout << "Valor inicial: " << valor4 << endl;
    *ptr4a = 100;  // Modifica valor4
    cout << "Después de *ptr4a = 100:" << endl;
    cout << "  *ptr4a: " << *ptr4a << endl;
    cout << "  *ptr4b: " << *ptr4b << endl;
    cout << "  *ptr4c: " << *ptr4c << endl;
    cout << "  valor4: " << valor4 << endl;



}



// ============================================================================
// EJEMPLO 5: PUNTEROS Y ARRAYS - RELACIÓN FUNDAMENTAL
// ============================================================================
// TODO:
// 1. Declara un array 'arr5' de 5 enteros con valores {10, 20, 30, 40, 50}
// 2. Crea un puntero 'ptr5' que apunte al array (arr5)
// 3. Muestra arr5[2] usando notación de array
// 4. Muestra el mismo elemento usando aritmética de punteros *(ptr5 + 2)
// 5. Muestra el mismo elemento usando notación de array con puntero ptr5[2]

void ejemplo5_PunterosYArrays() {
    cout << "\n=== EJEMPLO 5: PUNTEROS Y ARRAYS ===" << endl;

    // COMPLETA AQUÍ
    int arr5[5] = {10, 20, 30, 40, 50};
    int* ptr5 = arr5;  // Equivale a: int* ptr5 = &arr5[0]
    cout << "Tres formas de acceder a elementos:" << endl;
    cout << "  arr5[2] = " << arr5[2] << endl;           // Forma 1: Notación de array
    cout << "  *(ptr5 + 2) = " << *(ptr5 + 2) << endl;   // Forma 2: Aritmética de punteros
    cout << "  ptr5[2] = " << ptr5[2] << endl;           // Forma 3: Notación de array con puntero


   }




// ============================================================================
// EJEMPLO 6: RECORRER ARRAY CON PUNTERO
// ============================================================================
// TODO:
// 1. Declara un array 'arr6' de 5 enteros con valores {10, 20, 30, 40, 50}
// 2. Crea un puntero 'ptr6' que apunte al array
// 3. Método 1: Recorre el array usando índice con *(ptr6 + i)
// 4. Resetea ptr6 al inicio del array
// 5. Método 2: Recorre incrementando el puntero (ptr6++)

void ejemplo6_RecorrerArray() {
    cout << "\n=== EJEMPLO 6: RECORRER ARRAY CON PUNTERO ===" << endl;

    // COMPLETA AQUÍ
    int arr6[5] = {10, 20, 30, 40, 50};
    int* ptr6 = arr6;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr6 + i) << " ";
    }
    cout << endl;
    ptr6 = arr6;  // Resetear

    for (int i = 0; i < 5; i++) {
        cout << *ptr6 << " ";
        ptr6++;  // Avanzar al siguiente elemento
    }
    cout << endl;

}

// ============================================================================
// EJEMPLO 7: ARITMÉTICA DE PUNTEROS
// ============================================================================
// TODO:
// 1. Declara un array 'arr7' de 5 enteros con valores {10, 20, 30, 40, 50}
// 2. Crea un puntero 'ptr7' que apunte al array
// 3. Muestra el valor al que apunta inicialmente
// 4. Incrementa ptr7 (ptr7++) y muestra el nuevo valor
// 5. Avanza ptr7 3 posiciones más (ptr7 = ptr7 + 3) y muestra el valor
// 6. Calcula la diferencia entre ptr7 y arr7 (ptr7 - arr7)

void ejemplo7_AritmeticaPunteros() {
    cout << "\n=== EJEMPLO 7: ARITMÉTICA DE PUNTEROS ===" << endl;

    // COMPLETA AQUÍ
    int arr7[5] = {10, 20, 30, 40, 50};
    int* ptr7 = arr7;
    cout << "Puntero inicial apunta a: " << *ptr7 << endl;
    ptr7++;  // Avanza al siguiente elemento
    cout << "Después de ptr7++: " << *ptr7 << endl;
    ptr7 = ptr7 + 3;  // Avanza 3 elementos
    cout << "Después de ptr7 + 3: " << *ptr7 << endl;
    int diff = ptr7 - arr7;  // Diferencia en elementos
    cout << "Diferencia (ptr7 - arr7): " << diff << " elementos" << endl;

}

// ============================================================================
// EJEMPLO 8: PUNTEROS Y FUNCIONES - PASAR PUNTEROS COMO PARÁMETROS
// ============================================================================
// TODO:
// Completa la función 'duplicar' que recibe un puntero a entero y duplica su valor
// Luego en ejemplo8:
// 1. Declara 'valor8' con valor 5
// 2. Muestra valor8 antes de llamar a duplicar
// 3. Llama a duplicar pasando la dirección de valor8
// 4. Muestra valor8 después de llamar a duplicar

void duplicar(int* num) {
    // COMPLETA AQUÍ: Duplica el valor apuntado por num
    *num = *num * 2;  // Modifica la variable original
}

void ejemplo8_PunterosYFunciones() {
    cout << "\n=== EJEMPLO 8: PUNTEROS Y FUNCIONES ===" << endl;

    // COMPLETA AQUÍ
    int valor8 = 5;
    cout << "Antes de duplicar: " << valor8 << endl;
    duplicar(&valor8);  // Pasar dirección
    cout << "Después de duplicar: " << valor8 << endl;
}

// ============================================================================
// EJEMPLO 9: PASAR ARRAYS A FUNCIONES
// ============================================================================
// TODO:
// Completa la función 'imprimirArray' que recibe un puntero a array y su tamaño
// Luego en ejemplo9:
// 1. Declara un array 'arr9' de 5 enteros con valores {1, 2, 3, 4, 5}
// 2. Llama a imprimirArray pasando arr9 y su tamaño

void imprimirArray(int* arr, int tamano) {
    // COMPLETA AQUÍ: Recorre el array e imprime cada elemento
     for (int i=0; i<tamano;i++) {
         cout << arr[i] << " ";
     }

}

void ejemplo9_PasarArraysAFunciones() {
    cout << "\n=== EJEMPLO 9: PASAR ARRAYS A FUNCIONES ===" << endl;
    int arr9[5] = {1, 2, 3, 4, 5};
    cout<<"Array: ";
    imprimirArray(arr9,5);


}

// ============================================================================
// EJEMPLO 10: PUNTEROS Y CLASES - PUNTERO A OBJETO
// ============================================================================
// TODO:
// 1. Crea un objeto Persona llamado 'persona10' con nombre "Juan", edad 25, id 100
// 2. Crea un puntero 'ptr10' que apunte a persona10
// 3. Muestra el nombre y edad usando el operador flecha (->)
// 4. Modifica la edad a 30 usando el puntero
// 5. Muestra la nueva edad
// 6. Muestra el nombre usando desreferenciación (*ptr10).getNombre()

void ejemplo10_PunterosYClases() {
    cout << "\n=== EJEMPLO 10: PUNTEROS Y CLASES ===" << endl;

    // COMPLETA AQUÍ
    Persona persona10("Juan", 25, 100);
    Persona* ptr10=&persona10;
    cout << "Usando operador flecha:" << endl;
    cout << "  Nombre: " << ptr10->getNombre() << endl;
    cout << "  Edad: " << ptr10->getEdad() << endl;

    cout << "\nModificando a través del puntero:" << endl;
    ptr10->setEdad(30);
    cout << "  Nueva edad: " << ptr10->getEdad() << endl;
    cout << "\nEquivalente usando desreferenciación:" << endl;
    cout << "  (*ptr10).getNombre(): " << (*ptr10).getNombre() << endl;
}
// ============================================================================
// EJEMPLO 11: ARRAY ESTÁTICO DE PUNTEROS A OBJETOS
// ============================================================================
// TODO:
// 1. Declara un array 'personas11' de 3 objetos Persona
// 2. Crea los objetos: ("Ana", 20, 101), ("Luis", 25, 102), ("Sofia", 30, 103)
// 3. Declara un array 'ptrs11' de 3 punteros a Persona
// 4. Asigna cada puntero del array para que apunte a cada objeto
// 5. Recorre el array de punteros y muestra la información de cada persona

void ejemplo11_ArrayEstaticoPunteros() {
    cout << "\n=== EJEMPLO 11: ARRAY ESTÁTICO DE PUNTEROS A OBJETOS ===" << endl;

    // COMPLETA AQUÍ
    Persona personas11[3];
    // Crear objetos
    personas11[0] = Persona("Ana", 20, 101);
    personas11[1] = Persona("Luis", 25, 102);
    personas11[2] = Persona("Sofia", 30, 103);
    Persona* ptrs11[3];
    for (int i = 0; i < 3; i++) {
        ptrs11[i]=&personas11[1];
    }


    // Usar punteros
    cout << "Información usando punteros:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "  Persona " << (i+1) << ": " << ptrs11[i]->toString() << endl;
    }

}

// ============================================================================
// EJEMPLO 12: INTERCAMBIAR PUNTEROS
// ============================================================================
// TODO:
// 1. Crea dos objetos Persona: persona12a("Juan", 25, 100) y persona12b("Maria", 30, 200)
// 2. Crea dos punteros ptr12a y ptr12b apuntando a cada objeto
// 3. Muestra la información antes del intercambio
// 4. Intercambia los punteros (usa una variable temporal)
// 5. Muestra la información después del intercambio

void ejemplo12_IntercambiarPunteros() {
    cout << "\n=== EJEMPLO 12: INTERCAMBIAR PUNTEROS ===" << endl;

    // COMPLETA AQUÍ

}

// ============================================================================
// EJEMPLO 13: MEMORIA DINÁMICA - NEW Y DELETE
// ============================================================================
// TODO:
// Parte 1 - Variable simple:
// 1. Reserva memoria para un entero usando 'new'
// 2. Asigna el valor 42
// 3. Muestra el valor
// 4. Libera la memoria con 'delete'
// 5. Asigna nullptr al puntero
//
// Parte 2 - Array:
// 1. Reserva memoria para un array de 5 enteros usando 'new'
// 2. Asigna valores (0, 10, 20, 30, 40) usando un ciclo
// 3. Muestra todos los valores
// 4. Libera la memoria con 'delete[]'
// 5. Asigna nullptr al puntero

void ejemplo13_MemoriaDinamica() {
    cout << "\n=== EJEMPLO 13: MEMORIA DINÁMICA ===" << endl;

    // COMPLETA AQUÍ - Parte 1: Variable simple


}

// ============================================================================
// EJEMPLO 14: ARRAY DINÁMICO DE PUNTEROS A OBJETOS
// ============================================================================
// TODO:
// 1. Declara una variable 'cantidad14' con valor 3
// 2. Reserva memoria para un array de punteros a Persona usando 'new Persona*[cantidad14]'
// 3. Crea 3 objetos Persona dinámicamente: ("Carlos", 22, 301), ("Diana", 28, 302), ("Eduardo", 35, 303)
// 4. Asigna cada objeto al array de punteros
// 5. Muestra la información de todas las personas
// 6. Libera la memoria: primero cada objeto (delete), luego el array (delete[])

void ejemplo14_ArrayDinamicoPunteros() {
    cout << "\n=== EJEMPLO 14: ARRAY DINÁMICO DE PUNTEROS A OBJETOS ===" << endl;

    // COMPLETA AQUÍ

}

// ============================================================================
// EJEMPLO 15: PUNTEROS CONSTANTES
// ============================================================================
// TODO:
// 1. Declara valor15a = 10 y valor15b = 20
// 2. Crea un puntero a constante 'ptr15a' apuntando a valor15a
//    (const int* ptr15a = &valor15a)
// 3. Muestra el valor apuntado
// 4. Intenta cambiar ptr15a para que apunte a valor15b (debe funcionar)
// 5. Crea un puntero constante 'ptr15b' apuntando a valor15a
//    (int* const ptr15b = &valor15a)
// 6. Modifica el valor a través de ptr15b (debe funcionar)
// 7. Crea un puntero constante a constante 'ptr15c'
//    (const int* const ptr15c = &valor15a)

void ejemplo15_PunterosConstantes() {
    cout << "\n=== EJEMPLO 15: PUNTEROS CONSTANTES ===" << endl;

    // COMPLETA AQUÍ


}

// ============================================================================
// EJEMPLO 16: PUNTEROS A PUNTEROS
// ============================================================================
// TODO:
// 1. Declara 'valor16' con valor 100
// 2. Crea un puntero 'ptr16a' que apunte a valor16
// 3. Crea un puntero a puntero 'ptr16b' que apunte a ptr16a
// 4. Muestra valor16, *ptr16a, y **ptr16b (todos deben mostrar 100)
// 5. Modifica valor16 a través de ptr16b (**ptr16b = 200)
// 6. Muestra los valores nuevamente

void ejemplo16_PunterosAPunteros() {
    cout << "\n=== EJEMPLO 16: PUNTEROS A PUNTEROS ===" << endl;

    // COMPLETA AQUÍ


}

// ============================================================================
// EJEMPLO 17: PUNTEROS Y STRINGS (C-style)
// ============================================================================
// TODO:
// 1. Declara un array de caracteres 'texto17' con valor "Hola Mundo"
// 2. Crea un puntero 'ptr17' que apunte a texto17
// 3. Recorre la cadena carácter por carácter usando el puntero
//    (mientras *ptr17 != '\0')
// 4. Incrementa el puntero en cada iteración

void ejemplo17_PunterosYStrings() {
    cout << "\n=== EJEMPLO 17: PUNTEROS Y STRINGS ===" << endl;

    // COMPLETA AQUÍ


}

// ============================================================================
// EJEMPLO 18: EJERCICIO PRÁCTICO - INTERCAMBIAR VALORES
// ============================================================================
// TODO:
// 1. Declara dos variables: valor18a = 5 y valor18b = 10
// 2. Crea dos punteros apuntando a cada variable
// 3. Muestra los valores antes del intercambio
// 4. Intercambia los valores usando los punteros (usa una variable temporal)
// 5. Muestra los valores después del intercambio

void ejemplo18_IntercambiarValores() {
    cout << "\n=== EJEMPLO 18: INTERCAMBIAR VALORES CON PUNTEROS ===" << endl;

    // COMPLETA AQUÍ


}

// ============================================================================
// EJEMPLO 19: EJERCICIO PRÁCTICO - CALCULAR SUMA CON PUNTEROS
// ============================================================================
// TODO:
// 1. Declara un array 'arr19' de 5 enteros con valores {1, 2, 3, 4, 5}
// 2. Crea un puntero 'ptr19' que apunte al array
// 3. Declara una variable 'suma19' inicializada en 0
// 4. Recorre el array usando el puntero y suma cada elemento
// 5. Muestra el array y la suma total

void ejemplo19_CalcularSuma() {
    cout << "\n=== EJEMPLO 19: CALCULAR SUMA CON PUNTEROS ===" << endl;

    // COMPLETA AQUÍ


}

// ============================================================================
// EJEMPLO 20: EJERCICIO PRÁCTICO - BUSCAR EN ARRAY
// ============================================================================
// TODO:
// Completa la función 'buscarEnArray' que:
// - Recibe un puntero a array, su tamaño y un valor a buscar
// - Recorre el array buscando el valor
// - Retorna un puntero al elemento encontrado, o nullptr si no se encuentra
//
// Luego en ejemplo20:
// 1. Declara un array 'arr20' de 5 enteros con valores {10, 20, 30, 40, 50}
// 2. Busca el valor 30 usando la función
// 3. Si se encuentra, muestra la posición y la dirección
// 4. Si no se encuentra, muestra un mensaje

int* buscarEnArray(int* arr, int tamaño, int valor) {
    // COMPLETA AQUÍ: Busca 'valor' en el array y retorna su puntero

    return nullptr;  // Cambia esto
}
void ejemplo20_BuscarEnArray() {

}




// ============================================================================
// MENÚ PRINCIPAL
// ============================================================================

void mostrarMenu() {
    cout << "\n";
    cout << "╔══════════════════════════════════════════════════════════╗" << endl;
    cout << "║     EJEMPLOS COMPLETOS DE PUNTEROS EN C++               ║" << endl;
    cout << "╚══════════════════════════════════════════════════════════╝" << endl;
    cout << "\nSeleccione un ejemplo:" << endl;
    cout << "  1.  Operadores Fundamentales (& y *)" << endl;
    cout << "  2.  Declaración e Inicialización" << endl;
    cout << "  3.  Modificar Valores a Través de Punteros" << endl;
    cout << "  4.  Múltiples Punteros a la Misma Variable" << endl;
    cout << "  5.  Punteros y Arrays - Relación Fundamental" << endl;
    cout << "  6.  Recorrer Array con Puntero" << endl;
    cout << "  7.  Aritmética de Punteros" << endl;
    cout << "  8.  Punteros y Funciones" << endl;
    cout << "  9.  Pasar Arrays a Funciones" << endl;
    cout << " 10.  Punteros y Clases" << endl;
    cout << " 11.  Array Estático de Punteros a Objetos" << endl;
    cout << " 12.  Intercambiar Punteros" << endl;
    cout << " 13.  Memoria Dinámica (new y delete)" << endl;
    cout << " 14.  Array Dinámico de Punteros a Objetos" << endl;
    cout << " 15.  Punteros Constantes" << endl;
    cout << " 16.  Punteros a Punteros" << endl;
    cout << " 17.  Punteros y Strings (C-style)" << endl;
    cout << " 18.  Ejercicio: Intercambiar Valores" << endl;
    cout << " 19.  Ejercicio: Calcular Suma" << endl;
    cout << " 20.  Ejercicio: Buscar en Array" << endl;
    cout << "  0.  Ejecutar TODOS los ejemplos" << endl;
    cout << " -1.  Salir" << endl;
    cout << "\nOpción: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:  ejemplo1_OperadoresFundamentales(); break;
            case 2:  ejemplo2_DeclaracionInicializacion(); break;
            case 3:  ejemplo3_ModificarValores(); break;
            case 4:  ejemplo4_MultiplesPunteros(); break;
            case 5:  ejemplo5_PunterosYArrays(); break;
            case 6:  ejemplo6_RecorrerArray(); break;
            case 7:  ejemplo7_AritmeticaPunteros(); break;
            case 8:  ejemplo8_PunterosYFunciones(); break;
            case 9:  ejemplo9_PasarArraysAFunciones(); break;
            case 10: ejemplo10_PunterosYClases(); break;
            case 11: ejemplo11_ArrayEstaticoPunteros(); break;
            case 12: ejemplo12_IntercambiarPunteros(); break;
            case 13: ejemplo13_MemoriaDinamica(); break;
            case 14: ejemplo14_ArrayDinamicoPunteros(); break;
            case 15: ejemplo15_PunterosConstantes(); break;
            case 16: ejemplo16_PunterosAPunteros(); break;
            case 17: ejemplo17_PunterosYStrings(); break;
            case 18: ejemplo18_IntercambiarValores(); break;
            case 19: ejemplo19_CalcularSuma(); break;
            case 20: ejemplo20_BuscarEnArray(); break;
            case 0:
                // Ejecutar todos los ejemplos
                ejemplo1_OperadoresFundamentales();
                ejemplo2_DeclaracionInicializacion();
                ejemplo3_ModificarValores();
                ejemplo4_MultiplesPunteros();
                ejemplo5_PunterosYArrays();
                ejemplo6_RecorrerArray();
                ejemplo7_AritmeticaPunteros();
                ejemplo8_PunterosYFunciones();
                ejemplo9_PasarArraysAFunciones();
                ejemplo10_PunterosYClases();
                ejemplo11_ArrayEstaticoPunteros();
                ejemplo12_IntercambiarPunteros();
                ejemplo13_MemoriaDinamica();
                ejemplo14_ArrayDinamicoPunteros();
                ejemplo15_PunterosConstantes();
                ejemplo16_PunterosAPunteros();
                ejemplo17_PunterosYStrings();
                ejemplo18_IntercambiarValores();
                ejemplo19_CalcularSuma();
                ejemplo20_BuscarEnArray();
                cout << "\n✓ Todos los ejemplos ejecutados correctamente." << endl;
                break;
            case -1:
                cout << "\n¡Hasta luego!" << endl;
                break;
            default:
                cout << "\nOpción inválida. Intente de nuevo." << endl;
        }

        if (opcion != -1 && opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }

    } while (opcion != -1);

    return 0;
}