#include <stdio.h>

int main()
{
    float salario, emprestimo, prestacao;
    int parcela;

    printf("informe o salário da pessoa: ");
    scanf("%f", &salario);

    printf("Quanto deseja pegar emprestado? e em quantas vezes deseja pagar? ");
    scanf("%f %d", &emprestimo, &parcela);

    prestacao = emprestimo/parcela;

    if(prestacao > (salario * (20/100.0))){
        printf("Empréstimo Negado!\n");
        printf("Parcela %.2f\n", prestacao);
    }
    else{
        printf("Empréstimo Concedido!\n");
        printf("Parcela %.2f\n", prestacao);
    }

    return 0;
}
