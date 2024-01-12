**Escada do Jogo Mario - Versão 1
Este código em C representa a implementação da versão 1 da escada do jogo Mario, como parte dos exercícios do curso CS50 de Harvard.

Pré-requisitos
CS50 Library: A biblioteca CS50 é utilizada para entrada/saída e validação de dados.

Compilador C: Um compilador C é necessário para executar o código. Recomenda-se o uso de GCC ou outro compilador C compatível.

Como compilar e executar
Abra um terminal.

Navegue até o diretório onde o arquivo escada_mario_v1.c está localizado.

Compile o código usando o seguinte comando:

bash
Copy code
gcc -o escada_mario_v1 escada_mario_v1.c -lcs50
Execute o programa compilado:

bash
Copy code
./escada_mario_v1
Insira a altura desejada quando solicitado.

Descrição do Código
get_height_int: Função para obter a altura da escada, garantindo que o valor esteja entre 1 e 8.

valuei: Função que imprime espaços antes dos blocos de construção # para criar a escada.

main: Função principal que utiliza as funções anteriores para construir a escada do jogo Mario versão 1.

Exemplo de Uso
bash
Copy code
$ ./escada_mario_v1
Height: 5
    #
   ##
  ###
 ####
#####
Este programa solicitará a altura da escada e imprimirá a escada correspondente conforme especificado na versão 1 do jogo Mario do curso CS50 de Harvard.
