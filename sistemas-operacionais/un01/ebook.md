# Sistemas Operacionais

## Conceito e Evolução de Sistemas Operacionais

Primeiro computador foi criado por Blaise Pascal. Era basicamente uma máquina de cálculo.

Depois, em 1943, foi criado o Colossus, com o objetivo principal de decifrar mensagens
por um equipamento chamado Enigma (no qual Alan Turing estava envolvido). 

Na segunda geração surgem as máquinas que funcionavam com transistores.

Na terceira, já conseguimos criar máquinas que funcionam com circuitos impressos, nos
quais os componentes eletrônicos são integrados. Os computadores já eram mais rápidos.

Na quarta geração até mesmo uma pessoa física poderia comprá-los. É aí que nasce o
microcompoutador. Nessa época, os computadores comprados ainda teriam que ser montados e
não possuiam nenhum sistema operacional por padrão. Foi aí que Gay Kildall teve a ideia
de criar o CP/M, o ancestral de todos os Sistemas Operacionais.

### Virtualização e estruturação do SO

É a capacidade dos Sistemas Operacionais de gerenciais mais memória do que a máquina tem
de fato. Quando as aplicações são iniciadas, elas alocam a memória física, e outras
aplicações que estão iniciadas, mas não sendo usadas, ficam no disco rígido da máquina.

Quando algo que não está na memória física é necessária, o SO escolhe uma região da
memória e a desocupa para ser preenchida pela aplicação. Na virtualização o SO consegue
manipular a memória de tal forma que é possível fazê-lo executar um outro SO, com outra
memória. 

Programas alocam memórias do SO para funcionarem.

Estruturação:

**Kernel**

- Estão as funções primordiais do SO, sem as quais nada poderia
  iniciar. 
- Quanto maior for o kernel, maior será a alocação de memória para as funcionalidades
  básicas. Terão mais funções prontas, sem ser preciso alocações e gerenciamento de
  memória, mas também causa um grande aumento da entropia do sistema e, com isso, aumenta
  a probabilidade de erros e bugs.
- Para novos dispositivos, utilizar um kernel pequeno é muito vantajoso, pois partes
  fundamentais já estão feitas, sendo necessário apenas ir incrementando funções à
  medida que elas são necessárias e pensadas, sem desperdício de memória.

**Drivers**

- São códigos adicionados ao Kernel. Controladores de dispositivos.
- Permitem a comunicação do SO com o dispositivo específico (áudio, vídeo, mouse, etc).
- Geralmente criados pelas companhias que vendem os dispositivos.

**Programas utilitários e executores**

- São aplicações que permitem que o usuário faça manutenção e manipule certos aspectos
  do funcionamento do sistema operacional. Remover lixo, instalação de novos programas,
  firewall, opções de usuário.

**Códigos de boot**

- São partes do código do kernel que são responsáveis pela inicialização e carregamento
  dos dispositivos e entregá-los nas mãos do SO.

### Partes do Sistema Operacional

**Gerenciador de Processos**

Cuida da criação, executação e controle de todas as tarefas que estão ativas. É essa
parte do sistema operacional que cuida qual aplicação será executada, resolve questões de
concorrência, compartilhamento, prioridade, etc.

**Gerenciador de memória**

Habilita o gerenciamento de memória ao Sistema Operacional. É aqui que o SO gerencia
quais programas vão alocar quanta memória, de acordo com prioridade, interação do usuário
e algoritmos. Isso é fundamental, pois não é possível alocar toda a memória principal
para uso simultâneo de todos os programas.

É na parte de gerenciamento de memória que ele vai receber requisições de alocação ou
liberação de memória dos processos.

**Gerenciador de Dispositivos**

Atua no estabelecimento das condições necessárias para utilização dos dispositivos. Quem
faz a solicitação para controlar um dispositivo são os processos, o gerenciador de
dispositivo limita-se a proporcionar as condições necessárias para que essa comunicação
seja feita caso necessárias. Funciona em conjunto dos drivers.

**Gerenciador de Arquivos**

Cuida da organização, criação, leitura e escrita de arquivos nos dispositivos. Quando um
processso faz uso exclusivo de um arquivo em disco, é responsabilidade dele não permitir
que nenhum outro processo tenha acesso à este arquivo. Da mesma forma, não se pode
permitir (geralmente), que processos diferentes executem a escrita de um mesmo arquivo
simultaneamente na memória secundária.

É esse gerenciador de arquivos que lida com os diferentes tipos de arquitetura de sistema
de arquivos, como *fat*, *fat32* ou *ntfs*.

Vale ressaltar que tudo isso são padrões mínimos encontrados. É possível que SO's
diferentes tenham arquiteturas que diferenciem um pouco, subdividindo essas partes em
partes menores para melhorar a manutenibilidade do sistema como um todo.

### Design arquitetural, espaço do núcleo e espaço do usuário

**Núcleo de construção monolótica**

Todos os elementos (módulos), que compõem o SO, fazem parte de um único bloco, ainda que
partes de bloco tenham responsabilidades diferentes. A velocidade de comunicação entre
os módulos é super rápida, uma vez que não existe a necessidade de protocolos de
segurança e assinaturas de identidade. Além disso, todos os módulos tem o mesmo acesso às
diferentes regiões de memória compartilhada entre eles. O problema desse estilo é o
acoplamento que gera.

**Núcleo de construção em camadas**

Direciona um padrão arquitetural onde as camadas mais inferiores provêm serviço para as
superiores. Quanto mais inferior for a camada, maior será o envolvimento com o hardware.
É bastante desacoplada.

Aqui é preciso aplicar uma política de segurança através de um protocolo de comunnicação
entre as partes. É preciso haver registro das atividades, acesso ordenado e fácil das
camadas inferiores.

Geralmente, nesse tipo de arquitetura, as partes dividem responsabilidades diferentes. A
camada mais inferior, por exemplo, poderia ficar responsável pelo gerenciamento dos
dispositivos, enquanto a segunda camada mais baixa, acima da citada anteriormente,
ficaria responsável por fornecer políticas de acesso e proteção dos dados da primeira.

A desvantagem dessa arquitetura é uma velocidade menor entre o caminho que percorre-se
entre o input do usuário, a resposta do hardware e o feedback para o usuário. Isso
acontece justamente por causa da intensa comunicação em protocolos rígidos.

É preciso haver camadas, nesse caso, para que uma aplicação do usuário não venha a
destruir ou corromper completamente o sistema operacional. Por isso existem espaços
(rings) bastante distintos, o **espaço do usuário** (ring 3, user mode) e o **espaço do núcleo** (kernel mode, ring 0).

Para uma aplicação do ring 3 acessar recursos do ring 0, é preciso que esta faça chamadas
ao sistema, e essas chamadas serão analisadas segundo critérios do SO e as camadas que
existem pelo processo.

O espaço do usuário é onde as aplicações podem iniciar livremente, tanto do usuário
quanto do SO. "não há como um aplicativo do usuário funcionar no espaço do núcleo, 
todavia, o usuário pode separar algumas partes do seu aplicativo e reescrevê-las como um 
driver e, então, pedir ao SO para carregar esse driver.".

## Gerenciamento de recursos

Recurso é toda funcionalidade ou capacidade que esteja presente no computador.

Os espaços de interação (onde os programadores colocam as coisas que vão interagir com o
usuário) são providos pelo motor gráficos (ou servidor gráfico). Mas esse motor não é
capaz de criar uma visualização. É preciso que existam comandos de hardware dados ao
monitor. Esses comandos são dados pela placa gráfica. Então o motor gráfico solicita os
recursos da placa gráfica, que solicita os recursos do monitor.

Acima, são dois recursos: hardware (placa) e software (motor/servidor gráfico).

### Conceitos básicos e aplicabilidade de gerenciamento de recursos

O SO é responsável por gerenciar os diversos recursos, como já vimos anteriormente. Ele
precisa controlar e manter um registro do estado das aplicações, quais recursos elas
estão alocando, quais elas podem alocar, quanto tempo ele pode alocar estes recursos.
Todo esse balanço e gerenciamento são primordiais para um funcionamento fluido.

O SO lida com essas aplicações através de **processos**. Quando uma aplicação é iniciada,
o Sistema Operacional o associa à um processo com um número de identificação único, assim
como seus processos filhos.

## Gerenciamento de processos

O gerenciamento de processos está sempre ativo definindo o tempo que cada processo vai
alocar na CPU. Nenhum processo pode esperar demais, nem ficar tempo demais ocupando a
CPU. Quando o gerenciamento falha, ocorrem travamentos e bugs.

### Definição de processo

Podemos entender processo como uma aplicação sendo executada, com parte do seu código 
(ou inteiro) ocupando a memória principal e existir um contexto associado (recursos
sendo utilizados). Chamamos o contexto de "tarefa" ou "job".

Durante o ciclo de vida de um processo existem vários estados:

**Novo** -> quando o processo está em fase de criação.
**Pronto** -> o processo está preparado para ser direcionado para a execução numa CPU.
**Esperando** -> está esperanndo algum recurso ou evento, para que seja executado.
**Executando** -> está em execução em alguma CPU.
**Terminado** -> não está mais em execução e seu contexto já foi liberado.

### Diagrama de execução e estados do processo

A mudança de estado de um processo ocorrerá sempre em função da prioridade, sendo sempre
respeitada a política de uso definida pelo gerenciador de processos.

Cada processo é representado por um **Process Control Block** (PCB), um conjunto de
metadados sobre eles. Um PCB contém informação sobre:

- número identificador do processo
- o estado atual do processo
- um contador do programa que aponnta para o endereço de memória que contém a próxima
  instrução
- os registradores da CPU
- a prioridade do processo dentro da política de escalonamento
- a gerência da memória
- o status de IO (input/output) com dados de recurso (dispositivos) utilizados
- tempo de cpu, memória alocada, etc

A escolha de qual processo deve ser executado acontece baseado nos estados anteriores,
que requerem uma estratégia de escalonamento.

### Políticas de escalonamento

- **First Come, Fist Served** (FCFS): atende o processo que chegar primeiro. É não
  preemptivo (não interrompe o processo ao término do quantum)
- **Shortest Job Fist** (SJF): escolhe-se o processo que representa o menor trabalho.
  Por ser não preemptivo, executa a tarefa até seu término.
- **SJF Preemptivo**: também escolhe o processo com menor trabalho, mas o interrompe ao
  término do quantum.
- **Round Robin**: idêntico ao FCFS, porém, preemptivo. Escalonamento por revezamento.

## Interagindo com o gerenciador de processos

O gerenciador de processos define as políticas de priorização de processos. Por mais que
pareça que os processos ocorrem todos aos mesmo tempo, isso não é verdade. Os processos
ocorrem sempre dentro do seu quantum, um de cada vez em cada core da CPU.

O tempo total dado ao processo é decidido através da prioridade escolhida pelo usuário ou
programa.

Para ocorrer a comunicação entre o SO e as aplicações, é preciso existir algo que faça
essa comunicação. É aí que entram as linguagens de programação.

### Usando linguagem de programação

A comunicação entre aplicações se dá por uma API, através de chamadas à esta API. Por
vezes, essa comunicação entre aplicações é chamada de `interprocess comunication` (IPC).

Sendo assim, nem tudo que o SO faz é relacionado com o hardware. Essas **funcionalidade
de software** são disponibilizadas para as linguagens de programação interagirem com o
SO.

Quando uma linguagem de programação chama um método ou função para alocar memória, por
exemplo, por trás dos panos ela está se comunicando com uma api do sistema operacional.

Usando C para abrir um arquivo no linux, por exemplo, os comandos de C serão
redirecionaods para a API `syscall()`, e ela fará a chamada para o sistema. Essa chamada
geralmente tem um identificador (algo como `0x5`), então será a chamada de abrir arquivo.
Então essa referência apontará para o trecho de código correspondente no kernel do SO.

### Simulação de processos

Um simulador de processos é uma aplicação que permite a simulação de execução de
processos. 

A simulação de processos é uma boa ferramenta para termos uma percepção de como ocorre a
dinâmica na qual o SO está profundamente envolvido por meio de seu escalonador de
tarefas.

