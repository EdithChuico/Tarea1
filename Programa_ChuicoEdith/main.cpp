#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    string carrera, curso,docente,fechaentrega, integrantes, tema, uni;
    double num11, num22, num3, num4, Resultado1;
	float i, num1;
	int num2, opmenu, var, var1;
	integrantes = "Edith Chuico";
	carrera = "Ingenieria en Tecnologias de la Informacion y Comunicacion";
	docente = "Ingeniera Veronica Martinez";
	uni = "Universidad de las Fuerzas Armadas ESPE";
	cout << "====================================================================" << endl;
	cout << "                " << uni << endl;
	cout << "Carrera: " << carrera << endl;
	cout << "Estudiante: " << integrantes << endl;
	cout << "Docente: " << docente << endl;
	cout << "====================================================================" << endl;
	cout << "************ OPERADOR ALGEBRAICO Y CONVERSOR DE UNIDADES ************" << endl;
	do {
		cout << "Menu de acciones" << endl;
		cout << "1: Conversor de medidas de longitud" << endl;
		cout << "2: Salir" << endl;
		cout << "Ingrese la opcion que desee realizar: " << endl;
		cin >> opmenu;
		switch (opmenu) {
		case 1:
			cout << "---------------------------------------------" << endl;
			cout << "PARAMETROS DE CONVERSION DE LONGITUD" << endl;
			cout << "1: De centimetros a metros" << endl;
			cout << "2: De metros a centimetros" << endl;
			cout << "3: De centimentros a milimetros" << endl;
			cout << "4: De milimetros a centimetros" << endl;
			cout << "5: Elegir otra del menu principal" << endl;
			cout << "---------------------------------------------" << endl;
			cout << "Ingrese el tipo de conversion que desea realizar" << endl;
			cin >> var;
			while (var<=0 || var>=6) {
				cout << "Parametro no establecido, porfavor, intente nuevamente" << endl;
				cin >> var;
			}
			switch (var) {
			case 1:
				cout << "Ingrese el numero de centimetros que desee convertir" << endl;
				cin >> num1;
				while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
				cout << "La conversion de centimetros a metros de " << num1 << " es:" << num1/100 << " metros" << endl;
				cout << "Desea repetir la operacion" << endl;
				cout << "si: 1" << endl;
				cout << "no: 2" << endl;
				cin >> num2;
				while (num2<1 || num2>2) {
					cout << "Opcion incorrecta, intente nuevamente" << endl;
					cin >> num2;
				}
				if (num2==1) {
					do {
						cout << "Ingrese el numero de centimetros que desee convertir" << endl;
						cin >> num1;
						while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
						cout << "La conversion de centimetros a metros de " << num1 << " es:" << num1/100 << " metros" << endl;
						cout << "Desea repetir la operacion" << endl;
						cout << "si: 1" << endl;
						cout << "no: 2" << endl;
						cin >> num2;
						while (num2<1 || num2>2) {
							cout << "Opcion incorrecta, intente nuevamente" << endl;
							cin >> num2;
						}
					} while (num2==1);
				}
				break;
			case 2:
				cout << "Ingrese el numero de metros que desee convertir" << endl;
				cin >> num1;
				while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
				cout << "La conversion de metros a centimetros de " << num1 << " es:" << num1*100 << " centimetros" << endl;
				cout << "Desea repetir la operacion" << endl;
				cout << "si: 1" << endl;
				cout << "no: 2" << endl;
				cin >> num2;
				while (num2<1 || num2>2) {
					cout << "Opcion incorrecta, intente nuevamente" << endl;
					cin >> num2;
				}
				if (num2==1) {
					do {
						cout << "Ingrese el numero de metros que desee convertir" << endl;
						cin >> num1;
						while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
						cout << "La conversion de metros a centimetros de " << num1 << " es:" << num1*100 << " centimetros" << endl;
						cout << "Desea repetir la operacion" << endl;
						cout << "si: 1" << endl;
						cout << "no: 2" << endl;
						cin >> num2;
						while (num2<1 || num2>2) {
							cout << "Opcion incorrecta, intente nuevamente" << endl;
							cin >> num2;
						}
					} while (num2==1);
				}
				break;
			case 3:
				cout << "Ingrese el numero de centimetros que desee convertir" << endl;
				cin >> num1;
				while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
				cout << "La conversion de centimetros a milimetros de " << num1 << " es:" << num1*10 << " milimetros" << endl;
				cout << "Desea repetir la operacion" << endl;
				cout << "si: 1" << endl;
				cout << "no: 2" << endl;
				cin >> num2;
				while (num2<1 || num2>2) {
					cout << "Opcion incorrecta, intente nuevamente" << endl;
					cin >> num2;
				}
				if (num2==1) {
					do {
						cout << "Ingrese el numero de centimetros que desee convertir" << endl;
						cin >> num1;
						while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
						for (i=10;i<=10;i++) {
							cout << "La conversion de centimetros a milimetros de " << num1 << " es:" << num1*i << " milimetros" << endl;
						}
						cout << "Desea repetir la operacion" << endl;
						cout << "si: 1" << endl;
						cout << "no: 2" << endl;
						cin >> num2;
						while (num2<1 || num2>2) {
							cout << "Opcion incorrecta, intente nuevamente" << endl;
							cin >> num2;
						}
					} while (num2==1);
				}
				break;
			case 4:
				cout << "Ingrese el numero de milimetros que desee convertir" << endl;
				cin >> num1;
				while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
				cout << "La conversion de milimetros a centimetros de " << num1 << " es:" << num1/10 << " centimetros" << endl;
				cout << "Desea repetir la operacion" << endl;
				cout << "si: 1" << endl;
				cout << "no: 2" << endl;
				cin >> num2;

				while (num2<1 || num2>2) {
					cout << "Opcion incorrecta, intente nuevamente" << endl;
					cin >> num2;
				}
				if (num2==1) {
					do {
						cout << "Ingrese el numero de milimetros que desee convertir" << endl;
						cin >> num1;
						while (num1<=0){
                    cout<<"No se aceptan numeros negativos por favor, intente de nuevo"<<endl;
                    cin>>num1;
				}
						cout << "La conversion de milimetros a centimetros de " << num1 << " es:" << num1/1000 << " centimetros" << endl;
						cout << "¿Desea repetir la operacion?" << endl;
						cout << "si: 1" << endl;
						cout << "no: 2" << endl;
						cin >> num2;
						while (num2<1 || num2>2) {
							cout << "Opcion incorrecta, intente nuevamente" << endl;
							cin >> num2;
						}
					} while (num2==1);
				}
				break;
			case 5:
				break;
			default:
			    cout<<"ghvmhjbnk"<<endl;
			}
			break;
		case 2:
			cout << "Gracias por su tiempo" << endl;
			break;
		default:
			cout << "Opcion no valida, porfavor ingrese nuevamente el parametro (1-2) : " << endl;
		}
	} while (opmenu!=2);
	return 0;
}
