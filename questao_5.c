#include <stdio.h>
#include <string.h>

#define TAM_MAX 100

int main()
{
    char string[TAM_MAX];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, TAM_MAX, stdin);

    string[strcspn(string, "\n")] = '\0';

    int length = strlen(string);

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("String invertida: %s\n", string);

    return 0;
}
