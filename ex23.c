#include <stdio.h>
#include <stdlib.h>
#define NUM_FUNC 20

typedef struct {
    int matricula;
    int cargo;
    int dependentes;
    float salario;
} Funcionario;

void lerFuncionarios(Funcionario func[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nFuncionario %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &func[i].matricula);
        printf("Cargo (2 digitos): ");
        scanf("%d", &func[i].cargo);
        printf("Dependentes: ");
        scanf("%d", &func[i].dependentes);
        printf("Salario: ");
        scanf("%f", &func[i].salario);
    }
}

void imprimirFuncionarios(Funcionario func[], int n) {
    printf("\nDados dos Funcionarios:\n");
    for(int i = 0; i < n; i++) {
        printf("\nMatricula: %d\n", func[i].matricula);
        printf("Cargo: %d\n", func[i].cargo);
        printf("Dependentes: %d\n", func[i].dependentes);
        printf("Salario: %.2f\n", func[i].salario);
    }
}

float calcularMediaSalarial(Funcionario func[], int n) {
    float soma = 0;
    for(int i = 0; i < n; i++) {
        soma += func[i].salario;
    }
    return soma/n;
}

Funcionario encontrarMaiorDependentes(Funcionario func[], int n) {
    int maior = func[0].dependentes;
    int indice = 0;
    for(int i = 1; i < n; i++) {
        if(func[i].dependentes > maior) {
            maior = func[i].dependentes;
            indice = i;
        }
    }
    return func[indice];
}

float mediaSalarialPorCargo(Funcionario func[], int n, int cargo) {
    float soma = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(func[i].cargo == cargo) {
            soma += func[i].salario;
            count++;
        }
    }
    return count > 0 ? soma/count : 0;
}

int main() {
    Funcionario funcionarios[NUM_FUNC];
    
    lerFuncionarios(funcionarios, NUM_FUNC);
    imprimirFuncionarios(funcionarios, NUM_FUNC);
    
    float mediaSalarial = calcularMediaSalarial(funcionarios, NUM_FUNC);
    Funcionario maiorDep = encontrarMaiorDependentes(funcionarios, NUM_FUNC);
    
    printf("\nResultados:\n");
    printf("Media salarial: %.2f\n", mediaSalarial);
    printf("Funcionario com mais dependentes:\n");
    printf("Matricula: %d\n", maiorDep.matricula);
    printf("Cargo: %d\n", maiorDep.cargo);
    printf("Dependentes: %d\n", maiorDep.dependentes);
    
    return 0;
}