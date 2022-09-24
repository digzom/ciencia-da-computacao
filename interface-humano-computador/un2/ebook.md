# Quais são os passos para a construção de um software amigável ao usuário?

## Introdução

A principal tarefa de um software deveria ser realizar uma tarefa de forma mais otimizada
e segura do feita de outras formas. Isso inclui acessibilidade.

## Fatores humanos

Como o ser humano lida com informações?

### Modelos Conceituais

Para desenvolver uma solução eficiente, é preciso desenvolver um bom conceituro
interativo. Mas isso só será possível quando o `designer` entende qual é o espaço do
problema. Isso é compreendido como um bom modelo conceitual.

Contatos com o sistema:

- Físico: o que o usuário está fazendo com o sistema
- Mental: o que o usuário está interpretando do contato físico

Um modelo conceitual de um sistema interativo pode ser entendido como uma descrição do
sistema proposto, que deve obedecer a alguns requisitos para que o usuário compreenda.

Qual é o objetivo do produto? Ele está chegando ao objetivo facilmente? É necessário
saber quais são as necessidades reais dos usuários para realmente desenvolver algo que
seja importante para eles.

Definir um espaço do problema -> Definir como isso pode ser melhorado.  

### Necessidades dos usuários

É preciso levantar dados e requisitos.

É comum dividir os usuários em dois tipos: os que usam tecnologia frequentemente e os que
usam apenas esporadicamente.

Algumas questões importantes para serem levantadas quando pensamos em descobrir a real
necessidade dos usuários:

- Quem vai utilizar?
- Quem será afetado pelo funcionamento?
- Quem toma as decisões?
- quais as funcionalidades?

### Tecnicas de coleta de dados

- Entrevistas
  - Sequência de perguntas ou tópicos
  - Não é bom realizar uma entrevista com um grande número de pessoas
- Grupo de foco
  - Existe um moderador que vai fazer com que todas as pessoas participem
- Questionários
  - A maioria das perguntas deve ser fechadas
  - O designer não precisa estar no mesmo espaço físico do usuário
- Brainstorming
  - O resultado desta atividade é uma lista de necessidades e desejos dos usuários.
- Estudos de campo
  - O pesquisador visita os usuários e os observa realizando atividades.

## Espaço do problema

As técnicas mais utilizadas para analisar os dados de forma eficiente são o uso de perfis
de usuários, personas e análise de tarefas.

### Perfis de usuários

Quais são os objetivos do usuários? Quais são suas características emocionais e físicas?
Qual é o cargo? Função? Experiência? Instrução? Faixa etária?

Esses dados começam quando o usuário faz um perfil numa rede social, mas também pode ser
adquirido através do comportamento de navegação na internet.

### Personas em IHC

É uma técnica utilizada para representar os usuários finais do produto. Geralmente, um
sistema deve ser projetado para uma `persona`.

Quando se projeta um sistema interativo para pessoas com estilos e objetivos
diferentes, deve-se adequar o projeto para as necessidades semelhantes entre os
usuários, **agrupando as preferências em uma persona, que possua as características
que mais se repetem entre os variados perfis.**

### Análise de tarefas

Nessa técnica de análise, é possível obter um entendimento sobre qual é o trabalho dos
usuários, como eles o realizam e por quê.

A análise de tarefas pode ser utilizada nas três etapas fundamentais do design
(análise, intervenção e avaliação).

O objetivo da análise de tarefas é compreender as atividades do usuário do ponto de
vista dele próprio: o quê ele faz, como, sob que condições e por quê.

Existem três modelos de análise de tarefas mais comuns.

- Análise Hierárquica de Tarefas (AHT) -
  - Representação gráfica
- Goals, Operators, Methods, and a Selection Rules (GOMS)
  - concentra-se nos processos cognitivos necessários para atingir uma meta usando um
  dispositivo em particularidade.
- ConcurTaskTrees(CTT)
  - Esta notação representa atividades interativas, com a decomposição de tarefas numa
  estrutura de árvore invertida

## Comunicação humano-computador

E como definimos uma interface amigável? Pensamos no usuário, em como ele vai
compreender o que está vendo, movendo-se de forma intuitiva, sem precisar de muito
esforço para ter o controle que precisa.

### Engenharia cognitiva

Quando um usuário precisa realizar determinada operação, as suas intenções existem
apenas em sua mente. Já para que ele realize esta operação, é necessário algo físico
que possa resultar em alguma variação no sistema. Essa teoria separou intenções e
ações no sistema, em dois aspectos: o golfo de execução e o golfo de avaliação.

O golfo de execução está ligado com a intenção do usuário, onde ele estabelece um
objetivo e executa a ação que planejou. Já no golfo de avaliação é a compreensão do
que ocorreu no sistema após a ação se desenvolver no golfo de execução. 

O papel principal do designer na engenharia cognitiva é tentar reduzir a distância
entre os dois golfos

### Design e guidelines

`Guidelines` são orientações para quem vai elaborar e quem vai avaliar um determinado
software. São como boas práticas, não uma receita para o sucesso de um produto.

Guidelines diminuem o atrito do primeiro contato com o sistema. Guidelines são formados
por quatro partes diferentes:

- Padrões de interação
  - São exigências para projetos de interação. 
  - Geralmente é uma documentação oficial exigida por lei.
  - Chama atenção para a qualidade da interface.
- Diretrizes de projetos
  - O que a maioria das pessoas levam esperam de um projeto
  - São publicados em livros, artigos, etc
  - Auxiliam nas tomadas de decisões
- Guias comerciais
  - Documento de uma organização que o fornece como produto
  - Proporciona subsídio aplicável a diversos projetos com padrões de interação
  - Melhora a consistência do projeto
- Guias de estilo
  - Documento com recomendações que a interação final do usuário deve alcançar

Tudo isso trabalha para a elaboração de guidelines.

Exemplo de guideline:

- Guideline 1
  - Os diferentes elementos de um sistema interativo devem sempre estar organizados de
  forma consistente em todas as telas.
  - Exemplo: títulos, instruções de uso, campos de entrada de informação, devem sempre
  estar na mesma posição em diferentes telas.
  - Justificativa: a consistência ajuda o usuário a se orientar no momento da interação.

### Diretrizes em IHC

- correspondência com as expectativas dos usuários: o uso do idioma correto, palavras e expressões familiares tem uma aceitação maior entre usuários;
- simplicidade nas estruturas das tarefas: as tarefas devem ser feitas da forma mais simples possível, o usuário não deve ter que planejar como vai fazer determinada ação;
- equilíbrio entre controle e liberdade do usuário: o sistema deve restringir as ações dos usuários leigos e dar liberdade para o usuário avançado. Evitando erros dos inexperientes e dando eficiência ao expert;
- consistência e padronização: ações diferentes nunca podem ser parecidas e ações semelhantes devem ser realizadas de forma mais idêntica possível;
- promovendo a eficiência do usuário: o sistema nunca deve interromper o usuário desnecessariamente e para usuários experientes precisa fornecer atalhos e comandos ocultos eficientes;
- antecipação: o software deve prever as ações que o usuário costuma realizar, definindo padrões futuros;
- visibilidade e reconhecimento: o usuário deve sempre saber o caminho que percorreu para chegar naquele ponto e não ser o responsável por lembrar disso;
- conteúdo relevante e expressão adequada: o sistema deve apresentar um diálogo fácil, semelhante ao de uma pessoa. Sempre levando em conta a quantidade e a qualidade da informação;
- projeto para erros: um sistema bem projetado deve prever as ações do usuário, evitando que ele cometa equívocos, e dando a possibilidade de se recuperar e evitar que erros irreversíveis ocorram.

## Design

A razão para se pensar em design é a necessidade da satisfação do cliente e isso só
vai ser alcançado quando as pessoas conseguirem compreender que todo usuário possui
necessidades, desejos e sua própria percepção deste mundo.

### Metáforas e o design de interfaces

Metáforas tornam a rotina do usuário mais leve e agradável. Pois criam familiaridade e
facilitam a compreensão de uma interface. Ex.: lixeiras, pastas, livros, calculadora,
icon de zip.

Na primeira vez que um usuário entra em contato com o sistema, é necessário que ele
reconheça elementos visuais da realidade para conseguir reconhecer funcionalidade ou
pelo menos saber por onde começar.

### Design participativo

Essa técnica coloca os usuários finais do produto como participantes na fase de
elaboração, equanto outras metologias só os chamam na fase de testes.

A junção e adaptação de práticas e princípios visam solucionar problemas por meio de
soluções estratégicas dadas pelos próprios utilizadores do sistema. 


