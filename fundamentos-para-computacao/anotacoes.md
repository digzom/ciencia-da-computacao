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
