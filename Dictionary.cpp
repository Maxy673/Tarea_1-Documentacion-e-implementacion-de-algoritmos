#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


template <typename Key, typename Value>
using DICTIONARY = unordered_map<Key, Value>; 

void demoDictionary() {
    cout << "--- DICTIONARY/HASH (Key-Value) ---" << endl;
    DICTIONARY<string, int> diccionario;

    // 1. INSERTAR/MODIFICAR (Insert, operador [])
    diccionario["Manzana"] = 5;
    diccionario.insert({"Banana", 3});
    diccionario["Naranja"] = 8;
    cout << "Insertados 3 pares: Manzana, Banana, Naranja" << endl;

    
    cout << "Stock de Manzana: " << diccionario.at("Manzana") << endl;

    
    if (diccionario.count("Banana")) {
        cout << "Banana está en el inventario. Valor: " << diccionario["Banana"] << endl;
    }

    
    diccionario.erase("Banana");
    cout << "Se elimino Banana. Nuevo tamanio: " << diccionario.size() << endl;

    
    cout << "Elementos restantes:" << endl;
    for (const auto& par : diccionario) {
        cout << "  Key: " << par.first << ", Value: " << par.second << endl;
    }

    
    cout << "¿Está vacio?: " << (diccionario.empty() ? "Si" : "No") << endl;
    diccionario.clear();
    cout << "Se ejecuto CLEAR. ¿Está vacio?: " << (diccionario.empty() ? "Si" : "No") << endl;
}

int main() {
    cout << "--- DICTIONARY/HASH (Key-Value) - Casos de Prueba ---" << endl;
    DICTIONARY<string, int> diccionario;

    // Caso de Prueba 1: Insercion y Modificacion
    cout << "Caso 1: Insercion y Modificacion (Key-Value)." << endl;
    diccionario["ClaveA"] = 10; // Insercion
    diccionario.insert({"ClaveB", 20}); // Otra insercion
    cout << "   Valor inicial de ClaveA: " << diccionario["ClaveA"] << endl; 
    diccionario["ClaveA"] = 15; // Modificar
    cout << "   Valor modificado de ClaveA: " << diccionario["ClaveA"] << endl; 
    cout << "----------------------------------------" << endl;

    // Caso de Prueba 2: Eliminacion y Verificacion de Existencia (count)
    cout << "Caso 2: Eliminacion y count()." << endl;
    diccionario["ClaveC"] = 30;
    cout << "   ClaveC existe (esperado 1): " << diccionario.count("ClaveC") << endl;
    diccionario.erase("ClaveC");
    cout << "   Se ejecuta Borrar(\"ClaveC\")." << endl;
    cout << "   ClaveC existe ahora (esperado 0): " << diccionario.count("ClaveC") << endl; 
    cout << "   Tamanio (esperado 2): " << diccionario.size() << endl; // Esperado: 2 (ClaveA y ClaveB)
    cout << "----------------------------------------" << endl;

    // Caso de Prueba 3: Caso Borde de Busqueda de Llave Inexistente (at/count)
    cout << "Caso 3: Busqueda de Clave Inexistente." << endl;
    string clave_inexistente = "ClaveZ";
    
    // a) Uso de count() (Método seguro)
    cout << "   Resultado count(\"ClaveZ\"): " << diccionario.count(clave_inexistente) << endl; 
    
    // b) Uso de at() (Prueba de robustez ante error)
    try {
        diccionario.at(clave_inexistente);
    } catch (const out_of_range& e) {
        cout << "   Intento de at(\"ClaveZ\") resulto en: Capturado (no existe la clave)." << endl;
    }
    
    return 0;
}