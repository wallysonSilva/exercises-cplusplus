/* hangman game to play with the computer. The game has 3 levels.
The gamer chooses the level and the word is sorted.
OBS: the words be the portuguese */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){

    string user_name, letra;
    int level, vitoria=0, tentativas;

    //palavras do nível fácil
    string facil_aux[5]={" _ ", " _ ", " _ ", " _ ", " _ "};
    string facil_1[5]={"p", "e", "i", "x", "e"}, facil_2[5]={"z", "e", "b", "r", "a"}, facil_3[5]={"p", "o", "r", "c", "o"}, facil_4[5]={"t", "i", "g", "r", "e"}, facil_5[5]={"a", "r", "a", "r", "a"};

    //palavras do nível médio
    string medio_aux[7]={" _ ", " _ ", " _ ", " _ ", " _ ", " _ ", " _ "};
    string medio_1[7]={"s", "u", "b", "l", "i", "m", "e"}, medio_2[7]={"e", "m", "o", "t", "i", "v", "o"}, medio_3[7]={"v", "i", "r", "t", "u", "d", "e"}, medio_4[7]={"b", "i", "z", "a", "r", "r", "o"}, medio_5[7]={"e", "x", "i", "l", "a", "d", "o"};

	//palavras do nível difícil
	string dificil_aux[10]={" _ ", " _ ", " _ ", " _ ", " _ ", " _ ", " _ ", " _ ", " _ ", " _ "};
	string dificil_1[10]={"c", "o", "r", "r", "o", "b", "o", "r", "a", "r"}, dificil_2[10]={"d", "e", "t", "r", "i", "m", "e", "n", "t", "o"}, dificil_3[10]={"s", "a", "g", "a", "c", "i", "d", "a", "d", "e"}, dificil_4[10]={"p", "r", "e", "l", "i", "m", "i", "n", "a", "r"}, dificil_5[10]={"p", "e", "r", "t", "i", "n", "e", "n", "t", "e"};

    //primeira parte: interação com usuario
    cout<<"Ola, bem vindo ao jogo da forca!\nComo voce se chama?\n";
    getline (cin, user_name);

    //segunda parte: escolha da dificuldade
    cout<<'\n'<<user_name<<", escolha a dificuldade:\n[1] Facil, [2] Medio e [3] Dificil: ";
    cin>>level;

    //terceira parte: sorteio da palavra
    srand((unsigned)time(0)); //para gerar números aleatórios reais.
    int maior = 1;
    int menor = 1;
    int aleatorio = rand()%(maior-menor+1)+menor;

    switch(level){



		//NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL //NIVEL FACIL
		case 1:
            tentativas = 10;
			cout<<"\n\n"<<user_name<<", voce tem "<<tentativas<<" tentativas\n\n";
			for(int i=0; i<5; i++){
                cout<<facil_aux[i];
            }
            switch(aleatorio){
              case 1:
                while(tentativas-->0 && vitoria!=5){
					vitoria=0;
        //quarta parte: inicio do jogo
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<5; i++){
						if(letra==facil_1[i]){
							facil_aux[i]=facil_1[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<5; i++){
						cout<<facil_aux[i];
					}
					for(int y=0; y<5; y++){
                        if(facil_aux[y]==facil_1[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=5)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 2:
                while(tentativas-->0 && vitoria!=5){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<5; i++){
						if(letra==facil_2[i]){
							facil_aux[i]=facil_2[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<5; i++){
						cout<<facil_aux[i];
					}
					for(int y=0; y<5; y++){
                        if(facil_aux[y]==facil_2[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=5)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 3:
                while(tentativas-->0 && vitoria!=5){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<5; i++){
						if(letra==facil_3[i]){
							facil_aux[i]=facil_3[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<5; i++){
						cout<<facil_aux[i];
					}
					for(int y=0; y<5; y++){
                        if(facil_aux[y]==facil_3[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=5)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 4:
                while(tentativas-->0 && vitoria!=5){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<5; i++){
						if(letra==facil_4[i]){
							facil_aux[i]=facil_4[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<5; i++){
						cout<<facil_aux[i];
					}
					for(int y=0; y<5; y++){
                        if(facil_aux[y]==facil_4[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=5)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 5:
                while(tentativas-->0 && vitoria!=5){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<5; i++){
						if(letra==facil_5[i]){
							facil_aux[i]=facil_5[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<5; i++){
						cout<<facil_aux[i];
					}
					for(int y=0; y<5; y++){
                        if(facil_aux[y]==facil_5[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=5)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;
            }break;

		//NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO //NIVEL MEDIO
		case 2:
            tentativas = 12;
			cout<<"\n\n"<<user_name<<", voce tem "<<tentativas<<" tentativas\n\n";
			for(int i=0; i<7; i++){
                cout<<medio_aux[i];
            }
            switch(aleatorio){
              case 1:
                while(tentativas-->0 && vitoria!=7){
					vitoria=0;
        //quarta parte: inicio do jogo
					cout<<"\n\n\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<7; i++){
						if(letra==medio_1[i]){
							medio_aux[i]=medio_1[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<7; i++){
						cout<<medio_aux[i];
					}
					for(int y=0; y<7; y++){
                        if(medio_aux[y]==medio_1[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=7)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 2:
                while(tentativas-->0 && vitoria!=7){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<7; i++){
						if(letra==medio_2[i]){
							medio_aux[i]=medio_2[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<7; i++){
						cout<<medio_aux[i];
					}
					for(int y=0; y<7; y++){
                        if(medio_aux[y]==medio_2[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=7)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 3:
                while(tentativas-->0 && vitoria!=7){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<7; i++){
						if(letra==medio_3[i]){
							medio_aux[i]=medio_3[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<7; i++){
						cout<<medio_aux[i];
					}
					for(int y=0; y<7; y++){
                        if(medio_aux[y]==medio_3[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=7)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 4:
                while(tentativas-->0 && vitoria!=7){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<7; i++){
						if(letra==medio_4[i]){
							medio_aux[i]=medio_4[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<7; i++){
						cout<<medio_aux[i];
					}
					for(int y=0; y<7; y++){
                        if(medio_aux[y]==medio_4[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=7)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 5:
                while(tentativas-->0 && vitoria!=7){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<7; i++){
						if(letra==medio_5[i]){
							medio_aux[i]=medio_5[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<7; i++){
						cout<<medio_aux[i];
					}
					for(int y=0; y<7; y++){
                        if(medio_aux[y]==medio_5[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=7)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;
            }break;


		//NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL NIVEL DIFICIL
			case 3:
            tentativas = 15;
			cout<<"\n\n"<<user_name<<", voce tem "<<tentativas<<" tentativas\n\n";
			for(int i=0; i<10; i++){
                cout<<dificil_aux[i];
            }
            switch(aleatorio){
              case 1:
                while(tentativas-->0 && vitoria!=10){
					vitoria=0;
        //quarta parte: inicio do jogo
					cout<<"\n\n\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<10; i++){
						if(letra==dificil_1[i]){
							dificil_aux[i]=dificil_1[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<10; i++){
						cout<<dificil_aux[i];
					}
					for(int y=0; y<10; y++){
                        if(dificil_aux[y]==dificil_1[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=10)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 2:
                while(tentativas-->0 && vitoria!=10){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<10; i++){
						if(letra==dificil_2[i]){
							dificil_aux[i]=dificil_2[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<10; i++){
						cout<<dificil_aux[i];
					}
					for(int y=0; y<10; y++){
                        if(dificil_aux[y]==dificil_2[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=10)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 3:
                while(tentativas-->0 && vitoria!=10){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<10; i++){
						if(letra==dificil_3[i]){
							dificil_aux[i]=dificil_3[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<10; i++){
						cout<<dificil_aux[i];
					}
					for(int y=0; y<10; y++){
                        if(dificil_aux[y]==dificil_3[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=10)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 4:
                while(tentativas-->0 && vitoria!=10){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<10; i++){
						if(letra==dificil_4[i]){
							dificil_aux[i]=dificil_4[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<10; i++){
						cout<<dificil_aux[i];
					}
					for(int y=0; y<10; y++){
                        if(dificil_aux[y]==dificil_4[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=10)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;

              case 5:
                while(tentativas-->0 && vitoria!=10){
					vitoria=0;
					cout<<"\n\nDigite uma letra: ";
					cin>>letra;
					for(int i=0; i<10; i++){
						if(letra==dificil_5[i]){
							dificil_aux[i]=dificil_5[i];
						}
					}
					cout<<"\n";
					for(int i=0; i<10; i++){
						cout<<dificil_aux[i];
					}
					for(int y=0; y<10; y++){
                        if(dificil_aux[y]==dificil_5[y]){
                            vitoria++;
                        }
					}
                    if(vitoria!=10)
                       cout<<"\n\n"<<user_name<<", voce ainda tem "<<tentativas<<" tentativas\n\n";
                }break;
			}break;
    }

	//quinta parte: fim-> derrota ou vitória
    if(vitoria==5 || vitoria==7 || vitoria==10){
         cout<<"\n\n\n\nParabens "<<user_name<<", vc venceu!\n\n";
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
        cout<<"\n\nQue pena "<<user_name<<",  nao foi dessa vez :(\n\n";
        cout<<"WWWWWW...WWWWWW..WWWWWW...WWWWWW....WWWWWW..WW....WW\n";
        cout<<"WW...W...WW......WW...W...WW....W...WW......WW....WW\n";
        cout<<"WWWWW....WWWWW...WWWWW....WW.....W..WWWWW...WW....WW\n";
        cout<<"WW.......WW......WW...W...WW....W...WW......WW....WW\n";
        cout<<"WW.......WWWWWW..WW....W..WWWWWW....WWWWWW....WWWW..\n";
    }
    system("pause");
	return 0;
}
