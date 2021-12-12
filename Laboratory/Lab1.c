#include <stdio.h>
#include <string.h>

// Classe carro: Implemente uma classe chamada Carro com as seguintes propriedades:

//     Um veículo tem um certo consumo de combustível (medidos em km / litro) e uma certa quantidade de combustível no tanque.
//     O consumo é especificado no construtor e o nível de combustível inicial é 0.
//     Forneça um método andar( ) que simule o ato de dirigir o veículo por uma certa distância, reduzindo o nível de combustível no tanque de gasolina.
//     Forneça um método obterGasolina( ), que retorna o nível atual de combustível.
//     Forneça um método adicionarGasolina( ), para abastecer o tanque. Exemplo de uso:

struct car
{

    int kilometros;
    int consumoDeCombustivel;
    int adicionarCOmbustivel;
};

int main(void)
{

    struct car c1;
    int select;

    printf("Ola ,você deseja adicionar gasolina a seu veículo ? \nDigite 1 para sim e 2 para não \n\nDigite aqui :");

    scanf("%d", &select);
    __fpurge(stdin);

    if (select == 1)
    {
        printf("Digite a quantidade de combustível desejas abastecer :");
        scanf("%d", &c1.adicionarCOmbustivel);
        __fpurge(stdin);

        if (c1.adicionarCOmbustivel <= 0)
        {
            do
            {
                printf("Valor inválido !!!\nDigite novamente !\n\nDigite aqui :");
                scanf("%d", &c1.adicionarCOmbustivel);
            } while (c1.adicionarCOmbustivel < 0 || c1.adicionarCOmbustivel == 0);

            status(c1.adicionarCOmbustivel);

            printf("Você deseja andar com o veículo?\n\nDigite 1 para sim e 2 para não\n\nDigite aqui :");
            select = 0;
            scanf("%d", &select);
            __fpurge(stdin);

            if (select == 1)
            {
                printf("Digite a quantidade de kilometros que seu veículo faz por litro :");
                scanf("%d", &c1.consumoDeCombustivel);
                __fpurge(stdin);

                if (c1.consumoDeCombustivel <= 0)
                {
                    do
                    {
                        printf("Vocẽ tem razão que isto realmente é algum tipo de automovél ??Pois parece mais uma pedra kasksakak\n\nDigite novamente ,por gentileza !\n\nDigite aqui :");
                        scanf("%d", &c1.consumoDeCombustivel);

                    } while (c1.consumoDeCombustivel <= 0);

                    printf("Digite a quantidade de kilometros que você deseja andar :");
                    scanf("%d", &c1.kilometros);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Valor inválido !!!!\nDigite novamente , por favor \n\n\nDigite aqui :");
                            scanf("%d", &c1.kilometros);

                        } while (c1.kilometros <= 0);

                        printf("\n\n\nDigite qualquer tecla para continuar.....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("Digite qualquer tecla para continuar ...");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }

                else
                {
                    printf("Digite a quantidade de kilometros que vocẽ deseja andar :");
                    scanf("%d", &c1.kilometros);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Digite novamente a quantidade de kilometros :");
                            scanf("%d", &c1.kilometros);

                        } while (c1.kilometros <= 0);

                        printf("\n\n\nDigite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("\n\nDigite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
            }

            else if (select == 2)
            {
                printf("Obrigado por utilizar os nossos serviços !!!!\n\nSee you latter!!");
            }

            else
            {
                do
                {
                    printf("Valor errado !!!\n\npor favor digite novamente \n\nDigite aqui :");
                    scanf("%d", &select);

                } while (select != 1 && select != 2);

                printf("Digite a quantidade de kilometros que seu veículo faz por litro :");
                scanf("%d", &c1.consumoDeCombustivel);

                if (c1.consumoDeCombustivel <= 0)
                {
                    do
                    {
                        printf("Erro !!\n\nDigite novamente \n\nDigite aqui :");
                        scanf("%d", c1.consumoDeCombustivel);
                    } while (c1.adicionarCOmbustivel <= 0);

                    printf("Digite a quantidade de kilometros que vocẽ deseja andar :");
                    scanf("%d", &c1.kilometros);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Digite novamente  :");
                            scanf("%d", &c1.kilometros);

                        } while (c1.kilometros <= 0);

                        printf("\n\n\nDigite qualquer tecla para continuar .....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("Digite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
            }
        }
        else
        {
            status(c1.adicionarCOmbustivel);

            printf("Você deseja andar com o veículo ?\n\nDigite 1 para sim e 2 para não \n\nDigite aqui :");
            select = 0;
            scanf("%d", &select);
            __fpurge(stdin);

            if (select == 1)
            {
                printf("Digite a quantidade de kilometros que seu carro faz por litro :");
                scanf("%d", &c1.consumoDeCombustivel);
                __fpurge(stdin);

                if (c1.consumoDeCombustivel <= 0)
                {
                    do
                    {
                        printf("Tens certeza ? Deste jeito seu carro é uma pedra skaskkaskaskasksa\n\nDigite novamente ,por gentileza\nDigite aqui :");
                        scanf("%d", &c1.consumoDeCombustivel);

                    } while (c1.consumoDeCombustivel <= 0);

                    printf("Digite a quantidade de kilometros que você deseja andar : ");
                    scanf("%d", &c1.kilometros);
                    __fpurge(stdin);

                    if (c1.kilometros <= 0)
                    {

                        do
                        {
                            printf("Valor errado !!!\n\nDigite novamente !!\nDigite aqui :");
                            scanf("%d", &c1.kilometros);
                            __fpurge(stdin);

                        } while (c1.kilometros <= 0);

                        printf("O seu carro andou %d kilometros \nDigite qualquer tecla para continuar ...", c1.kilometros);

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("Seu carro andou %d kilometros \nDigite qualquer telca para continar ...", c1.kilometros);
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
                else
                {

                    printf("Digite a quantidade de Kilometros que você deseja andar :");
                    scanf("%d", &c1.kilometros);
                    __fpurge(stdin);

                    if (c1.kilometros <= 0)
                    {

                        do
                        {
                            printf("Erro !!\nDigite novamente \n\nDigite aqui :");
                            scanf("%d", c1.kilometros);
                        } while (c1.kilometros < 0);

                        printf("O seu carro andou $d kilometros \nDigite qualquer tecla para continuar ...", c1.kilometros);
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("O carro androu 5d kilometros \nDigite qualquer telca para continuar ...", c1.kilometros);
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
            }
            else if (select == 2)
            {
                printf("Obrigado por abastecer nos nosso posto !!!\n\nSee you latter !!!");
            }
            else
            {
                do
                {
                    printf("Valor inválido !!!\nDigite novamente !\n\nDigite 1 para andar com o veículo ou 2 para não andar \nDigite aqui :");
                    scanf("%d", &select);
                    __fpurge(stdin);

                } while (select != 1 && select != 2);

                if (select == 1)
                {
                    printf("Digite a quantidade de kilometros que você deseja andar :");
                    scanf("%d", &c1.kilometros);
                    __fpurge(stdin);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Digite novamente a quantidade de kilometros que você deseja andar :");
                            scanf("%d", &c1.kilometros);

                        } while (c1.kilometros <= 0);

                        printf("O seu carro andou %d Km \n\nDigite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("O seu carro andoy %d Km \n\nDigite qualquer tecla para continuar ...", c1.kilometros);
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
                else if (select == 2)
                {
                    printf("Obrigado por utilizar nossos serviçõs !!!!");
                }
            }
        }
    }
    else if (select == 2)
    {
        printf("\n\nObrigado por utilizar o posto !!!\n\n");
    }

    else
    {
        do
        {

            printf("Valor inválido !!!\n\nObs : digite 1 para sim e 2 para não \n\nDigite aqui :");
            scanf("%d", &select);
            __fpurge(stdin);

        } while (select != 1 && select != 2);

        if (select == 1)
        {
            printf("Digite a quantidade de combustível que desejas abastecer :");
            scanf("%d", &c1.adicionarCOmbustivel);
            __fpurge(stdin);

            if (c1.adicionarCOmbustivel <= 0)
            {
                do
                {
                    printf("Erro!!\n\nDigite novamente a quantidade de combustível que você deseja abastecer :");
                    scanf("%d", &c1.adicionarCOmbustivel);
                    __fpurge(stdin);
                } while (c1.adicionarCOmbustivel <= 0);

                printf("Digite a quantidade de kilometros que seu carro faz por litro :");
                scanf("%d", &c1.consumoDeCombustivel);

                if (c1.consumoDeCombustivel <= 0)
                {
                    do
                    {
                        printf("Este seu veículo parece uma pedra !!!!\n\nDigite novamente a quantidade de km que ele faz por litro \n\nDigite aqui :");
                        scanf("%d", &c1.consumoDeCombustivel);
                        __fpurge(stdin);

                    } while (c1.consumoDeCombustivel <= 0);

                    printf("Digite qualquer tecla para continuar ...");
                    getchar();

                    andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                }
                else
                {
                    printf("Digie qualquer tecla para continuar ....");
                    getchar();

                    andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                }
            }
            else
            {
                printf("Digite a quantidade de kilometros que seu carro faz por litro :");
                scanf("%d", &c1.consumoDeCombustivel);

                if (c1.consumoDeCombustivel <= 0)
                {
                    do
                    {
                        printf("Este carro é uma pedra KKKK\n\nDigite novamente !\n\nDigite aqui :");
                        scanf("%d", &c1.consumoDeCombustivel);
                        __fpurge(stdin);
                    } while (c1.consumoDeCombustivel <= 0);

                    printf("Vocẽ deseja andar quantos Km ?");
                    scanf("%d", &c1.kilometros);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Digite novamente a quantidade de kilometros que você deseja andar !\n\nDigite aqui :");
                            scnaf("%d", &c1.kilometros);
                            __fpurge(stdin);

                        } while (c1.kilometros <= 0);

                        printf("Digite qualquer tecla para continuar ....");
                        gerchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                    else
                    {
                        printf("Digite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }

                else
                {
                    printf("Você deseja andar quantos Kilometros ? ");
                    scanf("%d", &c1.kilometros);

                    if (c1.kilometros <= 0)
                    {
                        do
                        {
                            printf("Digite novamente a quantidade de kilometros que você deseja andar \n\nDigite aqui :");
                            scanf("%d", &c1.kilometros);
                            __fpurge(stdin);

                        } while (c1.kilometros <= 0);

                        printf("Digite qualquer tecla para continuar ....");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }

                    else
                    {
                        printf("Digite qualquer tecla para continuar ...");
                        getchar();

                        andar(c1.adicionarCOmbustivel, c1.consumoDeCombustivel, c1.kilometros);
                    }
                }
            }

            if (select == 2)
            {
                printf("Obrigado por utilizar nossos serviços !!!\n\nSee you latter !!!!");
            }
        }
    }
    return 0;
}

void status(int quantidadeDeGasolina)
{
    printf("O seu carro tem %d Litros de gasolina !!!\n\n", quantidadeDeGasolina);
}

void andar(int adicionarCombustivel, int consumo, int kilometros)
{

    int a = adicionarGasolina(adicionarCombustivel) - (kilometros / consumo);

    if (a < 0)
    {
        printf("\nErro !!\n\nVocê não pode andar esta distância , pois lhe falta gasolina !!!\n\n");
    }
    else if (a == 0)
    {
        printf("\nTrajeto possível ,mas no LIMITE !!!!\n\n");
    }
    else if (a > 0)
    {
        printf("\nO seu carro andou %d Km ,por conta disto sua quantidade de gasolina restante é igual há : %d Litros \n\n", kilometros, a);
    }
}

void obterGasolina()
{
}

int adicionarGasolina(int adicionarCombustivel)
{
    int quantidadeDeGasolina = adicionarCombustivel;
    return quantidadeDeGasolina;
}
