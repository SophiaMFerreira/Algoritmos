#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_VOLTAS 10

/*Durante uma corrida de automóveis foram registrados os tempos obtidos em cada volta, para um determinado piloto.
Codificar uma função capaz de calcular o melhor tempo.*/

float calcularMelhorTempo(float temposObtidos[NUM_VOLTAS]);

main() {
    setlocale(LC_ALL, "");
    float temposObtidos[NUM_VOLTAS] = {31.2, 28.1, 11.0, 25.7, 90.3, 9.9, 42.1, 97.5, 100.2, 62.3};
    float resultado = calcularMelhorTempo(temposObtidos);

    printf("Melhor tempo obtido pelo piloto: %.2f segundos.\n", resultado);
}

float calcularMelhorTempo(float temposObtidos[NUM_VOLTAS])
{
    float melhorTempo = temposObtidos[0];

    for(int i = 1; i < NUM_VOLTAS; i++)
    {
        if(temposObtidos[i] < melhorTempo)
        {
            melhorTempo = temposObtidos[i];
        }
    }
    return melhorTempo;
}
