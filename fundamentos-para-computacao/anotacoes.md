# Fundamentos para computação - Unidade 1

## Um pouco de história
Computação pode ser definida como uma **tarefa**. Uma tarefa de processamento
automatizada que, a partir de um input, processa estes dados através de cálculos e 
modelos com a finalidade de obter o resultado desses cálculos. (BROOKSHEAR, 2013). Com
o passar do tempo, esse processo tornou-se mais rápido e eficaz.

Um sistema computacional é composto, principalmente, por: _hardware_ e _software_.

### Primórdios
A computação nasce na mesopotâmia, com a criação do ábaco. Com ele dava pra calcular
raíz quadrada e cúbica de forma mais eficiente. Segundo Stallings (2009), em meados do
século XVII surgiram as primeiras máquinas de calcular, elas funcionavam de forma
mecânica.

- Primeira calculadora
  - Criada por Blaise Pascal
  - Fazia apenas adição e subtração
  - Surgiu em 1642
- Segunda calculadora
  - Criada por Gottfried Leibniz
  - Era capaz de realizar multiplicação e divisão
  - Surgiu em 1671
  - Funcionava através de adições e subtrações sucessivas
- Primeira calculadora comercializada
  - Criada por Charles Thomas
  - Fazia as quatro operações
  - Surgiu em 1820
  - Criada com os mesmo princípios da de Leibniz

Ainda no século XIX, nasce a primeira programadora da história: Ada Lovelace. Ela foi
responsável pelo desenvolvimento do primeiro algoritmo da história, usado para calcular
funções matemáticas na máquina desenvolvida por ela e Charles Baggage.

No século XX, nasce Alan Turing, conhecido por criar a máquina hipotética (máquina de 
Turing). Também nessa mesma época, apesar de não ser citado pelo material, Alonzo
Church, criador do cálculo lambda, que deu origem às linguagens de programação funcionais.

### Gerações de computadores e tipos de computadores
A evolução da computação compreende 4 gerações distintas caracterizadas pela tecnologia
usada nos processadores.

### 1ª geração

- Tecnologia principal
  - Válvulas termiônicas
- Linguagem
  - Código de máquina
- Características
  - Grandes dimensões
  - Alto consumo de energia
  - Dados inseridos por cartões perfurados
  - Fazia cálculos milhares de vezes mais rápidos que os das calculadoras mecânicas
- Exemplo
  - ENIAC
    - Fabricado pela Universidade da Pensilvânia
    - Processador de 100 kHZ e 200 bits de memória RAM
  - Univac

Era trabalhoso e moroso modificar programas no ENIAC. O programador precisava inserir os
dados de entrada e controlar as válvulas. Então, John Von Neumann propôs uma nova
arquitetura de computador (checar figura 3 no material). A nova arquitetura consistem em:
- Uma memória principal
  - Armazena as instruções e dados
- Uma Unidade Lógica Aritimética (ULA)
  - Realiza as operações lógicas e aritméticas
- Uma unidade de controle
  - Interpreta e determina a sequência das instruções a serem executadas
- Dispositivos de Entrada e Saída
  - Comunicação externa

### 2ª geração
- Tecnologia principal
  - Diodos Transistores 
- Linguagem
  - Código de Montagem
- Características
  - Habemus CPU (Central Processing Unit)
  - Menores dimensões
  - Peso de até 750kg
- Exemplo
  - PDP-1

Segundo Stallings (2009), com o objetivo de reduzir o tamanho dos computadores e
aumentar a capacidade de armazenamento, a segunda geração de computadores traz a
substituição das válvulas pelos transistores. Melhorou-se o aquecimento e o alto
consumo de energia.

A CPU, desenvolvida conceitualmente neste período, integrou a unidade de controle e a
ULA. Posteriormente, foi desenvolvido o **multiplexador**, que é o ponto central de
conexão entre os canasid de dados, CPU e memória.

### 3ª geração
- Tecnologia principal
  - Circuitos integrados
- Linguagem
  - COBOL
  - FORTRAN
  - Pascal
  - C
  - Basic
- Características
  - Criação dos sistemas operacionais
  - Entrada de dados por dispositivos periféricos
- Exemplo
  - IBM 360
  - UNIVAC 1108

Aqui surgem os Circuitos Integrados. Agora os transistores são incorporados e os demais
componentes de hardware estão em um único chip. Melhoramos a confiabilidade, diminuímos
os equipamentos, baixamos o consumo de energia e o curso de fabricação. Agora esses
computadores eram mais acessíveis.

A partir desse momento a entrada e saída de dados é feita por periféricos, tais como
teclados e monitores.

### 4ª geração
- Tecnologia principal
  - Chips que contem todos os componentes de uma CPU, os microprocessadores
- Linguagem
  - Linguagens de programação modernas já muito conhecidas
- Características
  - Microcomputadores
  - Computadores portáteis
  - Memória RAM e ROM
  - Entrada de dados por dispositivos periféricos
  - Acessível
- Exemplo
  - IBM 286
  - Apple Machintosh

Somos apresentados nessa época também à tecnologia _multicore_. Caracteríza-se por
possuir múltiplas unidades de processamento, compartilhando acesso a um mesmo espaço de
endereçamento (HENNESSY; PATTERSON, 2012). Permitem concorrência.

Cada núcleo, na arquitetura multicore, possui uma memória **cache** L1 e L2 privada,
o que indica que esses dois níveis de memória só poderão ser acessados pelo núcleo em
questão. No entando, quando existir a necessidade de trocar dados entre os núcleos, o
terceiro nível de memória cache e a memória principal serão normalmente acessados, os
quais possuem maior consumo de energia e tempo por acesso. (checar figura 4 no material)

Hoje em dia, os sistemas multicores podem ser divididas em duas grandes classes:
o computador tradicional (processadores de propósito geral) e o computador embarcado
(sistemas embarcados).

Já os processadores de baixo consumo de energia são amplamente utilizados em sistemas
embarcados, como tablets e smartphones. O principal desenvolvedor de projetos de chip
para sistemas embarcados é a ARM (Acorn RISC Machine). No entanto, a Intel tem se
voltado ao desenvolvimento de processadores embarcados através do Intel Atom, a partir
da última década (ANDRADE, 2006). 

## Dispositivos de entrada e saída
Além de processador e memória, um computador precisa de módulos de entrada e saída para
que haja interação com o usuário.

### Dispositivos
Também chamados de periféricos, fornacem dados e informações para as operações de um
programa.

É dividido em 3 classes: apenas entrada, apenas saída e misto.

### Entrada
São _interfaces_ entre usuário e computador.

- Teclado
- Mouse
- Joystick
- Digitalizador
- Webcam
- Microfone

### Saída
Decodificam os dados para devolvê-los no formato de uma informação que pode ser entendida
pelo usuário humano.
- Monitores
  - Recebe informações de cores, movimentos do mouse, tudo em linguagem de máquina, mas
  devolve a imagem correspondente aos dados recebidos.
- Impressoras
- Caixas de som
  - Retorna som segundo as instruções indicadas pelo processador. Instruções que vem dos
  inputados pelo usuário.

### Mistos
- Tela touch-screen
  - A entrada de dados é feita na própria tela, com o toque, e o retorno da informação
  acontece nela mesmo.
- Leitor/grador de CD
  - Leem informações e também gravam informações.
- Modem de internet
- HD's, pen drives

### Técnicas de Armazenamento
Sistemas de armazenamento são definidos como qualquer dispositivo interno ou externo capaz
de armazenar dados (CARVALHO, 2016).

Eles diferem em:
- Capacidade
- Forma
- Uso
- Velocidade de transferência

Esses dispositivos de armazenamento são classificados em dois grandes grupos:
- Memórias voláteis
  - Precisam de uma fonte de energia para manter o conteúdo, ou seja, só armazena
  informações enquanto o computador está ligado
- Memória não-voláteis
  - Mantém a informação mesmo quando o computador é desligado.

Os tipos de dispositivo de armazenamento com memória não volátil são: por meios magnéticos,
ópticos e eletrônicos. (BROOKSHEAR, 2013; CARVALHO, 2016)
- Magnéticos
  - Ex.: HD
  - Armazena uma grande quantidade dados
  - Durante a gravação das informações, um campo magnético é gerado pela cabeça de leitura
  e gravação do dispositivo. 
- Ópticos
  - CD, DVD
  - Armazenam pequenas quantidades de informação, geralmente arquivos multimídia (filmes,
  músicas, etc.).
  - A leitura acontece por meio de um feixe de _laser_ que é projetado na superfícia da
  mídia. A gravação se dá através de _sulcos microscópicos_ (tipo vinil, só que numa
  escala microscópica).
- Eletrônicos
  - SSD
    - Surge surge pela necessidade de ter uma leitura/gravação de dados mais rápida do que
    a dos dispositivos magnéticos. 
  - Cartão de memória, pen drive
  - Leitura mais rápida e menor gasto energético

## Medidas de armazenamento
### Medidas
A menor unidade de medida da computação é o _bit_, representando os dígitos binários 0 e 1.
Um conjunto de bits consegue representar algum tipo de informação. O menor conjunto de bits
chama-se byte, que contém 8 bits. Então existem 255 combinações possíveis de zeros e uns
para representar coisas diferentes.

Cada byte consegue representar um caractere, que pode ser uma letra ou número.

Outra importante unidade de medida é o Hertz(Hz), que pode ser representado de acordo com
sua ordem de grandeza, seguindo a mesma organização da unidade de medida de armazenamento.

Hertz mede a velocidade de operação do clock (ciclos do processador). A velocidade do
processador é medida com relação ao número de clocks por segundo, e representa a quantidade
de operações que o processador pode realizar em uma unidade de tempo.

### Aplicação das medidas
- Taxa de transferência
  - Quantidade de bytes transferida por segundo
  - 300 megabytes por segundo === 300MB/s
- Taxa de transmissão
  - Unidade de medida para a velocidade de transferência de dados representada em bits
  - 300 megabits por segundo === 300Mbps
- RPM
  - Rotações por minuto
  - Define a velocidade que o disco interno gira, na qual, quanto maior a velocidade, menor
  será o tempo de acesso aos dados.

## Arquitetura de computadores

### Arquitetura interna
A maioria dos computadores atuais segue a arquitetura proposta por von Neumann, que é
composta de três componentes principais: Unidade Central de Processamento (Processador),
Unidade de Controle, Memória, Dipositivos de entrada e saída.
### Unidade Central de Processamento (Processador)
Responsável por controlar e executar as instruções e operações.

A execução de uma instrução consiste em cinco estágios (STALLINGS, 2009):
- Busca de instrução
  - Toda instrução é armazenada na memória de instruções
  - O processador acessa essa memória e busca a próxima instrução a ser executada
- Decodificação
  - Etapa de interpretação da instrução
  - Nesse momento o processador sabe qual é o tipo da instrução que será executada
- Busca de operandos
  - Sabendo o tipo da instrução, o processador busca os operandos (valores/dados) sob os
  quais a operação será executada.
  - Nesse momento esses dados estão armazenados nas memórias próximas ao processador e de
  acesso rápido (tipo registradores e cache L1)
- Execução
  - Com todos os dados necessários para a instrução, chegamos na fase da execução. Ocorrerá
  a operação lógico-aritmética cuja instrução descreve
- Armazenamento de resultados
  - Após a execução da instrução, o resultado da operação é armazenado na memória ou nos
  registradores, resultado esse que poderá ser acessado por outra instrução, se necessário

Essas são as operações mais básicas, mas o processadores atuais dividem essas operações em
outras para otimizar a velocidade e fazer maior aproveitamento do hardware disponível.

Dentro do processador, nós temos:
- Unidade de controle
  - Responsável por interpretar as instruções e pela transferência de dados entre CPU e
  memórias próximas
  - Controla a execução de instruções, garantindo a manipulação correta dos dados
- Unidade lógica e aritmética
  - Responsável por computador os dados

### Dinâmica entre os componentes
A dinâmica entre os componentes de hardware determina como os dados são transferidos da
memória para o processador e como os dados e instruções são executados.

A memória pode ser definida como uma lista de células, em que cada uma possui um endereço sequencialmente numerado capaz de armazenar uma determinada quantidade de informação.

Tal informação pode ser uma instrução a ser executada ou dados utilizados na execução das
instruções e programas. 

### Hierarquia de Memória
Memórias são organizadas de acordo com seu tamanho e velocidade de acesso. Quanto menor for
a sua capacidade e mais rápida ela for, mais próxima do processador estará situada.
```
                        /\
                       /__\ -> Registradores da CPU
                      /____\ -> Cache L1
                     /______\ -> Cache L2
                    /________\ -> Cache L3
                   /__________\ -> Memória Principal
                  /____________\ -> Memória Secundária
```
O custo e o desempenho aumentam à medida que se sobe na pirâmide. Já a capacidade costuma
aumentar ao descer a pirâmide.

### Registradores
- Memórias internas ao processador
- Armazena os dados que estão sendo utilizados pela Unidade Lógico Aritmética durante a
execução das instruções.
- Os dados armazenados nos registradores são acessados instantaneamente pelo processador

### Memória cache
- Localizada entre a memória principal e o processador
- Otimiza o acesso aos dados e instruções provenientes dos dispositivos de armazenamento e
memória principal.
- Para ser rápida e simular um armazenamento maior, elas baseiam-se em dois princípios
básicos:
  - Localidade Espacial
    - Quando um dado é acessado, os itens contíguos na memória também são acessados
  - Localidade Temporal
    - Quando um item da memória é acessado, há a possiblidade de que esse item possa ser
    novamente acessado dentro de um curto período de tempo. 

Conforme (HENESSY, 2012), existem três tipos de memória cache:
- Cache L1
  - Recebe requisições diretamente do núcleo do processador
  - Tem por objetivo armazenar os dados/instruções da janela atual de execução da aplicação
  para que possam ser acessados rapidamente.
- Cache L2 e L3
  - Permitem aumentar a disponibilidade dos dados/insruções sem comprometer o desempenho
  da aplicação

### Memória Principal
- Conhecida como memória RAM (Random Access Memory)
- Responsável pelo armazenamento temporário dos dados que estão em execução
- É mais rápida que as memórias secundárias e mais lenta que as memórias cache

### Memória Secundária
São as mídias de armazenamento não-volátil.

## Barramentos
Os barramentos são categorizados de acordo com o tipo de componente que ele conecta: o
barramento do processador conecta as unidades internas do processador e envia sinais para
outros componentes; o barramento da memória cache é responsável por proporcionar ao
processador o rápido acesso  aos dados contidos na cache; o barramento da memória
principal liga a memória principal ao processador; o barramento de entrada e saída é
responsável pela comunicação das interfaces e periféricos conectados a placa-mãe (PCI,
VGA, AGP, USB, entre outros) com o processador; e, por fim, o barramento de dados, que
transporta informação das instruções, dados de processamento e informação de periféricos
de entrada e saída. (BROOKSHEAR, 2013)