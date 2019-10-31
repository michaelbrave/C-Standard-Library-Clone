# C Standard Library Clone - 42 ft_libft

### Table Of Contents
* [Introduction](#introduction)
* [Objective](#objective)
* [Instructions](#instructions)
* [Dependencies](#dependencies)
* [Functionality](#functionality)
* [Credits](#credits)
* [Disclaimer](#disclaimer)
* [Keep In Touch](#keep-in-touch)

## Introduction  

#### About This Project
This project is our first official project at my school [42][42 Silicon Valley]. The project is to create our own implementation of the standard C library. This serves two purposes, to help us learn the inner workings of the language and to use and implement in all future C projects while attending. 

#### About Me
I'm Mike Brave and I'm a programming student at [42][42 Silicon Valley]. I'm specializing in Procedural Generation and Creative Machine Learning. I also do a lot with mobile apps, UX Design and low level C programming. I wrote the curriculim on swift for the school.  

#### About 42  
[42][42] is a free, non profit, project-based, peer-to-peer learning coding school. It originated in France and now has over 20 campuses all over the world. More information can be found [here][42] 

## Objective  
Reverse engineer the following functions. Most are from the standard C library and a select others that would be considered useful in both learning and in future building. 

The Assignment is broken up into a part 1 and part 2, the further divisions are my own for maintance purposes. 

#### Part 1

**"Is" Group** 
| Function | Description |
| --- | --- |
| [**ft\_isalpha()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isalpha.c) |The ft\_isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| [**ft\_isdigit()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isdigit.c) | The ft\_isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only: '0' - '9'.|
| [**ft\_isalnum()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isalnum.c) | The ft\_isalnum() function tests for any character for which ft\_isalpha(3) or ft\_isdigit(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.|
| [**ft\_isascii()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_ascii.c) | The ft\_isascii() function tests for an ASCII character, which is any character between 0 and decimal  127 inclusive.|
| [**ft\_isprint()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isprint.c) | The ft\_isprint() function tests for any printing character, including space (' ').  The value of the argument must be representable as an unsigned char or the value of EOF.|

**"Str 1" Group**
| Function | Description |
| --- | --- |
| [**ft\_strlen()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strlen.c) | The ft\_strlen() function computes and returns the length of the string s.|
| [**ft\_strdup()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strdup.c) | The ft\_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned.|
| [**ft\_strcpy()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strcpy.c) | The ft\_strcpy() function copies the string src to dst (including the terminating '\0' character.)|
| [**ft\_strncpy()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strncpy.c) |The ft\_strncpy() function copies at most len characters from src into dst.  If src is less than len characters long, the remainder of dst is filled with '\0' characters.|
| [**ft\_strcat()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strcat.c) | The ft\_strcat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result.|
| [**ft\_strncat()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strncat.c) | The ft\_strncat() function appends a copy of the null-terminated string s2 to the end of the null-terminated string s1. The ft\_strncat() function appends not more than n characters from s2, and then adds a terminating '\0'.|
| [**ft\_strlcat()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strlcat.c) | The ft\_strlcat() appends string src to the end of dst.  It will append at most maxlen - strlen(dst) - 1 characters.  It will then NUL-terminate, unless maxlen is 0 or the original dst string was longer than maxlen. maxlen should be the size of the destination string buffer dst plus the space for the nul-terminator. Returns the total length of the string it tried to create.|
| [**ft\_strchr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strchr.c) |The ft\_strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| [**ft\_strrchr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strrchr.c) | The ft\_strrchr() function locates the last occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.|
| [**ft\_strstr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strstr.c) | The ft\_strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.|
| [**ft\_strnstr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strnstr.c) | The ft\_strnstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack, where not more than len characters are searched. Characters after the '\0' are not searched. If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.|
| [**ft\_strcmp()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strcmp.c) | The ft\_strcmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than,equal to, or less than the string s2.  The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strncmp()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strcmp.c) | The ft\_strncmp() function lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|

**"mem 1" Group**
| Function | Description |
| --- | --- |
| [**ft\_memset()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memset.c) | The ft\_memset() function writes len bytes of value c (converted to an unsigned char) to the string b. Returns it's first argument.|
| [**ft\_bzero()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_bzero.c) | The ft\_bzero() function writes n zeroed bytes to the string s.  If n is zero, ft\_bzero() does nothing.|
| [**ft\_memcpy()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memcpy.c) | The ft\_memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. Returns the original value of dst.|
| [**ft\_memccpy()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memccpy.c) |The ft\_memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned. Otherwise, n bytes are copied and a null pointer is returned.|
| [**ft\_memmove()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memmove.c) | The ft\_memmove() function copies len bytes from strin src to dst. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of dst. |
| [**ft\_memchr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memchr.c) | The ft\_memchr() function locates the first occurence of c (converted to an unsigned char) in string s. Returns a pointer to the byte located, or NULL if no such byte exists within n bytes.) |
| [**ft\_memcmp()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memcmp.c) | The ft\_memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. Returns 0 if the first two strings are identical, otherwise returns the difference between the first two bytes (treated as unsigned char values). Zero-length strings are always identical.|

**"misc 1" Group**
| [**ft\_atoi()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_atoi.c) | ft\_atoi() converts the initial portion of the string pointed to by str to int representation and returns the int.|
| [**ft\_toupper()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_toupper.c) | The ft\_toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF. If the argument is a lower-case letter, the ft\_toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.|
| [**ft\_tolower()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_tolower.c) | The ft\_tolower() function converts an upper-case letter to the correspond-ing lower-case letter.  The argument must be representable as an unsigned char or the value of EOF.|

#### Part 2

**"Puts" Group**
| Function | Description |
| --- | --- |
| [**ft\_putchar()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putchar.c) | The ft\_putchar() function outputs the character c to the standard output.|
| [**ft\_putstr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putstr.c) | The ft\_putstr() function outputs a string to the standard output.|
| [**ft\_putendl()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putendl.c) | The ft\_putendl() function outputs a string to the standard output, followed by a newline.|
| [**ft\_putnbr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putnbr.c) | The ft\_putnbr() function outputs the integer n to the standard output|
| [**ft\_putchar\_fd()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putchar_fd.c) | The ft\_putchar\_fd() function outputs the character c to the specified file descriptor. A file descriptor of 0, 1, or 2, refers to  the standard input, standard output, or standard error, respectively.|
| [**ft\_putstr\_fd()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putstr_fd.c) | The ft\_putstr\_fd() function outputs a string to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|
| [**ft\_putendl\_fd()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putendl_fd.c) | The ft\_putendl\_fd() function outputs a string to the output specified by the file descriptor, followed by a newline. The file descriptor  can be  0, 1, or 2, to refer to standard input, standard output, or standard error, respectively.|
| [**ft\_putnbr\_fd()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_putnbr_fd.c) | The ft\_putnbr\_fd() function outputs a number to the output specified by the file descriptor. A file descriptor of 0, 1, or 2, refers to the standard input, standard output, or standard error, respectively.|

**"Str 2" Group**
| Function | Description |
| --- | --- |
| [**ft\_strnew()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strnew.c) | The function ft\_strnew() allocates with malloc(3) and returns a fresh string ending with '\0'. Each character of the string is initialized at '\0'. If the allocation fails, the function returns NULL.|
| [**ft\_strdel()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strdel.c) | The ft\_strdel() function takes as a parameter the address of a string that needs to be freed with free(3), then sets its pointer to NULL.|
| [**ft\_strclr()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strclr.c) | The ft\_strclr() function sets every character of the string s to '\0'.|
| [**ft\_striter()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_striter.c) | The ft\_striter() function applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.|
| [**ft\_striteri()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_striteri.c) | The ft\_striteri() function applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.|
| [**ft\_strmap()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strmap.c) | The function ft\_strmap() applies the function f to each character of the string given as an argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f.|
| [**ft\_strequ()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strequ.c) | The ft\_strequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| [**ft\_strnequ()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strnequ.c) | The ft\_strnequ() function does a lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.|
| [**ft\_strsub()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strsub.c) | The ft\_strsub() function allocates with malloc(3) and returns a "fresh" substring from string given as an argument. The substring begins at index start and is of size len. If start and len aren't referring to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.|
| [**ft\_strjoin()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strjoin.c) | The ft\_strjoin() function allocates (with malloc(3)) and returns a "fresh" string that is the concatenation of s1 and s2, ending with '\0'. If the allocation fails, the function returns NULL.|
| [**ft\_strtrim()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strtrim.c) | The ft\_strtrim() function allocates with malloc(3) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. ' ', '\n' and '\t' are considered whitespace characters. If s has no whitespaces at the beginning or the end, the function returns a copy of s. If the allocation fails the function returns NULL.|
| [**ft\_strsplit()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_strsplit.c) | The ft\_strsplit() function allocates with malloc(3) and returns an array of fresh strings (all ending with '\0' including the array itself) obtained by splitting s using the character c as a delimiter. If the allocation fails, the function returns NULL.|

**"mem 2" Group**
| Function | Description |
| --- | --- |
| [**ft\_memalloc()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memalloc.c) | Allocates with malloc(3) and returns a fresh memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.|
| [**ft\_memdel()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_memdel.c) | The ft\_memdel() function takes the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.|

**"misc 2" Group**
| Function | Description |
| --- | --- |
| [**ft\_itoa()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_itoa.c) | The ft\_itoa() fuction allocates (with malloc(3)) and returns a "fresh" string ending with '\0' representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.|

#### Part 3 (Bonus: Linked Lists)

**"list" Group**
| Function | Description |
| --- | --- |
| [**ft\_lstnew()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstnew.c) | The function ft\_lstnew() allocates (with malloc(3)) and returns a “fresh” link. The variables content and content\_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content\_size is initialized to 0 even if the parameter content\_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL.|
| [**ft\_lstdelone()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstdelone.c) | The function ft\_lstdelone() takes as a parameter a link's pointer address and frees the memory of the link's content using the function del given as a parameter, then frees the link's memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft\_memdel)|
| [**ft\_lstdel()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstdel.c) | The function ft\_lstdel() takes as a parameter the address of a pointer to a link and frees the memory of that link, and every successor of that link using the functions del and free. The last pointer is set to NULL.|
| [**ft\_lstadd()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstadd.c) | The ft\_lstadd() function adds the element new at the beginning of the list alst.|
| [**ft\_lstiter()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstiter.c) | The ft\_lstiter() function iterates through a list and applies the function f to each link in the list.|
| [**ft\_lstmap()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_lstmap.c) | The ft\_map() function iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL.|

#### Part 4 (Bonus: Personal Choice)

**"personal choice" Group**
| Function | Description |
| --- | --- |
| [**ft\_isspace()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isspace.c) | The ft\_isspace() function tests for the white-space characters. For any locale, this includes the following standard characters: ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''. In the "C" locale, ft\_isspace() successful test is limited to these characters only. The value of the argument must be representable as an unsigned char or the value of EOF. The ft\_isspace() function returns zero if the character tests false and returns non-zero if the character tests true.|
| [**ft\_iscntrl()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_iscntrl.c) | Checks whether c is a control character.  A control character is a character that does not occupy a printing position on a display (this is the opposite of a printable character, checked with ft\_isprint).  For the standard ASCII character set (used by the "C" locale), control characters are those between ASCII codes 0x00 (NUL) and 0x1f (US), plus 0x7f (DEL). |
| [**ft\_isgraph()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_isgraph.c) | Checks whether c is a character with graphical representation. The characters with graphical representation are all those characters than can be printed (as determined by isprint) except the space character (' '). |
| [**ft\_ispunct()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_ispunct.c) | Checks whether c is a punctuation character. The standard "C" locale considers punctuation characters all graphic characters (as in isgraph) that are not alphanumeric (as in isalnum). Other locales may consider a different selection of characters as punctuation characters, but in any case they are isgraph but not isalnum. |

#### Part 5 (Later Additions)

**"printf dependencies" Group**
| Function | Description |
| --- | --- |
| [**ft\_itoa_base()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_itoa_base.c) | The ft\_itoa_base() fuction allocates (with malloc(3)) and returns a "fresh" string ending with '\0' representing the integer n given as argument according to the n base given as a second argument. Negative numbers must be supported. If the allocation fails, the function returns NULL. |
| [**ft\_itoa_unsigned()**](https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft/blob/master/src/ft_itoa_unsigned.c) | The ft\_itoa_unsigned() fuction allocates (with malloc(3)) and returns a "fresh" string ending with '\0' representing the unsigned integer n given as argument according to the n base given as a second argument. If the allocation fails, the function returns NULL. |

## Instructions
Make sure you have the needed [dependencies](#dependencies) before proceeding.
For instructions and/or greater detail refer to the project [pdf][pdf]  

## Dependencies  
* A C language compiler most common would be GCC or Clang.
* These were written to run on Unix based systems, it would likely work on a windows machine too but is currently untested. 

## Installation 

First copy this repo using git.

```
Git clone https://github.com/michaelbrave/C-Standard-Library-Clone---42-libft.git
cd C-Standard-Library-Clone---42-libft\
```

It's easiest to use the provided makefile. So type
```
make && make clean
```
There should now be a libft.a file.

## Usage  
To use it we include the header in your .c file, by putting this line at the top of your c file

```
include "libft.h"
```

when compiling use the -L flag and the location of the library file, an example:

```
gcc myFile.c -L <path_to_library> -lft
```

## Testing  

Most testing was done on a function by function basis with more thorough testing done using [42 File Checker](https://github.com/jgigault/42FileChecker)

## Future Implementation  
This library will continue to be added to and improved during my time at 42. After that time it will exist as only a reference as it was only created with the intent of learning. 

## Mechanics  

## Credits  

Some frameworks and libraries that were helpful with testing.   
* [Moulibft](https://www.moulibft.com/)
* [42 File Checker](https://github.com/jgigault/42FileChecker)

## Disclaimer

This project was done for learning purposes only and is not meant to be used as a replacement for the GNU C Library. 

### Warning For 42 Students

This is not kept up to date and I cannot guarantee that it will work on your future machines. You are welcome to use and learn from this as you want, but do not implement code that you do not understand. Copying is not the way. 

## Keep in Touch

You can find me on [Github] (https://github.com/michaelbrave) - [Twitter] (https://twitter.com/SomeBraveDude) - [LinkedIn] (https://www.linkedin.com/in/mikebrave/) - [Medium] (https://medium.com/@themichaelbrave) and [myhomepage][My Homepage] (https://michaelbrave.github.io/)

Enjoy!

[42]: http://42.us.org "42 USA"
[pdf]:  "Pdf"
