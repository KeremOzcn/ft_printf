<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_get_next_line.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/evaluated-10%20%2F%2012%20%2F%202024-success?color=%2312bab9&style=flat-square" />
	<img src="https://img.shields.io/badge/score-100%20%2F%20100-success?color=%2312bab9&style=flat-square" />
	<a href='https://www.linkedin.com/in/kerem0zcn' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
</p>
## Project Description

The `ft_printf` project aims to reimplement the standard `printf` function in C. This project seeks to replicate various formatting options and behaviors of the `printf` function, providing a customizable and in-depth version to enhance understanding.

## File Structure

- `ft_printf.c`: Contains the main implementation of the `ft_printf` function.
- `ft_printf_utils.c`: Contains the implementation of helper functions.
- `ft_printf.h`: Contains the main function prototypes and macro definitions.

## Usage

### Compilation

To compile the project, use the following commands:

```bash
gcc -Wall -Wextra -Werror -c ft_printf.c ft_printf_utils.c
gcc -o ft_printf ft_printf.o ft_printf_utils.o
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You have %d new messages.\n", "Kerem", 5);
    return (0);
}
```

This code will output the following to the console:

```
Hello, Kerem! You have 5 new messages.
```

## Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Parameters
- `format`: The format string defining text and formatting options.
- `...`: A variable number of arguments specifying values for the formatting options.

### Return Value
- Returns the number of characters written.
- In case of an error, returns a negative value.

## Supported Formats

`ft_printf` supports the following:
- `%c`: A single character.
- `%s`: A null-terminated string.
- `%d` or `%i`: A decimal integer.
- `%u`: An unsigned decimal integer.
- `%x` or `%X`: A hexadecimal integer (lowercase/uppercase).
- `%%`: A percentage symbol.

## Contributions

To contribute, please create a "pull request" and share your project. All contributions and feedback are welcome.


