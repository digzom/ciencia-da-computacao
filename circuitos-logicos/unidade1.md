# Sistemas Digitais e Analógicos

Utilizamos o termo **Sistema Digital** quando há uma combinação de dispositivos projetados para lidar com informações lógicas ou com quantidades físicas representadas de forma digital, ou seja, as quantidades que só podem asssumir valores discretos. Tipo 0 e 1 na computação.

Ao falarmos de **Sistema Analógico**, estamos falando de dispositivos que podem manipular quantidades físicas representadas de maneira analógica, que podem variar dentro de um intervalo. Um exemplo de sistema analógico é o receptor de rádio que pode trabalhar com frequências (quantidade física) de zero até milhares.

### Vantagens dos Sistemas Digitais

- Mais fáceis de projetar
    - Os circuitos utilizados são curcuitos de chaveamento em que os valores exatos de tensão ou corrente não são tão importantes, apenas o intervalo no qual estão presentes (ALTO ou BAIXO). Seria como porta lógica TRUE ou FALSE. Dentro de certo intervalo seria TRUE e dentro de outro intervalo seria FALSE.
- Fácil armazenamento de informação
    - Fato alcançado por cirtcuitos de chaveamento especiais que são capazes de capturar a informação e guardá-la pelo tempo que for necessário
- Maior exatidão e precisão
    - Os sistemas digitais podem manipular quantos dígitos de precisão (ponto flutuante) forem necessários, bastando adicionar um número maior que circuitos de chaveamento. Circuitos analógicos são dependentes de variações intríscecas aos componentes eletrônicos do sistema. Também são afetados por flutuações randômicas (ruídos).
- A operação do sistema pode ser programada facilmente
    - É bastante simples programar sistemas digitais para que o mesmo comporte-se de uma determinada maneira segundo um conjunte de instruções. Em sistemas analógicos isso também é possível, mas é consideravelmente mais difícil, uma vez que a complexidade das operações é maior e disponibilidade de operações é menor.
- Menos afetados por ruídos
    - Já que os valores precisos das tensões são menos importantes, ruídos influenciam bem menos uma vez que para computar um valor lógico precisamos apenas estar dentro de um intervalo. Desde que o ruído não seja tão grande a ponto de dificultar demais a distinção entre os níveis lógicos, tudo correrá bem.
- Mais fácil de integrar num circuito integrado
    - Circuitos analógicos são mais caros (capacitores de alto valor, resistores de precisão, indutores, transformadores, etc). Circuitos digitais são mais compactos.

Nota: você pode criar um calculadora com circuitos digitais ou com circuitos analógicos.

### Desvantagens de sistemas digitais

- Existem coisas que precisam de alta precisão, como medição de temperatura, velocidade, pressão, posicionamento, etc. Para tudo isso é necessário um sistema analógico. Quando fazemos de forma digital, esses valores são aproximações digitais de uma grandeza analógica.
- Para termos a vantagem da leitura digital de medições analógicas, precisamos converter as leituras analógicas para o formato digital (criando uma representação digital), processar a informação digitalizada e depois converter o resultado de volta à forma analógica.
    - Ter que fazer essa conversão pode ser uma desvantagens pois existe um cursto associado. Em certos sistemas, esse custo/tempo gasto não pode existir.

É comum observar em sistemas as Técnicas Analógicas e Digitais, tirando proveito das vantagens de cada um e balanceando suas desvantagens. O desafio é sempre identificar em que parte cada técnica será mais vantajosa.

## Circuitos Digitais e Níveis lógicos

Os **Circuitos Digitais** são sempre projetados para produzir degraus de tensão que estejam dentro de um certo intervalo predeterminado para que seja representado entre os binários 0 e 1. Um circuito digital sempre vai processar apenas 0 e 1 e sempre vai **responder** com esses mesmos valores. Dentro de um intervalo de tensão X será 0 e nada mais que isso será distinto e o mesmo acontece com o 1.

### Lógica do Circuito

Cada tipo de circuito digital obedece à regras lógicas. Por isso, podemos também chamar Circuitos Digitais de Circuitos Lógicos.

### Formas de Ondas Digitais

Formas de Ondas Digitais consistem em níveis de tensão que alternam entre ALTO e BAIXO.

O **pulso positivo** é gerado quando a tensão passa do nível BAIXO para o ALTO e depois retorna para o BAIXO novamente.

Já o **pulso negativo** é o exato oposto: passa do ALTO para o BAIXO e retorna para o ALTO.
