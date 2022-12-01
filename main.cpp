#include <iostream>
#include "searcher.cpp"
#include "register.cpp"

// Declarando arrays e variaveis de acordo com o pedido no exercicio.
int counter_register=11;
char name[50][20] = {"Yuri Baldini", "Pedro Silva", "Jão Carlos", "Priscila Pereira","Joana Dark", "Roberto Alves",
                     "Júlio César", "Juliana Martinz", "Veronica Lisboa", "Alan Silva"};
char email[50][30] = {"yuri@gmail.com", "pedro@hotmail.com", "jão@gmail.com", "pri@globo.com", "joana@medieval.com",
                      "roberto@gmail.com", "julio@yahoo.com", "juliana@ig.com", "veronica@hotmail.com", "alan@ig.com"};
int ru[50] = {3114938, 123456, 654321, 147258, 963852, 111111, 222222, 333333, 444444, 555555};


int main(){
    setlocale(LC_ALL, "");

    int option, command;
    do
        { // menu do programa
            printf("*****Yuri Baldini - RA 3114938******\n");
            printf("************************************\n");
            printf("*    Buscador de alunos            *\n");
            printf("************************************\n");
            printf("************************************\n");
            printf("* Digite as opções de 1 a 3        *\n");
            printf("* 1-> Cadastrar aluno              *\n");
            printf("* 2-> Buscar aluno                 *\n");
            printf("* 3-> Encerrar programa            *\n");
            printf("************************************\n");

            printf("Digite sua escolha: ");
            scanf("%d", &option);

            while ((command = getchar()) != '\n' && command != EOF) {}   // Limpar buffer do terminal.


            switch (option) // selecionar opções

            {

                case 1:
                    // Opção 1 chama a função para cadastro de alunos.
                    student_register(counter_register, ru,  name[10], email[10]);
                    system("pause");
                    break;

                case 2:
                    // Opção 2 chama a função para procurar o aluno.
                    student_searcher(ru,  name[10], email[10]);
                    system("pause");
                    break;

                case 3:
                    //Opção 3 chama encerra o programa.
                    printf("\nO programa foi encerrado com sucesso.\n");
                    system("pause");
                    break;

                default:
                    // Enquanto as respostas forem diferente de 1 e 3, resposta padrão.
                    printf("\nEscolha invalida, por favor selecione uma opção de 1 a 3.\n\n");
                    system("pause");
                    break;
            }
            system("cls");
        }
// Looping para o programa não ser encerrado até que a opção seja a 3.
        while (option != 3);
        return 0;
    }