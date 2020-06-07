#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	const float ag = 9.8;
	float seg, vel;
	
	cout << "Informe o tempo de queda em segundos: ";
	cin >> seg;
	
	vel = ag * seg;
	cout << "A velocidade de queda é de: " << vel;
	
}
