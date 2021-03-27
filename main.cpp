#include <iostream>
#include <stdio.h>


int counter_register=11;
char name[50][20] = {"Yuri Baldini", "Pedro Silva", "Jão Carlos", "Priscila Pereira","Joana Dark", "Roberto Alves",
                     "Júlio César", "Juliana Martinz", "Veronica Lisboa", "Alan Silva"};
char email[50][30] = {"yuri@gmail.com", "pedro@hotmail.com", "jão@gmail.com", "pri@globo.com", "joana@medieval.com",
                      "roberto@gmail.com", "julio@yahoo.com", "juliana@ig.com", "veronica@hotmail.com", "alan@ig.com"};
int ru[50] = {3114938, 123456, 654321, 147258, 963852, 111111, 222222, 333333, 444444, 555555};



void student_register(){

    printf("***************************\n");
    printf("* Registro de novos aluno *\n");
    printf("***************************\n");
    printf("Por favor digite seu nome: \n");
    scanf("%s", &name[counter_register]);
    printf("Por favor digite seu e-mail: \n");
    scanf("%s", &email[counter_register]);
    printf("Por favor digite seu RU: \n");
    scanf("%d", &ru[counter_register]);
    printf("\n\n");
    counter_register++;
}

void student_searcher(){
    int aux = 0;
    bool found = false;
    printf("***************************\n");
    printf("*    Buscador de alunos.  *\n");
    printf("***************************\n");
    printf("Por favor digite o RU do aluno para realizar a pesquisa: \n");
    scanf("%d", &aux);

    for(int i = 0; i < 49; i++){
        if(ru[i] == aux){
            printf("Aluno: %s, email: %s", &name[i], &email[i]);
            found = true;
        }
    }
    if(!found){
        printf("Aluno não encontrado.\n");
    }
    printf("\n\n");
}


int main(){
        setlocale(LC_ALL, "");

        int option, command;

        do
        {
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


            switch (option)

            {

                case 1:
                    // Opção 1 chama a função para cadastro de alunos.
                    student_register();
                    system("pause");
                    break;

                case 2:
                    // Opção 2 chama a função para procurar o aluno.
                    student_searcher();
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