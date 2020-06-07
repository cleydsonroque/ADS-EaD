#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float m1, m2, m3;
		
	cout << "\n Informe as medidas do triangulo: \n";
	cout << "\n Primeira medida: ";
	cin >> m1;
	cout << "\n Segunda medida:  "; 
	cin >> m2;
	cout << "\n Terceira medida: ";
	cin >> m3;
	
	if (m1 < (m2 + m3) && m2 < (m1 + m3) && m3 < (m1 + m2)) {
		if (m1 == m2 && m2 == m3) {
			cout << "\n As medidas informadas correspndem a um triangulo equilátero.\n";
		} else {
			if (m1 == m2 || m2 == m3 || m1 == m3) {
				cout << "\n As medidas informadas correspondem a um triangulo isósceles.\n";
			} else {
				cout << "\n As medidas informadas correspondem a um triangulo escaleno.\n";
			}
		}
	} else {
		cout << "\n As medidas informadas não formam um triangulo.\n";
	}		
}
