#include <stdio.h>
#include <cs50.h>

void draw(char simbols[]);
int solicitation(int positions[], int counter);
char atribuition(char simbols[],int position, int counter);
bool winner_verification(char simbols[]);

int main(void)
{
    char simbol[9];
    for (int i = 0; i < 9; i++)
    {
        simbol[i] = ' ';
    }

    int positions[9];
    char new_simbol[9];
    for (int j = 0; j < 9; j++)
    {
        int position = solicitation(positions, j);
        positions[j] = position;
        simbol[position] = atribuition(simbol,j,positions[j]);
        new_simbol[position] = simbol[position];
        draw(simbol);

        if (winner_verification(new_simbol))
        {
            printf("%s\n", "We have a winner");
            printf("%s\n","Congratulations!");

            return 0;
        }
    }

    printf("%s\n", "Draw!");
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

int solicitation(int positions[], int counter)
{
    int position;
    do
    {
         position = get_int("What position do you want?: ");

         for (int x = 0; x < counter; x++)
         {
            if (positions[x] == position)
            {
                printf("This positions has been used. Try another one!\n");
                position = -1;
            }
         }
    }
    while (position < 0 || position > 9);

    return position;
}

char atribuition(char simbols[], int counter,int position)
{

    if ((counter % 2 ) == 0)
    {
        return 'X';
    }
    else
    {
        return 'O';
    }
}

bool winner_verification(char simbols[])
{
    bool line = ((simbols[0] == simbols[1]) && (simbols[1] == simbols[2])) || ((simbols[3] == simbols[4]) && (simbols[4] == simbols[5])) || ((simbols[6] == simbols[7]) && (simbols[7] == simbols[8]));
    bool colune = ((simbols[0] == simbols[3]) && (simbols[3] == simbols[6])) || ((simbols[1] == simbols[4]) && (simbols[4] == simbols[7])) || ((simbols[2] == simbols[5]) && (simbols[5] == simbols[8]));
    bool diagonal = ((simbols[0] == simbols[4]) && (simbols[4] == simbols[8])) || ((simbols[2] == simbols[4]) && (simbols[4] == simbols[6]));

    if ((line) || (colune) || (diagonal))
    {
        return true;
    }

    return false;
}
