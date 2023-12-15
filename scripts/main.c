// Inclusão de bibliotecas
#include <stdio.h>

// Prótipo das funções
void atribuition(char *value);
void draw(char *value);
void teste(char *value);

// Função principal
int main(void)
{
    char simbol[9];
    atribuition(&simbol[0]);
    draw(&simbol[0]);

    return 0;
}

/*
* Função atribuição:
* Esta função faz com que o array "simbol" receba um caracter númerico correspondente
* a sua posição no desenho do jogo.
* Exemplo: A primeira linha do desenho terá os simbolos 0, 1 e 2 do array "simbol", que
* correspondem a 1°, 2° e 3° posição do desenho.
*/
void atribuition(char *value)
{
    char numbers[] = {'0','1','2','3','4','5','6','7','8'};
    for (int x = 0; x < 9; x++)
    {
        *(value+x) = numbers[x];
    }
}


/*
* Função draw:
* O Objetivo dessa função é unicamente imprimir o desenho do jogo, bem como as posições
* e os simbolos escolhidos pelos usuários.
*/
void draw(char *value)
{
    int counter = 0;
    for (int m = 0; m < 5; m++)
    {
        if (m % 2 == 0)
        {
            printf(" %c | %c | %c\n", *(value+counter), *(value+(counter+1)), *(value+(counter+2)));
            counter += 3;
            continue;
        }
        printf("%s\n", "___|___|___");
    }
    printf("%s\n", "   |   |   ");
}

void teste(char *value)
{
    for (int q = 0; q < 9; q++)
    {
        printf("%c\n",*(value+q));
    }
}