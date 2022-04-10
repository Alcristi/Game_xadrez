#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct 
{
    char nome[30];
    int nJogadas;
}Jogador;


void startTabuleiro(char **tab)
{
    int i;
    int j;
    char *linha = "abcdefgh";
    char *coluna = "12345678";

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            
            if (j == 0 && i >= 1)
            {
                tab[i][j] = coluna[i - 1];
            }
            else
            {
                if(i == 0 && j >= 1)
                    tab[i][j] = linha[j - 1];
                else if (i == 1 || i == 2)
                {
                    if (i == 1)
                        tab[i][j] = 'P';
                    else
                    {
                        if (j == 1 || j == 8)
                            tab[i][j] = 'T';
                        else if (j == 1 || j == 6)
                            tab[i][j] = 'C';
                        else if (j == 2 || j == 5)
                            tab[i][j] = 'B';
                        else if (j == 3)
                            tab[i][j] = 'D';
                        else
                            tab[i][j] = 'R';

                    }
                }
                else if(i == 8 || i == 7)
                {
                    if (i == 7)
                        tab[i][j] = 'p';
                    else
                    {
                        if (j == 1 || j == 8)
                            tab[i][j] = 't';
                        else if (j == 1 || j == 6)
                            tab[i][j] = 'c';
                        else if (j == 2 || j == 5)
                            tab[i][j] = 'b';
                        else if (j == 3)
                            tab[i][j] = 'd';
                        else
                            tab[i][j] = 'r';
                    }
                }
                else
                {
                    if( i ==0 && j == 0)
                        tab[i][j] = ' ';
                    else
                        tab[i][j] = '0';
                }
            }
        }
    }
}

void printTab(char ** tab)
{
    int i;
    int j;

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
            printf("%c ",tab[i][j]);
        printf("\n");
    }
}

void iniciarJogo(char  **tab,char **jogadas,char *jogada)
{
    Jogador jogadorBranca;
    Jogador jogadorPreta;
    int flag;

    flag = 1;
    printf("Digite o nome do jogador que vai ficar com as peças brancas: ");
    scanf("%s",jogadorBranca.nome);
    jogadorBranca.nJogadas = 0;
    printf("Digite o nome do jogador que vai ficar com as peças pretas: ");
    scanf("%s",jogadorPreta.nome);
    jogadorPreta.nJogadas = 0;

    while(flag)
    {
        printTab(tab);
        printf(" ");
    }    
}

int movePeao(char **tab,char jogada[7])
{

}

int moveBispo(char **tab,char jogada[7])
{

}

int moveRei(char **tab,char jogada[7])
{
    
}

int moveRainha(char **tab,char jogada[7])
{

}

int moveTorre(char **tab,char jogada[7])
{


}

int moveCavalo(char **tab,char jogada[7])
{

}

int main(void)
{
    char   **tabuleiro;
    int     i,j;
    char    **jogadas;
    char    jogada[8];

    tabuleiro = calloc(10,sizeof(char *));
    for(i = 0; i < 9; i++)
        if(i != 9)
            tabuleiro[i] = calloc(10,sizeof(char));
        else
            tabuleiro[i] = NULL;
    
    startTabuleiro(tabuleiro);
    printTab(tabuleiro);
}