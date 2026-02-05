#include <stdio.h>
#include <string.h>
#include "../include/Tarefa.h"

#define MAX_TAREFAS 100

Tarefa tarefas[MAX_TAREFAS];
int totalTarefas = 0;

void adicionarTarefa() {
    if (totalTarefas >= MAX_TAREFAS) {
        printf("Limite de tarefas atingido\n");
        return;

tarefas[totalTarefas].id = totalTarefas + 1;
tarefas[totalTarefas].concluida = 0;
}

printf("Digite a descrição da tarefa: ");
getchar(); //Limpa buffer
fgets(tarefas[totalTarefas].descricao, 100, stdin);

tarefas[totalTarefas].descricao[strcspn(tarefas[totalTarefas].descricao, "\n")] = '\0';

totalTarefas++;
printf("Tarefa adicionada com sucesso!\n");
}

void listarTarefas() {
    if (totalTarefas == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    for (int i = 0; i < totalTarefas; i++) {
        printf("[%d] %s %s \n",
            tarefas[i].id,
            tarefas[i].descricao,
            tarefas[i].concluida ? "(Concluída)" : "(Pendente)");
    }
}
