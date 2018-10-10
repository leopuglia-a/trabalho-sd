Primeiro trabalho de Sistemas Digitais


Manipular os pinos de E/S digitais

Obs.: os pinos devem ser mapeados pela numeração fornecida pelo Arduino

    Configurar o pino como entrada ou saída;
    Setar o pino com o valor HIGH (1) ou LOW (0);
    Ler o valor do pino;
    Ativar o pull-up (quando o pino for entrada);

Geração de onda nos pinos

Obs.: se o pino escolhido pelo usuário não fornecer geração de onda, o comportamento deverá ser de uma escrita digital simples

    Escrever onda quadrada em um pino de saída (que suporte essa função) com frequência determinada pelo usuário;
    Escrever onda PWM em um pino de saída (que suporte essa função) com ciclo-ativo determinado pelo usuário;

Delay com tempo variável

Obs.: implementar com laço em assembly para não utilizar Timer/Counter

    Rotina de delay com precisão de microssegundo;
    Rotina de delay com precisão de milissegundo;

Interface para utilização de LEDs:

    Rotina para configurar um pino como um LED;
    Rotina para acender o LED;
    Rotina para apagar o LED;
    Rotina para alterar o estado do LED;
    Rotina para piscar (deixar aceso) o LED por um tempo;

Interface para utilização de botões:

    Rotina para configurar um pino como um botão com pull-up;
    Existem duas configurações: botão que aguarda ser solto ou não.
    Função para verificar se o botão está pressionado;

Trabalhar com o display 7-segmentos:

    Configurar o display para trabalhar com os pinos especificados (a,b,c,d,e,f,g,h);
    Escrever um dígito hexadecimal no display;

Trabalhar com o sensor de distância (ultrassom):

    Configurar o sensor para trabalhar com os pinos especificados (trigger e echo);
    Medir distância observada (ping);
