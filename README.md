*This project has been created as part of the 42 curriculum by mamehri.*

# Libft

## Description

**Libft** is my own C library, written from scratch as the first project of the 42 curriculum.

- **Goal:** re-implement common C standard library functions, and add useful extra helpers, so they can be reused in all future 42 projects.
- **Language and rules:** C, compiled with `-Wall -Wextra -Werror`, following the 42 Norm. Only `malloc`, `free` and `write` are allowed as external functions.
- **Output:** a static library, `libft.a`.

### Content

- **Part 1 – libc re-implementations**
  - Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
  - Strings: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_atoi`
  - Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Part 2 – additional functions**
  - `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
  - File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Part 3 – linked lists** (`t_list`)
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`


## Instructions
 
### Compilation
 
```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + make
```
 
### Using the library in another project
 
1. Copy `libft.a` and `libft.h` into project (or reference their path).
2. Include the header in source files:
```c
#include "libft.h"
```
 
3. Compile and link against the library:
```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```
 
### Usage example
 
```c
#include "libft.h"
 
int main(void)
{
    char *str = ft_strjoin("Hello, ", "42!");
 
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```
 
## Detailed description of the static library `libft.a`
 
### What is a static library?
 
- **Definition:** an archive (`.a` file) that bundles many compiled object files (`.o`) into one file.
- **Static linking:** at link time, the linker copies the code it needs from the archive directly into the final executable.
- **Result:** the executable is self-contained and does not need `libft.a` at runtime.
- **Compared to a dynamic library (`.so`):** a dynamic library is loaded when the program runs.
### How `libft.a` is built
 
1. **Compile:** each `.c` file is compiled to an object file, without linking.
   - Command: `cc -Wall -Wextra -Werror -c file.c -o file.o`
   - Each `.o` contains machine code for one source file.
2. **Archive:** all `.o` files are packed into `libft.a` with `ar rc libft.a *.o`.
   - `r`: insert files into the archive, replacing older versions.
   - `c`: create the archive if it does not exist, without warning.
3. **Rebuild only what changed:** the Makefile rebuilds an `.o` file only when its `.c` file or the header changed, and does not relink if nothing changed.
### What is inside `libft.a`
 
- **One object file per source file:** each `ft_*.c` file becomes one member of the archive.
- **Symbols:** every function from `libft.h` is exported with its `ft_` prefix, which avoids name conflicts with the standard library.
- **Header:** `libft.h` is *not* inside the archive. It holds the prototypes, the `t_list` structure and the includes, and must be included by any project using the library.

## Technical choices
 
- **Static library:** Created using `ar rc` to archive compiled object files into libft.a.
- **Behavior matches libc:** Functions aim to reproduce the expected behavior of their standard counterparts, including relevant edge cases.
- **Memory safety:** Functions that allocate memory check for allocation failure and handle it according to their specifications.
- **Overlap handling:** `ft_memmove` handles overlapping buffers by choosing the copy direction.
- **Lists:** `ft_lstclear` and `ft_lstdelone` take a `del` function so any content type can be freed correctly.

## Resources

### Classic references

- Linux man pages (`man <function>`) for every re-implemented libc function
- *The C Programming Language*, Kernighan & Ritchie
- [cppreference.com – C standard library](https://en.cppreference.com/w/c)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [42 Norminette](https://github.com/42school/norminette)

### Use of AI

AI was used as a learning and checking aid, not to write the project for me.

- **Debugging:** explaining the cause of bugs and edge cases, without giving corrected code.
- **Makefile:** understanding errors and how Make works.
- **Implementation:** The library functions were implemented by me, with AI used to support my understanding rather than to generate their implementations.