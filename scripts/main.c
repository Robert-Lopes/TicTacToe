#include <stdio.h>
#include <cs50.h>

void draw(char simbols[]);
int solicitation(void);
char atribuition(char simbols[],int position);

int main(void)
{
    char simbol[9];
    for (int i = 0; i < 9; i++)
    {
        simbol[i] = '?';
    }

    for (int j = 0; j < 9; j++)
    {
        char new_simbol = atribuition(simbol,solicitation());
        draw(simbol);
    }

    return 0;
}


void draw(char simbols[])
{
    int counter = 0;
    for (int i = 0; i < 5; i++)
    {
        if ((i % 2) == 0)
        {
            printf("  %c | %c | %c\n ",simbols[counter],simbols[counter+1],simbols[counter+2]);
            counter += 3;
        }
        else
        {
            printf("___|___|___\n");
        }
    }
}

int solicitation(void)
{
    int position;
    do
    {
         position = get_int("What position do you want?: ");
    }
    while (position < 0 || position > 9);

    return position;
}

char atribuition(char simbols[],int position)
{
    simbols[position] = 'X';

    return simbols;
}