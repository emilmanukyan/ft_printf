# ft_printf

## Description

ft_printf is a lightweight implementation of the standard C library's printf function. It provides basic formatting capabilities for printing strings, characters, integers, and memory addresses. This mini version of printf supports the following format specifiers:

## Supported Format Specifiers

+ `%c` Prints a single character.
+ `%s` Prints a string (as defined by the common C convention).
+ `%p` The void * pointer argument has to be printed in hexadecimal format.
+ `%d` Prints a decimal (base 10) number.
+ `%i` Prints an integer in base 10.
+ `%u` Prints an unsigned decimal (base 10) number.
+ `%x` Prints a number in hexadecimal (base 16) lowercase format.
+ `%X` Prints a number in hexadecimal (base 16) uppercase format.
+ `%%` Prints a percent sign.

## Usage
### Function Prototype

```
int ft_printf(const char *format, ...);
```
### Example Usage

```
int main() {
    ft_printf("This is a string: %s\n", "Hello, world!");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Uppercase Hexadecimal: %X\n", 255);
    ft_printf("Pointer Address: %p\n", (void*)0x12345678);
    ft_printf("Percent Sign: %%\n");
    ft_printf("Unsigned Decimal: %u\n", 12345);
    
    return 0;
}
```

#### For compiling all mandatory functions:
```make```

#### Cleaning all binary (.o) and executable files (.a):

```
make clean
make fclean
```
#### Or just
``` make fclean ```

## Limitations

+ Mini Printf does not support all features of the standard printf function.
+ It does not support precision or width specifiers.
+ Floating point numbers (`%f`, `%e`, `%g`) are not supported.

