<h1>Escada do Jogo Mario - Versão 1 </h1>
Este código em C representa a implementação da versão 1 da escada do jogo Mario, como parte dos exercícios do curso CS50 de Harvard.

<h2>Pré-requisitos</h2>
<li>CS50 Library: A biblioteca CS50 é utilizada para entrada/saída e validação de dados.</li>

<li>Compilador C: Um compilador C é necessário para executar o código. Recomenda-se o uso de GCC ou outro compilador C compatível.</li>

<h3>Como compilar e executar</h3>
<ol>
    <li>Abra um terminal</li>
    <li>Navegue até o diretório onde o arquivo escada_mario_v1.c está localizado.</li>
    <li>Compile o código usando o seguinte comando:</li>
    <strong>gcc -o escada_mario_v1 escada_mario_v1.c -lcs50</strong>
    <li>Execute o programa compilado</li>
    <strong>./escada_mario_v1</strong>
    <li>Insira a altura desejada quando solicitado.</li>
</ol>

<h3>Descrição do Código</h3>
<li>get_height_int: Função para obter a altura da escada, garantindo que o valor esteja entre 1 e 8.</li>

<li>valuei: Função que imprime espaços antes dos blocos de construção # para criar a escada.</li>

<li>main: Função principal que utiliza as funções anteriores para construir a escada do jogo Mario versão 1.</li>
<br>
<p>Este programa solicitará a altura da escada e imprimirá a escada correspondente conforme as diretrizes do exercicio "mario" do CS50 de Harvard.</p>
