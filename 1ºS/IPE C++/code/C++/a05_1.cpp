#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int days, years;
	
	cout << "\n Informe o total de dias:\n ";
	cin >> days;
	years = days / 360;
	
		if (years >= 18) {
			cout << "\n Você tem " << years << " anos e já é maior de idade \n";
		} else {
			cout << "\n Você tem " << years << " anos e não é maior de idade \n";
		}
}
