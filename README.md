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

## The _led_ library
This library intends to help in the management of Led lights.

### led_off function:

The objective of this function is to turn a Led light off. Simply pass as argument the position of the pin.

### led_on function:

Similar to the led_off function, the objective of this function is to turn a Led light on. Simply pass as argument the position of the desired pin.

### blink_led function:

This function objective is to blink the Led light in regular periods of time (delay). The first argument is the position of the Led pin in the arduino, and the second is the delay, in milliseconds.

-----------------

## The _button_ library
This library intends to help in the management of buttons.

### set_button function:

The objective of this function is to set a pin as button. Before working with the other function, is necessary to use this function passing the position of the pin as argument.

### isbuttonpressed function:

The objective of this function is to see if a button is pressed. There are two modes, the button which waits to be released so the action can happen, and the button which don't need to, and as soon as it's pressed the action will take place. The first argument in the function is the pin of the button, and the second argument is if it will wait the release or not, this argument value will be 0 if you don't want the button to wait before the action takes place and 1 else.

-----------------

## The _7segment_ library
This library intends to help in the use of 7 segment displays.

### definepin function:

The objective of this function is to set the pins in the arduino as pins in the 7 segment display, ranging from pin a to pin h, as follows, in which a is the first (top) bar in the 7 segment, g is the last one (in the middle) and h is the dot. The first argument of this function is the position of the desired pin in the arduino and the second argument is the pin which it will be related in the 7 segment (a-h).

### display7seg function:

The objective of this function is to show a desired hex digit (0-f) in the 7 segment display. Just pass as argument the wanted value. Its necessary to configure all the pins in the _definepin_ function before using this one.

-----------------

## The _distancesensor_ library
This library intends to help in the use of Ultrasonic Sensor HC-SR04 with arduino.

### definedistpins function:

The objective of this function is to configure the passed pins as Trigger and Echo. The first argument is the position of the Trigger pin and the second argument is the position of the Echo pin. It is necessary to configure these pins before using the next function of the library.

### distanceSensor function

The objective of this function is to return the distance (in cm) of the sensor to some object in front of it. Configure the pins as echo and trigger before using this function, and pass them (first trigger second echo) as arguments. The return value of the function will be the distance in cm.
