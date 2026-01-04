#include <iostream>
#include <cstring>
using namespace std;
typedef char cadena[100];
void pregunta(cadena palabra);
void respuesta(cadena palabra) {
    if (strcmp(palabra,"si")==0) {
        cout<<"saoooooooooooooooooooooo"<<endl;
    }else {
        cout<<"porque mientes, di la verdad"<<endl;
        pregunta(palabra);
    }
}
void pregunta(cadena palabra) {
    cout<<"chica linda o traba feo"<<endl;
    cin.getline(palabra,100);
    respuesta(palabra);
}
int main() {
    cadena palabra;
    pregunta(palabra);
    return 0;
}