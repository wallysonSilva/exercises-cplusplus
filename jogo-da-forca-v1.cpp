/* hangman game to play with the computer. The game has 3 levels. The gamer chooses the level and the word is sorted. OBS: the words be in portuguese */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <string.h>
using namespace std;
int jogabilidade(int TENTATIVAS, int VITORIA, int tamanho_palavra, string name_user, int nivel);
int main(){
    string name_user;
    int level, V;
    //primeira parte: interação inicial com o usuario
    cout<<"Ola, bem vindo ao jogo da forca!\nComo voce se chama?\n";
    getline (cin, name_user);
    //segunda parte: escolha da dificuldade pelo usuario
    cout<<'\n'<<name_user<<", escolha a dificuldade:\n[1] Facil, [2] Medio e [3] Dificil: ";
    cin>>level;
    switch(level){
		//NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL
        case 1:
            V=jogabilidade(10, 0, 5, name_user, 1);
			break;
        //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO
		case 2:
            V=jogabilidade(12, 0, 7, name_user, 2);
            break;
        //NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL
        case 3:
            V=jogabilidade(15, 0, 10, name_user, 3);
            break;
    }
	//Fim-> derrota ou vitória
    if((level==1 && V==5) || (level==2 && V==7) || (level==3 && V==10)){
         cout<<"\n\n\n\nParabens "<<name_user<<", vc venceu!\n\n";
         cout<<"..........WW....*..**..*\n";
         cout<<".........WWW.....*.*.*.*.\n";
         cout<<"WWW.....WW.W......*..**.*.\n";
         cout<<".WWWWWWWW..W..........*.*.**..**.\n";
         cout<<"...WW......WWWWWWWWW...*.*.*.*.*.\n";
         cout<<".....WW.WW....WWWW.......*.*.**.\n";
         cout<<"....WW.....WWW........**.**.*.\n";
         cout<<"...WW.WWWW..W.......*.*.*.**.\n";
         cout<<"..WWWWW..WW.W.......*.**.*.*.*\n";
         cout<<".WW........WWW.......*..**.*.\n";
         cout<<"............WW.......*.*.**.*\n";
         cout<<"................\n";
    }else{
        cout<<"\n\nQue pena "<<name_user<<",  nao foi dessa vez :(\n\n";
        cout<<"WWWWWW...WWWWWW..WWWWWW...WWWWWW....WWWWWW..WW....WW\n";
        cout<<"WW...W...WW......WW...W...WW....W...WW......WW....WW\n";
        cout<<"WWWWW....WWWWW...WWWWW....WW.....W..WWWWW...WW....WW\n";
        cout<<"WW.......WW......WW...W...WW....W...WW......WW....WW\n";
        cout<<"WW.......WWWWWW..WW....W..WWWWWW....WWWWWW....WWWW..\n";
    }
    system("pause");
	return 0;
}
////Terceira parte: função da jogabilidade
int jogabilidade(int TENTATIVAS, int VITORIA, int tamanho_palavra, string name_user, int nivel){
    int acerto;
    char letra;
    char vetor_auxiliar[tamanho_palavra];//ESTE VETOR AUXILIAR SERVE PARA IR REVELANDO AS LETRAS CONFORME O USUARIO AS ACERTA
    string palavra_de_acordo_com_nivel[1];//NESTE VETOR SERÁ GUARDADA A PALAVRA SORTEADA. E DEPOIS A TRANSFORMAREMOS EM UMA VARIAVEL DO TIPO CHAR
    //palavras do nível fácil
    string facil[5]={"peixe", "zebra", "porco", "tigre", "arara"};
    //palavras do nível médio
    string medio[5]={"sublime", "emotivo", "virtude", "bizarro", "exilado"};
    //palavras do nível difícil
	string dificil[5]={"corroborar", "detrimento", "sagacidade", "preliminar", "pertinente"};
    //ESTE CODIGO SORTEIA UM NUMERO ALEATORIO DE 0 A 4. ESSE NUMERO IRÁ NOS AUXILIAR NO SORTEIO DA PALAVRA
    srand((unsigned)time(0)); //para gerar números aleatórios reais.
    int maior = 4;
    int menor = 0;
    int aleatorio = rand()%(maior-menor+1)+menor;
    /////SORTEIO DA PALAVRA DE ACORDO COM A DIFICULDADE ESCOLHIDA PELO JOGADOR//////
    if(nivel==1){
        palavra_de_acordo_com_nivel[0]=facil[aleatorio];
    }
    else if(nivel==2){
        palavra_de_acordo_com_nivel[0]=medio[aleatorio];
    }
    else if(nivel==3){
        palavra_de_acordo_com_nivel[0]=dificil[aleatorio];
    }
    ///////ESTE CODIGO TRANSFORMA A PALAVRA SORTEADA, QUE É UMA VARIAVEL STRING, EM UMA VARIAVEL CHAR//////////////
    char strring_que_vira_cchar[tamanho_palavra];
    strncpy (strring_que_vira_cchar, palavra_de_acordo_com_nivel[0].c_str(), sizeof(strring_que_vira_cchar));
    //////////////////INICIO/////////////////////////////
    cout<<"\n\n"<<name_user<<", voce tem "<<TENTATIVAS<<" tentativas\n\n";
    for(int i=0; i<tamanho_palavra; i++){
        vetor_auxiliar[i]='_';
        cout<<vetor_auxiliar[i]<<" ";
    }
    cout<<"\n\n";
    while(TENTATIVAS-->0 && ( (tamanho_palavra==5 && VITORIA!=5) || (tamanho_palavra==7 && VITORIA!=7) || (tamanho_palavra==10 && VITORIA!=10) )){
        VITORIA=0;
        acerto=0;
		cout<<"Digite uma letra: ";
		cin>>letra;
		for(int i=0; i<tamanho_palavra; i++){
			if(letra==strring_que_vira_cchar[i]){
               vetor_auxiliar[i]=strring_que_vira_cchar[i];
               acerto++;
			}
		}
		if(acerto!=0){
               TENTATIVAS++;
        }
        cout<<"\n\n";
		for(int i=0; i<tamanho_palavra; i++){
			cout<<vetor_auxiliar[i]<<" ";
		}
		cout<<"\n\n";
		for(int i=0; i<tamanho_palavra; i++){
            if(vetor_auxiliar[i]==strring_que_vira_cchar[i]){
                VITORIA++;
            }
		}
        if ((tamanho_palavra==5 && VITORIA!=5) || (tamanho_palavra==7 && VITORIA!=7) || (tamanho_palavra==10 && VITORIA!=10))
          cout<<"\n"<<name_user<<", voce ainda tem "<<TENTATIVAS<<" tentativas\n\n";
    }
 return VITORIA;
 }
