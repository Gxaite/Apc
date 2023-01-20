#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int testes;
    char str[43];
    char resposta = 'O';

    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        resposta = 'O';
        scanf("%s", str);
        int tamanho = strlen(str);

        for (int j = 0; j < tamanho - 1; j++)
        {
            if (tolower(str[j]) >= tolower(str[j + 1]))
            {
                resposta = 'N';
                break;
            }
        }
        printf("%s: %c\n", str, resposta);
    }

    return 0;
}

