#include <stdio.h>
#include "../include/Tarefa.h"

int main() {
    int opcao;
    
    do {
        printf("\n=== GERENCIADOR DE TAREFAS ===\n");
        printf("1 - Adicionar tarefa\n");
        printf("2 - Listar tarefas\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarTarefa();
                break;
            case 2:
                listarTarefas();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}