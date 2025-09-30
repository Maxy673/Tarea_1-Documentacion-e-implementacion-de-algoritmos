#include <iostream>
#include <queue>
#include <string>



using namespace std;
template <typename T>
using QUEUE = queue<T>;



int main() {
    cout << "--- QUEUE (FIFO) - Casos de Prueba ---" << std::endl;
    
    // Caso de Prueba 1: Operacion FIFO Estandar
    QUEUE<int> cola1;
    cola1.push(100); // Frontal
    cola1.push(200);
    cola1.push(300); // Posterior
    cout << "Caso 1: Push(100, 200, 300)." << endl;

    cout << "   Elemento frontal (esperado 100): " << cola1.front() << endl; 

    cola1.pop(); // Elimina el 100

    cout << "   Pop(). Nuevo frontal (esperado 200): " << cola1.front() << endl;

    cout << "----------------------------------------" << endl;

    // Caso de Prueba 2: Comprobacion de Ambos Extremos (front y back)
    QUEUE<string> cola2;
    cola2.push("A"); // Frontal
    cola2.push("B");
    cola2.push("C"); // Posterior
    cout << "Caso 2: Comprobacion de front/back." << endl;

    cout << "   Frontal (esperado A): " << cola2.front() << endl;

    cout << "   Posterior (esperado C): " << cola2.back() << endl;
    cola2.pop(); // Elimina A
    cola2.push("D"); // Nuevo Posterior
    cout << "   Pop() y Push(\"D\"). Nuevo frontal (esperado B): " << cola2.front() << endl;
    cout << "   Nuevo posterior (esperado D): " << cola2.back() << endl;
    cout << "----------------------------------------" << endl;
    
    // Caso de Prueba 3: Deplecion Total de la Cola
    QUEUE<double> cola3;
    cola3.push(1.1);
    cola3.push(2.2);
    cout << "Caso 3: Deplecion total y size()." << endl;
    cout << "   Tamanio inicial (esperado 2): " << cola3.size() <<endl;
    cola3.pop();
    cola3.pop();
    cout << "   Dos pops. Tamanio final (esperado 0): " << cola3.size() << endl;
    cout << "   Resultado empty() final: " << (cola3.empty() ? "Vacio (Correcto)" : "No Vacio") << endl;
    
    return 0;
}


