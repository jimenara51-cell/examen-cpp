#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Devuelve la suma de precio * cantidad de todos los productos
double calcularSubtotal(const vector<Producto>& productos) {
    double subtotal = 0;
    for (int i = 0; i < productos.size(); i++) {
        subtotal += productos[i].precio * productos[i].cantidad;
    }
    return subtotal;
}

// Devuelve el descuento que corresponde al subtotal
double calcularDescuento(double subtotal) {
    // si subtotal es mayor a 50000 aplica el descuento, si no es 0
    if (subtotal > 50000);
    return subtotal * 10 / 100;
    return 0;
}

// Devuelve el impuesto que corresponde a la base
double calcularImpuesto(double base) { // calcular impuesto con la base
    return base * 13 / 100;
}

int main() {
    vector<Producto> productos = {
        {"Teclado", 12500.0, 2},
        {"Mouse", 6500.0, 3},
        {"Cable HDMI", 3000.0, 4},
        {"Webcam", 18000.0, 1}
    };

    for (int i = 0; i < productos.size(); i++) {
        cout << productos[i].nombre << " x" << productos[i].cantidad
             << " = " << productos[i].precio * productos[i].cantidad << endl;
    }

    double subtotal = calcularSubtotal(productos);
    cout << "Subtotal: " << subtotal << endl;
    
    // descuento (se usa la funcion)
    double descuento = calcularDescuento(subtotal);
    
    // base (se resta)
    double base = subtotal - descuento;
    
    // impuesto (se usa la funcion)
    double impuesto = calcularImpuesto(base);
    
    // total (se suman)
    double total = base + impuesto;

    // Imprimir descuento, impuesto y total
    cout << "Descuento: $" << descuento << endl; // se aniadio el simbolo $
    cout << "Impuesto: $" << impuesto << endl;
    cout << "Total: $" << total << endl;

}
