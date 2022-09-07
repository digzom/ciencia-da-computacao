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
processos é chamada de *quantum*. Esse é um algoritmo preemptivo, pois interrompe
processos.

### Gerenciando processos

Os processos pelos PCB (Process Control Block), que possuem diversas informações sobre
os processos. É nele que estão contidas informações sobre os processos que serão
executados posteriormente, bem como para qual endereço de memória enviá-lo, quais
dispositivos ele está utilizando e coisas do tipo.

O ponto principal é: **toda troca de processo é precedida de uma atualização do PCB do
processo em execução, atualizando-se os valores dos registradores da CPU, do ponteiro
contador de programa, e das informações de entrada e saída.**

## Escalonamento de processos

Algoritmos de escalonamento.

### SJF-Preemptivo

Funciona a partir de duas abordagens principais: primeiro, escolhe a menor tarefa a ser
feita. À cada processo é atribuída uma prioridade baseada no seu `quantum`. Depois,
processos com prioridades iguais são organizados no `schedule` em ordem FCFS.

O maior problema dessa abordagem é que não é possível definir qual é o menor processo de
maneira eficiente, uma vez que isso não pode ser medido pelo tamanho do arquivo, nem por
nenhum recurso utilizado por ele.

O segudo problema é que usando "o menor processo" sempre, pode ser que um processo nunca
seja executado ou demore muito para executar.

Por causa desse problemas, esse tipo de algoritmo só é possível ser utilizado num
contexto onde o usuário informe ao SO quanto tempo o processo pode durar. Sem essa
informação, é um algoritmo inútil para o SO.

## Comunicação e sincronização de processos

Pode haver comunicação entre processos através de chamadas à API. Um browser pode
comunicar-se com a placa de rede e a de áudio, por exemplo. A comunicação entre
processos no qual *o output de um é o input de outro*, nós chamamos de **pipeline**. É
nessa fase também que existe a sincronização de processos, por um não pode tentar ler
algo que outro ainda não disponibilizou.

Para essa comunicação, existem as seguintes abordagens:

- API ou chamada de sistema
  - É o método mais previsível. O uso da API define a interação entre os processos, tais
  como: quais dados serão enviados (ou recebidos), qual serviço será solicitado, etc.
- Memória compartilhada
  - Aqui os processos seguem as regras estabelecidas pelo SO. Nesse cenário há o
  problema de concorrência.
- Pipeline
  - Aqui é simples: quando um envia um dado, o outro utiliza.

### Programação concorrente

Suponhamos que uma região da memória armazena o valor 20. Temos os processos A, B e C,
cuja tarefa é adicionar 1 ao valor da memória. Os 3 podem ler o valor ao mesmo tempo,
mas a escrita tem que ser feita em momentos diferentes. O objetivo é que no final do
processamento dos 3, nós tenhamos o número 23 armazenado na memória. Porém, cada um leu
ao mesmo tempo, então todo vão somar 1 ao número 20. No final, teremos 21 na memória.

Isso é race condition.

Seria necessário definir uma ordem de leitura ou guardar o estado atualizado do valor
após a execução de cada processo e compartilhar esse estado entre os processos que
utilizarão a mesma região da memória.

Uma estratégia muito conhecida para resolver esse problema é a implementação de
*semáforos*.

### Problemas de compartilhamento de recursos

A *race condition* em relação aos recursos compartilhados torna a região crítica, também
chamada de *seção crítica* (critical section).

Isso é resolvido frequentemente com *semáforos*. Semáforo é basicamente uma variável de
controle. O processo que conseguir "travar" a variável, terá acesso à memória. Ex.: a
variável terá o valor 0 no início, e quando algum processo lê-la, ele vai mudar o valor
para 1. Assim a variável ficará travada, indicando aos processos que chegarem que a
região está em uso restrito.

Mas e se o mesmo processo, ao mesmo tempo, tentar acessar essa variável e escrever nela?
Bom, temos mais uma race condition. Então essa abordagem não é a melhor para todos os
contextos.

Nas tentativas de resolver esses problemas, nós temos duas soluções mais usadas: 

- Espera ocupada
  - O processo esperando é ocupa tempo de processamento.
- Espera não ocupada (dormir)
  - Não ocupa tempo de CPU, utilizando IRQ's para "acordar" quando chegar sua vez.
  - Essa é a abordagem mais utilizada hoje em dia.
