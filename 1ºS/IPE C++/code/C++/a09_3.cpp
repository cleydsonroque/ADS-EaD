#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int ind, qtd, aluno, acerto = 0;
	char gabarito[5], prova[5];
	
	cout<<"\n  Informe a resposta das quest�es para cria��o do gabarito: \n\n";
	
	for (ind=0;ind<=4;ind++) {
		cout<<"   "<<ind+1<<"� Quest�o: ";
		cin>>gabarito[ind];
	}
	cout<<"\n  informe o total de alunos: ";
	cin>>aluno;
	
	for (qtd=1;qtd<=aluno;qtd++) {
		
		cout<<"\n  Informe a resposta do "<<qtd<<"� aluno: \n\n";
	
		for (ind=0;ind<=4;ind++) {
			cout<<"   "<<ind+1<<"� Quest�o: ";
			cin>>prova[ind];
			
			if (prova[ind]==gabarito[ind]) {
				acerto++;
			}
		}		
		cout<<"\n  Este aluno teve "<<acerto<<" acertos. \n";
		acerto = 0;
	}	
}

