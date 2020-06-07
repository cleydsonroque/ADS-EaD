#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int ind, qtd, aluno, acerto = 0;
	char gabarito[5], prova[5];
	
	cout<<"\n  Informe a resposta das questões para criação do gabarito: \n\n";
	
	for (ind=0;ind<=4;ind++) {
		cout<<"   "<<ind+1<<"ª Questão: ";
		cin>>gabarito[ind];
	}
	cout<<"\n  informe o total de alunos: ";
	cin>>aluno;
	
	for (qtd=1;qtd<=aluno;qtd++) {
		
		cout<<"\n  Informe a resposta do "<<qtd<<"º aluno: \n\n";
	
		for (ind=0;ind<=4;ind++) {
			cout<<"   "<<ind+1<<"ª Questão: ";
			cin>>prova[ind];
			
			if (prova[ind]==gabarito[ind]) {
				acerto++;
			}
		}		
		cout<<"\n  Este aluno teve "<<acerto<<" acertos. \n";
		acerto = 0;
	}	
}

