# ft_printf

`ft_printf` is a custom implementation of the standard C library function `printf`. It provides formatted output conversion, handling various data types and formats as specified by the format string.

## Features

- Handles format specifiers for:
  - `%d` or `%i`: Signed decimal integer
  - `%s`: String
  - `%p`: Pointer address
  - `%u`: Unsigned decimal integer
  - `%x`: Unsigned hexadecimal integer (lowercase)
  - `%X`: Unsigned hexadecimal integer (uppercase)
  - `%c`: Character
  - `%%`: Percentage symbol

## Usage

### Function Prototype

```c
int ft_printf(const char *form, ...);
```
## Example

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return 0;
}
```
## Output
```c
Hello, world!
Number: 42
Hex: ff
```
## Implementation Details

### `ft_printf`
This is the main function that takes a format string and a variable number of arguments, processes each format specifier, and prints the corresponding values.

### `ft_process`
This function iterates through the format string, processes each character, and handles the format specifiers by calling `ft_cases`.

### `ft_cases`
This function handles different format specifiers and calls the appropriate function to process each argument type.

## Helper Functions

- **`ft_putnbr`**: Prints a signed integer.
- **`ft_putstr`**: Prints a string.
- **`ft_putptr`**: Prints a pointer address.
- **`ft_putunbr`**: Prints an unsigned integer.
- **`ft_putxnbr`**: Prints an unsigned hexadecimal integer (lowercase).
- **`ft_put_xxnbr`**: Prints an unsigned hexadecimal integer (uppercase).
- **`ft_putchar`**: Prints a single character.

## Error Handling

- The function returns `-1` if the format string is `NULL`.
- It handles memory allocation failures and ensures that dynamic memory is properly managed to avoid leaks.

