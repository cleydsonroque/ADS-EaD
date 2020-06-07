#include <iostream>
using namespace std;

int main() {
	
	float vlreal, vlrcot, vlrcon;

	cout << "Informe o valor em reais: ";
	cin >> vlreal;
	
	cout << "Informe a cotacao do dolar: ";
	cin >> vlrcot;
	
	vlrcon = vlreal / vlrcot;
		
	cout << "Com esta cotacao, recebera U$ " << vlrcon;
	
	return 0;

}
