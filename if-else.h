//Escreva um programa que leia o nome e 3 notas de um aluno e a
//média das notas dos exercícios realizados por ele.
//Calcular a média de aproveitamento, usando a
//fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
//A partir da média, informar o conceito.

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	  float n1, n2, n3, media, mediaAprovei;
	  string nome;
	  cout<<"Qual o nome do aluno?\n";
	  cin >> nome;

	  cout<<"Digite a nota 1\n"; cin>>n1;
	  cout<<"Digite a nota 2\n"; cin>>n2;
	  cout<<"Digite a nota 3\n"; cin>>n3;

	  media = (n1+n1+n3)/3;

	  mediaAprovei = (n1 + n2*2 + n3*3 + media)/7;

	  if(mediaAprovei >= 9){
		cout<<"\nA\n";
	  }
	  else if(mediaAprovei >= 7.5 && mediaAprovei < 9){
		cout<<"\nB\n";
	  }
	  else if(mediaAprovei >= 6 && mediaAprovei < 7.5){
		cout<<"\nC\n";
	  }
	  else if(mediaAprovei >= 4 && mediaAprovei < 6){
		cout<<"\nD\n";
	  }
	  else{
		cout<<"\nE\n";
	  }
return 0;
} 