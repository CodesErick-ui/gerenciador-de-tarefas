#ifndef TAREFA_H //Se NÃO está definido TAREFA_H
#define TAREFA_H // então define agora

typedef struct {
    int id;
    char descricao[100];
    int concluida; //0 = não, 1 = sim
} Tarefa;

void adicionarTarefa();
void listarTarefas();

#endif