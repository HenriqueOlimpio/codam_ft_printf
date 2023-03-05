# Ft_printf
The goal of this project is pretty straightforward. You will recode printf().
You will mainly learn about using a variable number of arguments. How cool is that??
It is actually pretty cool :)

# 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/ft_printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

and, when compiling your code, add the required flags:

```shell
-lftprintf -L path/to/libftprintf.a -I path/to/ft_printf.h
```

## 📋 Testing

**1. Configuring**

First, open the [`Makefile`](testing/Makefile) inside `/testing/` and configure the path to the `ft_printf` folder:

```Makefile
PROJECT_DIR	= ../ft_printf/
```

Then, configure the tests to your needs in the [`/testing/main.c`](testing/main.c) file.

**2. Running:**

```shell
make
```
