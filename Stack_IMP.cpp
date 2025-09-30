#include <iostream>
#include <stack>
#include <string>

using namespace std;


template <typename T>
using STACK = stack<T>; 

void demoStack() {
    cout << "--- STACK (LIFO: Last In, First Out) ---" << endl;
    STACK<string> pila;

  
    pila.push("Tercero (Top)");
    pila.push("Segundo");
    pila.push("Primero (Bottom)");
    cout << "Insertados: Primero, Segundo, Tercero" << endl;

   
    cout << "Elemento superior (top): " << pila.top() << endl;

  
    cout << "Tamaño inicial: " << pila.size() << endl;

    
    pila.pop();
    cout << "Se ejecutó POP. Nuevo elemento superior: " << pila.top() << endl;

    
    cout << "¿Está vacía?: " << (pila.empty() ? "Sí" : "No") << endl;

    pila.pop();
    pila.pop();
    cout << "¿Está vacía después de 3 pops?: " << (pila.empty() ? "Sí" : "No") << endl;
}

int main() {
    cout << "--- STACK (LIFO) - Casos de Prueba ---" << endl;

    // Caso de Prueba 1: Operación LIFO Estándar
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

    // Caso de Prueba 2: Verificación de Estado Vacío
    STACK<string> pila2;
    cout << "Caso 2: Stack inicial vacío." << endl;
    cout << "   Resultado empty() inicial: " << (pila2.empty() ? "Vacio (Correcto)" : "No Vacio") << endl; // Esperado: Vacio
    pila2.push("ItemA");
    cout << "   Push(\"ItemA\"). Resultado empty(): " << (pila2.empty() ? "Vacio" : "No Vacio (Correcto)") << endl; // Esperado: No Vacio
    cout << "----------------------------------------" << endl;

    // Caso de Prueba 3: Depleción y Actualización de Tamaño
    STACK<char> pila3;
    pila3.push('X');
    pila3.push('Y');
    cout << "Caso 3: Depleción de Stack." << endl;
    cout << "   Tamaño inicial (esperado 2): " << pila3.size() << endl; // Esperado: 2
    pila3.pop(); // Queda X
    cout << "   Pop(). Tamaño (esperado 1): " << pila3.size() << endl; // Esperado: 1
    pila3.pop(); // Queda vacío
    cout << "   Pop(). Tamaño final (esperado 0): " << pila3.size() << endl; // Esperado: 0
    cout << "   Resultado empty() final: " << (pila3.empty() ? "Vacio (Correcto)" : "No Vacio") << endl;
    
    return 0;
}