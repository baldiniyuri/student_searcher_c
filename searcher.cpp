#include <iostream>


void student_searcher(int *ru, char *name, char *email){ // Função para buscar o aluno
    int aux = 0;
    bool found = false;

    printf("***************************\n");
    printf("*    Buscador de alunos.  *\n");
    printf("***************************\n");
    printf("Por favor digite o RU do aluno para realizar a pesquisa: \n");
    scanf("%d", &aux); // auxiliar ira armazenar o valor digitado.
    
    for(int i = 0; i < 49; i++){
        if(ru[i] == aux){ // comparando o valor digitado com valores no array na posição de i
            printf("Aluno: %s, email: %s", &name[i], &email[i]);
            found = true; // se foi encontrado o boleano se torna True e não cai no proximo if
        }
    }
    if(!found){ // se não for encontrado printar
        printf("Aluno não encontrado.\n");
    }
    printf("\n\n");

}