#include <iostream>


void student_register(int counter_register, int *ru, char *name, char *email){ // Registrar alunos

    printf("***************************\n");
    printf("* Registro de novos aluno *\n");
    printf("***************************\n");
    printf("Por favor digite seu nome: \n");
    scanf("%s", &name[counter_register]); // aramzenar o nome na posição de counter, que se inicia com valor 11
    printf("Por favor digite seu e-mail: \n");
    scanf("%s", &email[counter_register]); // aramzenar o email na posição de counter, que se inicia com valor 11
    printf("Por favor digite seu RU: \n");
    scanf("%d", &ru[counter_register]); // aramzenar o ru na posição de counter, que se inicia com valor 11
    printf("\n\n");
    counter_register++; // aumentar o valor do contador
}