#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /**
    Para executar parte do c�digo, identifique o "INICIO" e "FIM DO CODIGO"
    e apague os caracteres de coment�rio
    **/

    //Atividade 1
    /** //INICIO DO C�DIGO
    int valor_1, valor_2, soma, subtracao,
     produto, divisao, resto;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%i", &valor_1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%i", &valor_2);

    soma = valor_1 + valor_2;
    subtracao = valor_1 - valor_2;
    produto = valor_1 * valor_2;
    divisao = valor_1 / valor_2;
    resto = valor_1 % valor_2;

    printf("\n Valor da soma: %i.", soma);
    printf("\n Valor da subtracao: %i.", subtracao);
    printf("\n Valor do produto: %i.", produto);
    printf("\n Valor da divisao: %i.", divisao);
    printf("\n Valor do resto: %i.", resto);
    **/ //FIM DO C�DIGO

    //Atividade 2
    /** //INICIO DO C�DIGO
    int x, y, z;

    printf("Digite o valor  de y: ");
    scanf("%i", &y);

    printf("Digite o valor de z: ");
    scanf("%i", &z);

    x = pow(y,2) + pow(z,3) + 1;

    printf("Valor de x para x = y^2+z^3+1= %i.", x);
    **/ //FIM DO C�DIGO

    //Atividade 3
    /** //INICIO DO C�DIGO
    float valor_1, valor_2, soma_rq;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor_1);

    printf("Digite o segundo valor real: ");
    scanf("%f", &valor_2);

    soma_rq = sqrt(valor_1) + sqrt(valor_2);

    printf("\n Valor da soma das raizes quadradas dos valores: %f.", soma_rq);
    printf("\n Valor da soma das raizes quadradas dos valores: %.2f.", soma_rq);
    **/ //FIM DO C�DIGO

    //Atividade 4
    /** //INICIO DO C�DIGO
    float raio, pi = 3.1415, area_circ, circunferencia;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area_circ = pi * pow(raio, 2);
    circunferencia = 2 * pi * raio;

    printf("\n Valor da area do circulo: %.2f.", area_circ);
    printf("\n Valor da circunferencia do circulo: %.2f.", circunferencia);
    **/ //FIM DO C�DIGO

    //Atividade 5
    /** //INICIO DO C�DIGO
    float valor_hora_trabalho, horas_extras, carga_mensal = 40,
     valor_salario, valor_extra, valor_total;

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora_trabalho);

    printf("Digite a quantidade de horas-extras: ");
    scanf("%f", &horas_extras);

    valor_salario = valor_hora_trabalho * carga_mensal;
    valor_extra = (valor_hora_trabalho + valor_hora_trabalho * 0.5) * horas_extras;
    valor_total = valor_salario + valor_extra;

    printf("\n Valor do salario: %.2f.", valor_salario);
    printf("\n Valor das horas-extras: %.2f.", valor_extra);
    printf("\n Valor total: %.2f.", valor_total);
    **/ //FIM DO C�DIGO

    return 0;
}
