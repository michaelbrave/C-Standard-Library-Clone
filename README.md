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
* isalpha
* isdigit
* isalnum
* isascii
* isprint

**"Str 1" Group**
* strlen
* strdup
* strcpy
* strncpy
* strcat
* strncat
* strlcat
* strchr
* strrchr
* strstr
* strnstr
* strcmp
* strncmp

**"mem 1" Group**
* memset
* bzero
* memcpy
* memccpy
* memmove
* memchr
* memcmp

**"misc 1" Group**
* atoi
* tolower
* toupper

#### Part 2

**"Puts" Group**
* putchar
* putstr
* putendl
* putnbr
* putchar_fd
* putstr_fd
* putendl_fd
* putnmbr_fd

**"Str 2" Group**
* strnew
* strdel
* strclr
* striter
* striteri
* strmap
* strmapi
* strequ
* strnequ
* strsub
* strjoin
* strtrim
* strsplit

**"mem 2" Group**
* memalloc
* memdel

**"misc 2" Group**
* itoa

#### Part 3 (Bonus)

**"list" Group**
* lstnew
* lstdelone
* lstdel
* lstadd
* lstiter
* lstmap

**"personal choice" Group**
* isspace
* isctrl
* isgraph
* ispunct
* isint
* lenofpart
* numofstrings

**"printf dependencies" Group**
* itoa_base
* numplace
* itoa_unsigned
* numplace_unsigned

## Instructions
Make sure you have the needed [dependencies](#dependencies) before proceeding.
For instructions and/or greater detail refer to the project [pdf][pdf]  
## Dependencies  
* A C language compiler most common would be GCC or Clang.
* These were written to run on Unix based systems, it would likely work on a windows machine too but is currently untested. 

## Functionality  

#### Installation 
It's easiest to use the provided makefile. Using a terminal from the folder simply type make, or make re. This should compile a new libft.a file. Then type in make clean to remove the .o files or make fclean to remove the .a file and the .o files. 

#### Usage  
include the libft.h as a header in your C file, and compile the .a file with your other files.

#### Testing  

#### Future Implementation  

## Mechanics  

## Credits  

## Disclaimer

This project was done for learning purposes only.  

### Warning For 42 Students

This is not kept up to date and I cannot guarantee that it will work on your future machines. You are welcome to use and learn from this as you want, but do not implement code that you do not understand. Copying is not the way. 

## Keep in Touch


Enjoy!

[42]: http://42.us.org "42 USA"
[pdf]:  "Pdf"
