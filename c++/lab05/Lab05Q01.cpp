/*
Bom, dentro de um �nico bloco n�o teria diferen�a entre as declara��es das vari�veis.
Mas como n�o foi espec�ficadp aonde essas declara��es estariam, deve atentar-se a alguns detalhes.

- se a declara��o "int x;" for no escopo global e "x = 1" for em um escopo local, a vari�vel "x" come�ar� com o valor "0" e n�o "1", portanto
se a inicializa��o com "1" for algo importante pode da error;
- J� "int y = 1;" n�o tem muito o que da errado, se a ideia � iniciar com o valor "1", pois, n�o importa o escopo ela vai inicializar com o
valor "1";
- Vale lembrar que se quando delaradas de forma global o c�digo pode apresentar bugs com mais frequ�ncia, pois, se forem modificadas
em algum outro lugar e por algum acaso n�o ocorreu de forma esperada a ordem de execu��o do c�digo, pode apresentar incoer�ncias.

Por esse contexto, em que eu n�o sei onde as vari�veis est�o sendo criadas e inicializadas, acho mais seguro o met�do "2".
*/

