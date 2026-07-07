# Introduction to C

**C** is a **general-purpose, procedural, structured, and compiled programming language** developed to write efficient, portable, and high-performance software.

It is considered one of the most influential programming languages because it forms the foundation for many modern programming languages, including **C++, Java, C#, Objective-C, Go, Rust**, and many scripting languages.

C provides direct access to memory, efficient execution, and a rich set of operators, making it one of the most widely used languages in system programming, embedded systems, operating systems, and software development.

---

# 1. What is C?

C is a **middle-level programming language** that combines the features of both **high-level** and **low-level** programming languages.

It allows programmers to:

- Write efficient programs.
- Access computer memory directly.
- Develop system software.
- Build application software.
- Create portable programs.

---

# 2. History of C

The C programming language has evolved through several stages.

| Year | Development |
|------|-------------|
| 1967 | BCPL developed by Martin Richards |
| 1970 | B language developed by Ken Thompson |
| 1972 | C language developed by Dennis Ritchie |
| 1973 | UNIX operating system rewritten in C |
| 1989 | ANSI C (C89) Standard |
| 1990 | ISO C (C90) Standard |
| 1999 | C99 Standard |
| 2011 | C11 Standard |
| 2018 | C17 Standard |
| 2024 | C23 Standard |

---

# 3. Creator of C

The C programming language was developed by **Dennis Ritchie** at **Bell Laboratories (Bell Labs)** in **1972**.

Purpose

- Develop the UNIX operating system.
- Improve the B programming language.
- Provide efficient system-level programming.

---

# 4. Why Learn C?

C is considered the foundation of programming because it teaches fundamental programming concepts.

Learning C helps in understanding:

- Memory Management
- Variables
- Data Types
- Functions
- Pointers
- Arrays
- Structures
- Algorithms
- Data Structures
- Operating Systems

Many modern languages inherit concepts from C.

---

# 5. Features of C

- Simple and easy to learn
- Fast execution
- Portable
- Structured programming
- Modular programming using functions
- Rich standard library
- Efficient memory management
- Pointer support
- Dynamic memory allocation
- Recursion support
- Bitwise operations
- Extensible through libraries

---

# 6. Characteristics of C

- Procedural Programming Language
- Middle-Level Language
- Compiled Language
- Case Sensitive
- Statically Typed
- Portable
- Efficient
- General Purpose

---

# 7. Applications of C

C is widely used in

- Operating Systems
- Embedded Systems
- Device Drivers
- Compilers
- Database Systems
- Networking
- Artificial Intelligence
- Robotics
- Scientific Computing
- Image Processing
- Game Development
- Internet of Things (IoT)

---

# 8. Advantages of C

- High performance
- Portable across platforms
- Small runtime overhead
- Efficient memory usage
- Supports low-level programming
- Excellent compiler support
- Large community
- Easy integration with assembly language
- Foundation for many modern languages

---

# 9. Limitations of C

- No built-in object-oriented programming
- Manual memory management
- No automatic garbage collection
- Limited runtime error checking
- No exception handling
- No built-in string data type
- Less secure than many modern languages

---

# 10. C Standards

The C language has evolved through international standards.

| Standard | Description |
|----------|-------------|
| C89 (ANSI C) | First official standard |
| C90 | ISO version of ANSI C |
| C99 | Added inline functions, variable-length arrays, `bool`, `long long`, etc. |
| C11 | Added multithreading support, atomic operations, improved Unicode support |
| C17 | Bug fixes and maintenance release |
| C23 | Latest standard with language improvements and modern features |

---

# 11. Structure of a C Program

A typical C program consists of the following sections.

```
Documentation Section

↓

Link Section

↓

Definition Section

↓

Global Declaration Section

↓

main() Function

↓

User-defined Functions
```

---

# 12. Basic Structure of a C Program

Example

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!");

    return 0;
}
```

---

# 13. Components of a C Program

## Documentation Section

Contains comments describing the program.

Example

```c
// Program to display Hello World
```

---

## Link Section

Includes header files.

Example

```c
#include <stdio.h>
```

---

## Definition Section

Contains macro definitions.

Example

```c
#define PI 3.14159
```

---

## Global Declaration Section

Contains global variables and function prototypes.

Example

```c
int add(int,int);
```

---

## main() Function

Execution begins from the `main()` function.

Example

```c
int main()
{
    return 0;
}
```

---

## User-defined Functions

Functions created by the programmer.

Example

```c
void display()
{
    printf("Welcome");
}
```

---

# 14. Compilation Process

A C program passes through several stages before execution.

```
Source Code (.c)

↓

Preprocessor

↓

Compiler

↓

Assembler

↓

Object File (.o)

↓

Linker

↓

Executable File (.exe or.out)

↓

Execution
```

---

# 15. C Compilation Stages

| Stage | Description |
|--------|-------------|
| Preprocessing | Processes directives such as `#include` and `#define` |
| Compilation | Converts C code into assembly language |
| Assembly | Converts assembly code into machine code |
| Linking | Combines object files and libraries |
| Execution | Runs the executable program |

---

# 16. Tokens in C

A **token** is the smallest meaningful unit in a C program.

Types of Tokens

- Keywords
- Identifiers
- Constants
- String Literals
- Operators
- Special Symbols

Example

```c
int sum = 10 + 20;
```

Tokens

```
int

sum

=

10

+

20

;
```

---

# 17. Keywords

Keywords are reserved words with predefined meanings.

Examples

```c
int

float

if

else

return

while

for

switch

break

continue
```

---

# 18. Identifiers

Identifiers are names given to variables, functions, arrays, structures, etc.

Example

```c
studentMarks

calculateArea

totalSum
```

Rules

- Must begin with a letter or underscore.
- Cannot start with a digit.
- Cannot be a keyword.
- Case-sensitive.
- May contain letters, digits, and underscores.

---

# 19. Comments in C

Comments improve readability.

Single-line

```c
// This is a comment
```

Multi-line

```c
/*
This
is
a
comment
*/
```

Comments are ignored by the compiler.

---

# 20. First Program

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!");

    return 0;
}
```

Output

```
Hello, World!
```

---

# 21. Execution Flow

```
Start

↓

main()

↓

Statements Execute

↓

return 0

↓

Program Ends
```

---

# 22. C Program File Extensions

| File Type | Extension |
|-----------|-----------|
| Source Code | `.c` |
| Header File | `.h` |
| Object File | `.o` or `.obj` |
| Executable | `.exe` (Windows), no extension or `.out` (Linux/macOS) |

---

# 23. Common IDEs for C Programming

- Code::Blocks
- Visual Studio Code
- CLion
- Dev-C++
- Eclipse CDT
- CodeLite
- Turbo C (for historical learning only)

---

# 24. Common C Compilers

- GCC (GNU Compiler Collection)
- Clang
- Microsoft Visual C Compiler (MSVC)
- Tiny C Compiler (TCC)
- Intel C Compiler (ICC)

---

# 25. Common Theoretical Pitfalls

## Forgetting `main()`

Every C program must contain a `main()` function as its entry point.

---

## Missing Semicolon

Incorrect

```c
printf("Hello")
```

Correct

```c
printf("Hello");
```

---

## Incorrect Header File

Incorrect

```c
#include <studio.h>
```

Correct

```c
#include <stdio.h>
```

---

## Case Sensitivity

Incorrect

```c
Printf("Hello");
```

Correct

```c
printf("Hello");
```

---

## Omitting `return 0`

Although modern C standards allow reaching the end of `main()` to imply a successful return, explicitly writing

```c
return 0;
```

improves readability and is recommended for beginners.

---

# 26. Best Practices

- Write meaningful comments.
- Use descriptive variable and function names.
- Follow consistent indentation.
- Include only necessary header files.
- Compile frequently to detect errors early.
- Read compiler warnings carefully.
- Organize code into functions.
- Follow a consistent coding style.

---

# 27. Applications of C

C is extensively used in

- Operating Systems (Linux, UNIX, Windows components)
- Embedded Systems
- Firmware Development
- Device Drivers
- Compiler Design
- Database Management Systems
- Networking Software
- Robotics
- Scientific Simulations
- Graphics Libraries
- Cybersecurity Tools
- High-Performance Computing

---

# 28. Summary

- C is a general-purpose, procedural, and compiled programming language developed by **Dennis Ritchie** in 1972.
- It is known for its speed, portability, efficiency, and close interaction with computer hardware.
- C serves as the foundation for many modern programming languages.
- Every C program begins execution with the `main()` function.
- A C program goes through preprocessing, compilation, assembly, linking, and execution before it runs.
- The language provides powerful features such as pointers, functions, structures, and dynamic memory management.
- Learning C builds a strong foundation for system programming, embedded systems, data structures, algorithms, and software engineering.