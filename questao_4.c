#include <stdio.h>

int main()
{

    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float total = sp + rj + mg + es + outros;

    float percentual_sp = (sp / total) * 100;
    float percentual_rj = (rj / total) * 100;
    float percentual_mg = (mg / total) * 100;
    float percentual_es = (es / total) * 100;
    float percentual_outros = (outros / total) * 100;

    printf("Faturamento total da distribuidora: R$ %.2f\n\n", total);
    printf("Percentual de SP: %.2f%%\n", percentual_sp);
    printf("Percentual de RJ: %.2f%%\n", percentual_rj);
    printf("Percentual de MG: %.2f%%\n", percentual_mg);
    printf("Percentual de ES: %.2f%%\n", percentual_es);
    printf("Percentual de Outros: %.2f%%\n", percentual_outros);

    return 0;
}
