#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int portaPremiada = rand() % 3 + 1;
    int portaEscolhida, portaVazia;
    char trocarPorta;

    printf("BEM VINDO AO JOGO MONTY HALL!\n");
    printf("Escolha uma porta de 1 a 3: ");
    scanf("%d", &portaEscolhida);


    for (int i = 1; i <= 3; ++i) {
        if (i != portaEscolhida && i != portaPremiada) {
            portaVazia = i;
            break;
        }
    }

    printf("\nFoi aberta a porta %d, ela esta vazia.\n", portaVazia);

    printf("\nVoce deseja trocar a porta escolhida?\nDigite:\nSIM = s\nNAO = n\n");
    fflush(stdout);
    scanf(" %c", &trocarPorta);

    if (trocarPorta == 's') {
        for (int i = 1; i <= 3; ++i) {
            if (i != portaEscolhida && i != portaVazia) {
                portaEscolhida = i;
                break;
            }
        }
        printf("\nNova porta escolhida: %d\n", portaEscolhida);
    } else {
        printf("\nVoce manteve sua escolha.\n");
    }

    if (portaEscolhida == portaPremiada) {
        printf("\nVoce ganhou!! A porta premiada era: %d\n", portaPremiada);
    } else {
        printf("\nVoce perdeu!\n");
    }

    return 0;
}
