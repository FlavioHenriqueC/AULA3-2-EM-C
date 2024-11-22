
//structs


#include <stdio.h>

#include <string.h>

 

struct Aluno {

    int numMat;

    char nome[30];

    char sexo;

    int idade;

};

 

int main(){

    struct Aluno aluno1;

 

    // Inserindo dados no aluno1

    aluno1.numMat = 1000;

    strcpy(aluno1.nome, "Joao");

    aluno1.sexo = 'M';

    aluno1.idade = 19;

 

    // Imprimindo os dados do aluno1

    printf("Número de matrícula: %d\n", aluno1.numMat);

    printf("Nome: %s\n", aluno1.nome);

    printf("Sexo: %c\n", aluno1.sexo);

    printf("Idade: %d\n", aluno1.idade);

 

    return 0;

}


//ponteiro

#include <stdio.h>

 

struct aluno{

      int mat;

      float nota;

};

 

int main(){

      struct aluno joao;

struct aluno *ptr; // declaração do ponteiro para struct

// Inicialização da struct declarada

      joao.mat = 1000;

      joao.nota = 8.5;

      //inicialização do ponteiro ptr

ptr = &joao;

 

      printf(“%d”, ptr->mat); //impressão do atributo nome através do ponteiro

      printf(“%f”, ptr->nota); //impressão do atributo nota através do ponteiro

return 0;

}