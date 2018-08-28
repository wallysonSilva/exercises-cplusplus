/* hangman game to play with the computer. The game has 3 levels.
The gamer chooses the level and the word is sorted.
OBS: the words be the portuguese */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;
int jogabilidade(int TENTATIVAS, int VITORIA, int tamanho_palavra, string name_user);
int main(){
    string name_user;
    int level, V;
    //primeira parte: interação com usuario
    cout<<"Ola, bem vindo ao jogo da forca!\nComo voce se chama?\n";
    getline (cin, name_user);
    //segunda parte: escolha da dificuldade
    cout<<'\n'<<name_user<<", escolha a dificuldade:\n[1] Facil, [2] Medio e [3] Dificil: ";
    cin>>level;

    switch(level){
		//NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL
        case 1:
            V=jogabilidade(10, 0, 5, name_user);
			break;
        //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO
		case 2:
            V=jogabilidade(12, 0, 7, name_user);
            break;
        //NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL
        case 3:
            V=jogabilidade(15, 0, 10, name_user);
            break;
    }
	//quinta parte: fim-> derrota ou vitória
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
int jogabilidade(int TENTATIVAS, int VITORIA, int tamanho_palavra, string name_user){
    int acerto;
    string letra;
    //palavras do nível fácil
    string facil_1[5]={"p", "e", "i", "x", "e"}, facil_2[5]={"z", "e", "b", "r", "a"}, facil_3[5]={"p", "o", "r", "c", "o"}, facil_4[5]={"t", "i", "g", "r", "e"}, facil_5[5]={"a", "r", "a", "r", "a"};
    //palavras do nível médio
    string medio_1[7]={"s", "u", "b", "l", "i", "m", "e"}, medio_2[7]={"e", "m", "o", "t", "i", "v", "o"}, medio_3[7]={"v", "i", "r", "t", "u", "d", "e"}, medio_4[7]={"b", "i", "z", "a", "r", "r", "o"}, medio_5[7]={"e", "x", "i", "l", "a", "d", "o"};
    //palavras do nível difícil
	string dificil_1[10]={"c", "o", "r", "r", "o", "b", "o", "r", "a", "r"}, dificil_2[10]={"d", "e", "t", "r", "i", "m", "e", "n", "t", "o"}, dificil_3[10]={"s", "a", "g", "a", "c", "i", "d", "a", "d", "e"}, dificil_4[10]={"p", "r", "e", "l", "i", "m", "i", "n", "a", "r"}, dificil_5[10]={"p", "e", "r", "t", "i", "n", "e", "n", "t", "e"};
    //terceira parte: sorteio da palavra
    //ESTE CODIGO SORTEIA UM NUMERO ALEATORIO DE 1 A 5. ESSE NUMERO IRÁ NOS AUXILIAR NO SORTEIO DA PALAVRA
    srand((unsigned)time(0)); //para gerar números aleatórios reais.
    int maior = 5;
    int menor = 1;
    int aleatorio = rand()%(maior-menor+1)+menor;
    ////////////
    string vetor_auxiliar[tamanho_palavra]=" _ ";
    string palavra_selecionada[tamanho_palavra];
    //SORTEIO DA PALAVRA DE ACORDO COM A DIFICULDADE
    if(tamanho_palavra==5){
        if(aleatorio==1){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=facil_1[i];
            }
        }
        if(aleatorio==2){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=facil_2[i];
            }
        }
        if(aleatorio==3){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=facil_3[i];
            }
        }
        if(aleatorio==4){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=facil_4[i];
            }
        }
        if(aleatorio==5){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=facil_5[i];
            }
        }
    }
    if(tamanho_palavra==7){
        if(aleatorio==1){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=medio_1[i];
            }
        }
        if(aleatorio==2){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=medio_2[i];
            }
        }
        if(aleatorio==3){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=medio_3[i];
            }
        }
        if(aleatorio==4){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=medio_4[i];
            }
        }
        if(aleatorio==5){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=medio_5[i];
            }
        }
    }
    if(tamanho_palavra==10){
        if(aleatorio==1){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=dificil_1[i];
            }
        }
        if(aleatorio==2){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=dificil_2[i];
            }
        }
        if(aleatorio==3){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=dificil_3[i];
            }
        }
        if(aleatorio==4){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=dificil_4[i];
            }
        }
        if(aleatorio==5){
            for(int i=0; i<tamanho_palavra; i++){
                   palavra_selecionada[i]=dificil_5[i];
            }
        }
    }
    //////////////////INICIO/////////////////////////////
    cout<<"\n\n"<<name_user<<", voce tem "<<TENTATIVAS<<" tentativas\n\n";
    for(int i=0; i<tamanho_palavra; i++){
        cout<<vetor_auxiliar[i];
    }
    cout<<"\n\n";
    while(TENTATIVAS-->0 && ( (tamanho_palavra==5 && VITORIA!=5) || (tamanho_palavra==7 && VITORIA!=7) || (tamanho_palavra==10 && VITORIA!=10) )){
        VITORIA=0;
        acerto=0;
        //quarta parte: inicio do jogo
		cout<<"Digite uma letra: ";
		cin>>letra;
		for(int i=0; i<tamanho_palavra; i++){
			if(letra==palavra_selecionada[i]){
               vetor_auxiliar[i]=palavra_selecionada[i];
               acerto++;
			}
		}
		if(acerto!=0){
               TENTATIVAS++;
        }
        cout<<"\n\n";
		for(int i=0; i<tamanho_palavra; i++){
			cout<<vetor_auxiliar[i];
		}
		cout<<"\n\n";
		for(int i=0; i<tamanho_palavra; i++){
            if(vetor_auxiliar[i]==palavra_selecionada[i]){
                VITORIA++;
            }
		}
        if ((tamanho_palavra==5 && VITORIA!=5) || (tamanho_palavra==7 && VITORIA!=7) || (tamanho_palavra==10 && VITORIA!=10))
          cout<<"\n"<<name_user<<", voce ainda tem "<<TENTATIVAS<<" tentativas\n\n";
    }
 return VITORIA;
 }
