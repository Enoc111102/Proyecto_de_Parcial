// ProgramaMenu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iomanip>
#include <cmath>
#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include<vector>
#include<array>

using namespace std;
void pausa();

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Conversiones" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Binario-Decimal" << endl;
		cout << "\t2 .- Decimal-Binario" << endl;
		cout << "\t3 .- Binario-Octal" << endl;
		cout << "\t4 .- Binario-Hexadecimal" << endl;
		cout << "\t5 .- Texto-Binario" << endl;
		cout << "\t6 .- Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':

			system("cls");
			cout << "Has elegido Binario-Decimal. \n";
			{
				int exp, digito;
				double binario, decimal;
				cout << "Introduce el numero binario: ";
				cin >> binario;
				exp = 0;
				decimal = 0;
				while (((int)(binario / 10)) != 0)
				{
					digito = (int)binario % 10;
					decimal = decimal + digito * pow(2.0, exp);
					exp++;
					binario = (int)(binario / 10);
				}
				decimal = decimal + binario * pow(2.0, exp);
				cout << endl << "El Decimal es: " << decimal << endl;
				getwchar();

			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Decimal-Binario. \n";
			{
				int numero, exp, digito;
				double binario;
				cout << "Introduce un numero decimal: ";
				cin >> numero;
				exp = 0;
				binario = 0;
				while (numero / 2 != 0)
				{
					digito = numero % 2;
					binario = binario + digito * pow(10.0, exp);
					exp++;
					numero = numero / 2;
				}
				binario = binario + numero * pow(10.0, exp);
				cout << fixed << setprecision(0);
				cout << "binario: " << binario << endl;
				getwchar();
			}
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Binario-Octal. \n";
			{

				int cgrup; string resultado, triada;
				vector <string> binario;
				vector <string> resul;

				cout << "Has elegido la opcion de Binario a Octal." << endl;
				cout << "Recuerda que el sistema octal se basa en grupos de 3 numeros binario, el codigo siempre debe leerse de derecha a izquierda." << endl;
				cout << "Recuerda que si tu cogigo no completa su grupo de 3, no se borrara el valor del grupo, si no que se agregaran ceros a ese grupo." << endl;
				cout << "¿Cuantos grupos de 3 digitos tiene tu codigo?: ";
				cin >> cgrup;
				{

					for (int i = 0; i < cgrup; i++)
					{
						cout << i + 1 << ": " << "Ingresa 3 digitos de tu codigo: ";
						cin >> triada;
						binario.push_back(triada);
						if (binario[i] == "000")
						{
							resul.push_back("0");
						}
						if (binario[i] == "001")
						{
							resul.push_back("1");
						}
						if (binario[i] == "010")
						{
							resul.push_back("2");
						}
						if (binario[i] == "011")
						{
							resul.push_back("3");
						}
						if (binario[i] == "100")
						{
							resul.push_back("4");
						}
						if (binario[i] == "101")
						{
							resul.push_back("5");
						}
						if (binario[i] == "110")
						{
							resul.push_back("6");
						}
						if (binario[i] == "111")
						{
							resul.push_back("7");
						}
						resultado = resultado + resul[i];
					}
					cout << " El codigo Octal es: " << resultado << endl;

					getwchar();
				}
			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Binario-Hexadecimal. \n";
			{

				int par; string resultado, cantgrup;
				vector <string> binario;
				vector <string> mundec;

				cout << "Has elegido la aopcion de Binario a Deciaml." << endl;
				cout << "Recuerda que el sistema hexadeciaml funciona con grupos de 4 digitos binario, y siempre se leen de derecha a izquierda." << endl;
				cout << "Recuerda que tu grupo binario debe cumplir con los 4 elementos." << endl;
				cout << "Cuantos grupos de 4 digitos tiene tu codigo?: ";
				cin >> par;

				{
					{
						{
							for (int i = 0; i < par; i++)
							{
								cout << i + 1 << ": " << "Ingresa 4 digitos de tu codigo: ";
								cin >> cantgrup;
								binario.push_back(cantgrup);
								if (binario[i] == "0000") {
									mundec.push_back("0");
								}
								if (binario[i] == "0001") {
									mundec.push_back("1");
								}
								if (binario[i] == "0010") {
									mundec.push_back("2");
								}
								if (binario[i] == "0011") {
									mundec.push_back("3");
								}
								if (binario[i] == "0100") {
									mundec.push_back("4");
								}
								if (binario[i] == "0101") {
									mundec.push_back("5");
								}
								if (binario[i] == "0110") {
									mundec.push_back("6");
								}
								if (binario[i] == "0111") {
									mundec.push_back("7");
								}
								if (binario[i] == "1000") {
									mundec.push_back("8");
								}
								if (binario[i] == "1001") {
									mundec.push_back("9");
								}
								if (binario[i] == "1010") {
									mundec.push_back("A");
								}
								if (binario[i] == "1011") {
									mundec.push_back("B");
								}
								if (binario[i] == "1100") {
									mundec.push_back("C");
								}
								if (binario[i] == "1101") {
									mundec.push_back("D");
								}
								if (binario[i] == "1110") {
									mundec.push_back("E");
								}
								if (binario[i] == "1111") {
									mundec.push_back("F");
								}
								resultado = resultado + mundec[i];
							}
							cout << " El codigo Hexadecimal es: " << resultado << endl;
						}
					}
					getwchar();

				}
			}
			pausa();
			break;
		case '5':
			system("cls");
			cout << "Has elejido Texto-Binario. \n";
			{
				char texto[300];
				int contador = 0, num, resul, cerosunos[20], i;
				int clrscr();
				cout << ("Introduzca un texto para convertirlo a codigo binario, solo puedes ingresar una palabra a la vez, no puede poner espacios:\n");
				cin >> (texto);
				while (contador < strlen(texto))
				{
					i = 1;
					num = texto[contador];
					while (num > 0)
					{
						resul = num % 2;
						if (resul == 0)
						{
							cerosunos[i] = 0;
							i = i + 1;
						}
						else
						{
							cerosunos[i] = 1;
							i = i + 1;
							num = num - 1;
						}
						num = num / 2;
					}
					i = i - 1;
					while (i > 0)
					{
						printf("%i", cerosunos[i]);
						i = i - 1;
					}
					cout << " ";
					contador = contador + 1;
				}
				getwchar();

			}
			pausa();
			break;
		case '6':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa dos veces la tecla " << "Enter" << " para continuar... ";
	getwchar();
	getwchar();
}