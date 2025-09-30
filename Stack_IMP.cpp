#include <iostream>
#include <stack>
#include <string>

using namespace std;


template <typename T>
using STACK = stack<T>; 


int main() {
    cout << "--- STACK (LIFO) - Casos de Prueba ---" << endl;

    // Caso de Prueba 1: Operacion LIFO Estandar
    STACK<int> pila1;
    pila1.push(10);
    pila1.push(20);
    pila1.push(30); // 30 es el Top
    cout << "Caso 1: Push(10, 20, 30). Top esperado: 30" << endl;
    cout << "   Resultado top(): " << pila1.top() << endl; // Esperado: 30
    pila1.pop(); // Elimina 30
    cout << "   Pop(). Nuevo top esperado: 20" << endl;
    cout << "   Resultado top() después de pop: " << pila1.top() << endl; // Esperado: 20
    cout << "----------------------------------------" << endl;

    // Caso de Prueba 2: Verificacion de Estado Vacio
    STACK<string> pila2;
    cout << "Caso 2: Stack inicial vacio." << endl;
    cout << "   Resultado empty() inicial: " << (pila2.empty() ? "Vacio (Correcto)" : "No Vacio") << endl; // Esperado: Vacio
    pila2.push("ItemA");
    cout << "   Push(\"ItemA\"). Resultado empty(): " << (pila2.empty() ? "Vacio" : "No Vacio (Correcto)") << endl; // Esperado: No Vacio
    cout << "----------------------------------------" << endl;

    // Caso de Prueba 3: Deplecion y Actualizacion de Tamanio
    STACK<char> pila3;
    pila3.push('X');
    pila3.push('Y');
    cout << "Caso 3: Deplecion de Stack." << endl;
    cout << "   Tamanio inicial (esperado 2): " << pila3.size() << endl; // Esperado: 2
    pila3.pop(); // Queda X
    cout << "   Pop(). Tamanio (esperado 1): " << pila3.size() << endl; // Esperado: 1
    pila3.pop(); // Queda vacio
    cout << "   Pop(). Tamanio final (esperado 0): " << pila3.size() << endl; // Esperado: 0
    cout << "   Resultado empty() final: " << (pila3.empty() ? "Vacio (Correcto)" : "No Vacio") << endl;
    
    return 0;
}