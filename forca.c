#include <stdio.h>
#include <string.h>

int main() {

    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 1;

    char chutes[26];
    int tentativas = 0;

    // primeiro executa o bloco e depois ve condicao
    do {
        // comecar o jogo

        for(int i = 0; i < strlen(palavrasecreta); i++) {

            int achou = 0;

            for(int j = 0; i < tentativas; j++){
                if(chutes[j] == palavrasecreta[i]){
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }

            //printf("_ ");    
        }
        printf("\n");

        char chute;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas ++;


    } while (!acertou && !enforcou);
    


    
}