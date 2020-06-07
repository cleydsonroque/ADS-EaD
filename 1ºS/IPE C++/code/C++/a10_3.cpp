#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int m, l, c, m1[2][2], m2[2][2], e;
	
	for (m=1;m<=2;m++) {
		cout<<"\n  Insira os dados da matriz "<<m<<". \n\n";
		for (l=0;l<=1;l++) {
			for (c=0;c<=1;c++) {
				cout<<"   Digite o elemento posicionado na linha "<<l+1<<", coluna "<<c+1<<": ";
				if (m==1) {
					cin>>m1[l][c];
				} else {
					cin>>m2[l][c];
				}
			}
		}	
	}
	for (l=0;l<=1;l++) {
		for (c=0;c<=1;c++) {
			if (l==c) {
				e=m1[l][c];
				m1[l][c]=m2[l][c];
				m2[l][c]=e;
			}
		}
	}		
	for (m=1;m<=2;m++) {
		cout<<"\n  A diagonal da matriz "<<m<<" é formada pelos elementos: \n\n";
		for (l=0;l<=1;l++) {
			for (c=0;c<=1;c++) {
				if (l==c) {
					if (m==1){
						cout<<"   - "<<m1[l][c]<<" - posicionado na linha "<<l+1<<", coluna "<<c+1<<".\n";
					} else {
						cout<<"   - "<<m2[l][c]<<" - posicionado na linha "<<l+1<<", coluna "<<c+1<<".\n";
					}
				}
			}
		}		
	}
}

