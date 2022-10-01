/*
Bom, dentro de um único bloco não teria diferença entre as declarações das variáveis.
Mas como não foi específicadp aonde essas declarações estariam, deve atentar-se a alguns detalhes.

- se a declaração "int x;" for no escopo global e "x = 1" for em um escopo local, a variável "x" começará com o valor "0" e não "1", portanto
se a inicialização com "1" for algo importante pode da error;
- Já "int y = 1;" não tem muito o que da errado, se a ideia é iniciar com o valor "1", pois, não importa o escopo ela vai inicializar com o
valor "1";
- Vale lembrar que se quando delaradas de forma global o código pode apresentar bugs com mais frequência, pois, se forem modificadas
em algum outro lugar e por algum acaso não ocorreu de forma esperada a ordem de execução do código, pode apresentar incoerências.

Por esse contexto, em que eu não sei onde as variáveis estão sendo criadas e inicializadas, acho mais seguro o metòdo "2".
*/

