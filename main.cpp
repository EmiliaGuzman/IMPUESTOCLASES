#include <iostream>
using namespace std;
class impuesto {
public:
// Funciones miembro
void capturar();
double calcularImpuesto(double);
void imprimir(double);
// Datos miembro
char nombre [25];
double tasa;
};
int main() {
// Definiendo variables y objetos
impuesto ISV;
double valor;
// Capturando valores
ISV.capturar();
cout << "Valor: ";
cin >> valor;
// Mostrando resultados
ISV.imprimir(valor);
///system("pause");
return 0;
}
void impuesto::capturar() {
cin.ignore();
cout << "Nombre de impuesto: ";
cin.getline(nombre, 25);
cout << "Tasa: ";
cin >> tasa;
}
void impuesto::imprimir(double v) {
cout << "Para un valor de : " << v << " y una tasa de: " << tasa
<< " el valor de " << nombre << " es: " << calcularImpuesto(v) << endl;
}
double impuesto::calcularImpuesto(double v) {
return v * tasa;
}
