# atmega328p Libraries Pack

###### **This pack of libraries was made with the intention of making the life of atmega328p microcontroller programmers easier**

-----------------

## The _setpin_ library
This library intends to manipulate the I/O digital pins

### finalpos function:

The objective of this function is to return the position of the pin according to the position passed as argument.

### setpinmode function:

The objective of this function is to set a pin as input or output. The first argument of the function is the mode wanted (0 for input and 1 for output), and the second argument is the position of the pin in the arduino.

### setpinvalue function:

The objective of this function is to set a pin value as high or low. The first argument is the value (0 for low and 1 for high), and the second argument is the position of the pin in the arduino.

-----------------

## The _delay_ library
This library intends to implement precise delay routines, written in assembly.

### u_delay function:

The objective of this function is to implement a microsecond delay. The unique argument is the amount of microseconds wanted.

### m_delay function:

The objective of this function is to implement a millisecond delay. The unique argument is the amount of milliseconds wanted.

-----------------

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
