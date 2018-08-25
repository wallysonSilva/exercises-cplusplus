/* Make the program that has the following output,
asking the user for the maximum number (in example, 9).
This number should always be odd.

1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5 */
#include <iostream>
using namespace std;

int main (){
    int entrada, q_linhas; //quantidade de linhas
    int espacos, linha_atual(0), imprima(0);

    cout <<"Digite o valor maximo que voce deseja\nlembre-se que ele deve ser impar\n";
    cin >> entrada;
    q_linhas = ((entrada-1)/2)+1;
    while(linha_atual<q_linhas){

        if(linha_atual>0){
            espacos = linha_atual*2;

            while(espacos--!=0){
                cout<<" ";
            }
             if(linha_atual>9){
                espacos = linha_atual-9;

                while(espacos--!=0){
                    cout<<" ";
                }
             }
        }
        while(imprima<entrada){
            imprima++;
            cout << imprima <<" ";
        }
        linha_atual++;
        cout <<"\n";
        imprima=linha_atual;
        entrada--;
    }
    cout <<"\n" << linha_atual;

return 0;
}
