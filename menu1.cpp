#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

void calcularRetangulo(){
    system("clear");
    printf("### Calcular a área de um retângulo ####\n\n\n");
    printf("Favor entrar com as informações solicitada abaixo: \n");

    float largura, comprimento, area;
    do{
        
        printf("LARGURA = ");
        scanf("%f", &largura);

        printf("COMPRIMENTO = ");
        scanf("%f", &comprimento);
        if(largura <= 0 || comprimento <= 0)
            printf("Utilize apenas números positivos nas medidas\n");
        
    } while (largura <= 0 || comprimento <= 0);
    
    area = largura * comprimento;

    printf("AREA = %f m2 \n\n\n", area);
    return ;
}

void deveRepetir(int &deveRetornar, int v){
    do
    {
        printf("Digite 0 para voltar ao menu principal...\n");
        printf("Digite 1 para utilizar novamente a calculadora\n");
        scanf("%d", &deveRetornar);

        if (deveRetornar != 0 && deveRetornar != v)
        {
            system("clear");
            printf("### Valor Invalido ###\n\n");
        }
    } while (deveRetornar != 0 && deveRetornar != v);   
}

int main()
{

    int op = 0, deveRetornar;
    bool repete = false;

    do
    {
        if(!repete){
            system("clear");
            printf("   ### MENU ####\n");
            printf("1 - CALCULAR - Retângulo\n");
            printf("2 - CALCULAR - Círculo\n");
            printf("0 - SAIR\n");
            scanf("%d", &op);
            system("clear");
        }
        
        if (op == 1)
        {
        
            calcularRetangulo();
            deveRepetir(deveRetornar,1);
            repete = deveRetornar == 1;
        }
        else if (op == 2)
        {
                system("clear");
                printf("### Calcular a área de um Círculo ####\n\n\n");
                printf("Favor entrar com a informação solicitada abaixo: \n");

                #define PI 3.14159
                float vRaio, vArea;

                printf("\nInforme o raio da círculo: ");
                scanf("%f", &vRaio);

                vArea = PI * (vRaio * vRaio);

                printf("\nA Área da circunferência é: %2f\n\n\n", (vArea));
                deveRepetir(deveRetornar,2);
                repete = deveRetornar == 2;
        }
        else if (op == 0)
        {
            printf("OBRIGADO POR TER USADO NOSSO SISTEMA.");
            scanf("%u", &op);
            exit(0);
        }
        else
        {
            do
            {
                system("clear");
                printf("OPS, Você digitou uma opcão inválida!\n\n\n");
                printf("Digite 0 para voltar ao menu principal...\n");
                scanf("%u", &op);
            } while (op != 0);
        }

    } while (true);

    return 0;
}
