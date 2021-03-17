<h1 align="center" >★Printf Proyect★</h1>

 **Code Language**
<p align="left">
<code><img src="https://github.com/abranhe/programming-languages-logos/blob/master/src/c/c_48x48.png" alt="C" width="40" height="40" /></code>&nbsp;
</p>

## Description
This is a team project of Holberton School.
0x11. C - printf

Write our own printf function.

## Prototype

<details>
  <summary>:zap: Content of: func_handlers_1.c</summary>
  <h3 align="left" > void print_str</h3>
  <h3 align="left" > void _puts</h3>
  <h3 align="left" > int print_number</h3>
  <h3 align="left" > int change_to_binary</h3>
  <h3 align="left" > int print_number_uns</h3>
</details>
  
  
<details>
  <summary>:zap: Content of: func_handlers_2.c</summary>
  <h3 align="left" > int print_number_uns</h3>
  <h3 align="left" > int _strlen</h3>
  <h3 align="left" > void _print_rev_recursion</h3>
</details>
  

<details>
  <summary>:zap: Content of: func_handlers_3_l.c</summary>
  <h3 align="left" > int print_number_uns_l</h3>
</details>


<details>
  <summary>:zap: Content of: prints_data_t_1</summary>
  <h3 align="left" > int print_char</h3>
  <h3 align="left" > int print_char_2</h3>
  <h3 align="left" > int print_int</h3>
  <h3 align="left" > int print_to_binary</h3>
  <h3 align="left" > int print_percent</h3>
</details>

<details>
  <summary>:zap: Content of: prints_data_t_2</summary>
  <h3 align="left" > int print_uns</h3>
  <h3 align="left" > int print_octal</h3>
  <h3 align="left" > int print_hexa_low</h3>
  <h3 align="left" > int print_hexa_upper</h3>
  <h3 align="left" > int print_str_non_prin</h3>
</details>

<details>
  <summary>:zap: Content of: prints_data_t_3</summary>
  <h3 align="left" > int print_str_rev</h3>
  <h3 align="left" > int print_rot_13</h3>
  <h3 align="left" > static unsigned long _pow</h3>
  <h3 align="left" > int print_p</h3>
</details>

<details>
  <summary>:zap: Content of: print_data_t_4_long.c</summary>
  <h3 align="left" > int print_int_l</h3>
  <h3 align="left" > int print_uns_l</h3>
  <h3 align="left" > int print_octal_l</h3>
  <h3 align="left" > int print_hexa_low_l</h3>
  <h3 align="left" > int print_hexa_upper_l</h3>
</details>

<details>
  <summary>:zap: Content of: print_data_t_5_short.c</summary>
  <h3 align="left" > int print_int_h</h3>
  <h3 align="left" > int print_uns_h</h3>
  <h3 align="left" > int print_octal_h</h3>
  <h3 align="left" > int print_hexa_low_h</h3>
  <h3 align="left" > int print_hexa_upper_h</h3>
</details>



<details>
  <summary>:zap: Content of: aux_funcs.c</summary>
  <h3 align="left" > int _putchar</h3>
  <h3 align="left" > int num_lenght</h3>
  <h3 align="left" > int num_lenght_uns</h3>
</details>


# Tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
* Write a function that produces output according to format.
  • c : character
  • s : String of characters
  • % : character
### 1. Education is when you read the fine print. Experience is what you get if you don't
* Handle the following conversion specifiers:
  • d : signed decimal integer
  • i : input into an integer

### 2. Just because it's in print doesn't mean it's the gospel
* Create a man page for your function

### 3. With a face like mine, I do better in print
* Handle the following conversion specifiers:
  • b : converted to binary

### 4. What one has not experienced, one will never understand in print
* Handle the following conversion specifiers:
  • u : Unsigned decimal integer
  • o : Signed octal
  • x : Unsigned hexadecimal integer
  • X : Unsigned hexadecimal integer (capital letters)

### 5. Nothing in fine print is ever good news
* Use a local buffer of 1024 chars in order to call write as little as possible.

### 6. My weakness is wearing too much leopard print
* Handle the following custom conversion specifier:
  • S : prints the string
  • Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### 7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
* Handle the following conversion specifier:
  • p : int input is converted to a pointer address

### 8. The big print gives and the small print takes away
* Handle the following flag characters for non-custom conversion specifiers:
  • \+ : Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers.
  • \- : Left-justify within the given field width; Right justification is the default (see width sub-specifier).
  • space :If no sign is going to be written, a blank space is inserted before the value.
  • \# : Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow. By default, if no digits follow, no decimal point is written. Used with g or G the result is the same as with e or E but trailing zeros are not removed

### 9. Sarcasm is lost in print
* Handle the following length modifiers for non-custom conversion specifiers:
  • l : The argument is interpreted as a long int or unsigned long int for integer specifiers (i, d, o, u, x and X), and as a wide character or wide character string for specifiers c and s.
  • h : The argument is interpreted as a short int or unsigned short int (only applies to integer specifiers: i, d, o, u, x and X).

### 10. Print some money and give it to us for the rain forests
* Handle the field width for non-custom conversion specifiers.

### 11. The negative is the equivalent of the composer's score, and the print the performance
* Handle the precision for non-custom conversion specifiers.

### 12. It's depressing when you're still around and your albums are out of print
* Handle the 0 flag character for non-custom conversion specifiers.

### 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
* Handle the - flag character for non-custom conversion specifiers.

### 14. Print is the sharpest and the strongest weapon of our party
* Handle the following custom conversion specifier:
  • r : prints the reversed string

### 15. The flood of print has turned reading into a process of gulping rather than savoring
* Handle the following custom conversion specifier:
  • R : prints the rot13'ed string

### 16. * 
* All the above options work well together.



## Examples

* ```_printf("Hello, World\n")``` *prints "Hello, World", followed by a new line*
* ```_printf("My name is \"%s\".\nIt's a pleasure to meet you." "John")``` *prints*
*  *"My name is "John".*
*  *It's a pleasure to meet you."*
* ```_printf("Hello, World\n")``` *prints "Hello, World", followed by a new line*
* ```_printf("%s", "World")``` *prints "World"*
* ```_printf("And the number is: %d", 777)``` *prints "And the number is: 777"*


## Authors 

* **Diego Susviela** - [DiegoSusviela](https://github.com/DiegoSusviela)
* **Gabriel Ferreira** - [elyoguictm](https://github.com/elyoguictm)
