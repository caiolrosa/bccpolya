# bccpolya

* Descrição do problema

Desenvolver uma função em C que calcule a aproximção da raiz quadrada de um número real.
    
    
* Apresentação da solução em linguagem matemática

Foi utilizado o método de Herão para a resolução do problema. O qual diz que dada uma raiz quadrada de um número n e assumindo valor1 como uma aproximação inicial, temos:

	valor2 = (valor1 + (n / valor1)) / 2

Nesta formula o valor1 é um número arbitrário (aplicamos o valor que quisermos) e o valor2 guardará o valor1 após o calculo da formula. Realizamos a divisão por dois, pois no cálculo da raiz quadrada precisamos que um numero, neste caso valor1, multiplicado por ele mesmo resulte em "n", fazendo a divisão por dois garantimos que sempre multiplicaremos um numero por ele mesmo para chegarmos na raiz.

A cada iteração desse algoritmo aproxima-se do valor da raiz, segue o exemplo.

Queremos descobrir a raiz de 3, neste exemplo o valor1 será 1.0, então pela formula temos: 
```
ITERAÇÃO 1
valor2 = (1 + (3/1)) / 2
valor2 = 4 / 2
valor2 = 2

Fazendo mais iterações do algoritmo teremos:

ITERAÇÃO 2
valor2 = (2 + (3/2)) / 2
valor2 = 3,5 / 2
valor2 = 1,75

ITERAÇÃO 3
valor2 = (1,75 + (3 / 1,75)) / 2
valor2 = 3,464285714 / 2
valor2 = 1,732142857
```

Pelo exemplo percebemos que na iteração 1, o valor2 guardou o novo valor de valor1 que é 2. Utilizamos então o novo valor1 na segunda iteração e ao final teremos um novo valor1 que será novamente armazenado em valor2 e 	assim sucessivamente até que se obtenha o resultado final.


* Apresentação da solução em Portugues Estruturado

```
  algoritmo "raiz quadrada"

  função mod(a : real, b : real) : real
  Inicio
  resultado : real;
  resultado := a - b;
  se(resultado < 0)
  resultado = resultado * -1;
  fim-se
  retorne resultado;
  Fim

  função raizq(n : real)
  Inicio
  precisao : real;
  precisao := 0.01;

  valor1 : real;
  valor 1 := 1.0;

  valor2 : real;
  valor2 := 1.0;

  faça
  valor2 = valor1;
  valor1 = (valor1 + (n/valor1))/2;     
  enquanto (mod(valor1, valor2) > precisao);

  retorne valor1;
  Fim

  Inicio
  real : n;
  leia(n);

  escreva("", raizq(n));
  Fim
```
* Apresentação de solução em Fluxograma

	![Fluxograma](https://github.com/caiolrosa/bccpolya/blob/master/fluxograma.png)

* Justificativa do uso do termo "polya" no nome do repositório

George Polya foi um matemático que escreveu cinco livros ("How to solve it") falando sobre a resolução e modelagem de problemas, deste dado tiramos o nome do repositório.
