# Unidade 2 - Definindo tarefas e prioridades

Em geral, o modelo de criação de threads pode ser resumido como:

- Criar o trecho de código de execução que representa a thread - Esse trecho deve
realizar a tarefa que deve ser paralelizada - A thread vai executar tarefas independente
do estado de execução da linha principal - Criar um trecho de código de executação que
represente a linha principal - Em geral pode ser resumido como um grande loop

Threads estão relacionadas à tempo de CPU, políticas de prioridade, etc. O que requisita
recursos são os processos.

## Prioridades na fila de processos do SO

A decisão de qual processo deve ser executado recebe o nome de escalonamento. Existindo,
portanto, um algoritmo de escalonamento.

No escalonamento preemptivo, o processo que está em execução pode ser suspenso a qualquer
momento por um processo "preferido". No não preemptivo, isso não pode acontecer.

Existem algumas motivos para processos serem interrompidos:

**Interrupt request (IRQ)**: quando algum hardware ou algum software (ou mesmo parte do
código do programa que está rodando) faz uma solicitação de interrupção com uma
prioridade maior. É uma sinalização que indica à CPU que um evento prioritário está
acontecendo. Quando a interrupção é sinalizada, o processo em execução é suspenso e a
CPU irá então executar o código que irá atende à IRQ.

### Batch Execution

Execução em Lote acontece quando existe um conjunto de processos finitos que podem ser
executados sem interação do usuário.

Existem algumas políticas para decidir qual lote será executado, um dos critérios é FIFO.

Existe também o Short Jobs First.

Esses tipos de algoritmos hoje em dia fazem pouquíssimo sentido nos SO's de PC, uma vez
que a maioria dos processos nos SO's atuais são provenientes de ações do usuário.

Porém, esse tipo de escalonamento ainda é utilizado em alguns contextos (como por
exemplo em aplicações web para gerencias pools de conexão.)

Hoje em dia, o conceito mais utilizado pelos SO's é o de execução compartilhada, onde os
processos vão dividar igualmente o mesmo tempo de execução. A parcela de tempo dos
processos é chamada de *quantum*.


