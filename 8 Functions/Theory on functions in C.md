# Functions in C

A **function** is a **self-contained block of code** designed to perform a **specific task**.

Functions help divide a large program into **smaller, reusable, and manageable modules**, making programs easier to understand, debug, maintain, and reuse.

Functions are one of the most important concepts in C programming and form the basis of **modular programming**.

Functions are extensively used in:

- Mathematical Computations
- File Handling
- Data Processing
- Operating Systems
- Embedded Systems
- Libraries
- Device Drivers
- Networking
- Artificial Intelligence
- Scientific Computing

---

# 1. What is a Function?

A function is a named block of statements that performs a particular operation.

Instead of writing the same code multiple times, a function allows the programmer to write it once and call it whenever required.

Example

Without Function

```c
printf("%d",5*5);

printf("%d",10*10);

printf("%d",15*15);
```

Using Function

```c
square(5);

square(10);

square(15);
```

Functions reduce code duplication.

---

# 2. Advantages of Functions

- Code Reusability
- Modular Programming
- Easy Debugging
- Easy Maintenance
- Better Readability
- Reduced Code Duplication
- Faster Development
- Easier Testing
- Team Collaboration
- Improved Program Organization

---

# 3. Types of Functions

Functions in C are classified into two categories.

| Type | Description |
|-------|-------------|
| Library Functions | Predefined functions provided by the C Standard Library |
| User-defined Functions | Functions created by the programmer |

---

# 4. Library Functions

Library functions are predefined functions available through header files.

Examples

| Header File | Functions |
|-------------|-----------|
| `<stdio.h>` | `printf()`, `scanf()`, `fgets()`, `puts()` |
| `<math.h>` | `sqrt()`, `pow()`, `sin()`, `cos()` |
| `<string.h>` | `strlen()`, `strcpy()`, `strcmp()`, `strcat()` |
| `<stdlib.h>` | `malloc()`, `calloc()`, `free()`, `exit()` |
| `<ctype.h>` | `toupper()`, `tolower()`, `isdigit()` |
| `<time.h>` | `time()`, `clock()` |

Example

```c
printf("Hello");
```

---

# 5. User-defined Functions

A user-defined function is written by the programmer.

Example

```c
void greet()
{
    printf("Welcome");
}
```

Calling

```c
greet();
```

Output

```
Welcome
```

---

# 6. Components of a Function

Every function consists of

- Function Declaration (Prototype)
- Function Definition
- Function Call

Flow

```
Function Declaration

↓

Function Call

↓

Function Definition

↓

Execution

↓

Return to Caller
```

---

# 7. Function Declaration (Prototype)

A function declaration tells the compiler about the function before it is used.

Syntax

```c
return_type function_name(parameters);
```

Example

```c
int sum(int,int);
```

---

# 8. Function Definition

The function definition contains the actual implementation.

Syntax

```c
return_type function_name(parameters)
{
    statements;

    return value;
}
```

Example

```c
int sum(int a,int b)
{
    return a+b;
}
```

---

# 9. Function Call

A function call transfers control to the function.

Syntax

```c
function_name(arguments);
```

Example

```c
sum(10,20);
```

---

# 10. Complete Function Example

```c
#include<stdio.h>

int sum(int,int);

int main()
{
    int result;

    result=sum(10,20);

    printf("%d",result);

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
```

Output

```
30
```

---

# 11. Function Parameters

Parameters receive values from the calling function.

Example

```c
int sum(int x,int y)
```

```
x

↓

Parameter

↓

Receives 10

↓

y

↓

Receives 20
```

---

# 12. Function Arguments

Arguments are the actual values supplied during a function call.

Example

```c
sum(10,20);
```

```
10

↓

Argument

↓

x

20

↓

Argument

↓

y
```

---

# 13. Types of User-defined Functions

There are four common types of user-defined functions.

| Return Value | Parameters | Example |
|--------------|------------|---------|
| No | No | `void display()` |
| No | Yes | `void display(int)` |
| Yes | No | `int getValue()` |
| Yes | Yes | `int sum(int,int)` |

---

# 14. Function with No Arguments and No Return Value

Example

```c
void greet()
{
    printf("Hello");
}
```

Calling

```c
greet();
```

Output

```
Hello
```

---

# 15. Function with Arguments but No Return Value

Example

```c
void square(int n)
{
    printf("%d",n*n);
}
```

Calling

```c
square(5);
```

Output

```
25
```

---

# 16. Function with No Arguments but Return Value

Example

```c
int number()
{
    return 100;
}
```

Calling

```c
int x=number();
```

Output

```
100
```

---

# 17. Function with Arguments and Return Value

Example

```c
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
```

Calling

```c
maximum(20,40);
```

Output

```
40
```

---

# 18. Return Statement

The `return` statement

- Ends the function.
- Returns control to the caller.
- Optionally returns a value.

Example

```c
return result;
```

---

# 19. Call by Value

C uses **Call by Value** by default.

A copy of the variable is passed to the function.

Example

```c
void change(int x)
{
    x=100;
}
```

Calling

```c
int a=10;

change(a);
```

Output

```
a = 10
```

The original variable is not modified.

---

# 20. Call by Reference (Using Pointers)

Pointers allow functions to modify the original variable.

Example

```c
void change(int *x)
{
    *x=100;
}
```

Calling

```c
int a=10;

change(&a);
```

Output

```
a = 100
```

---

# 21. Recursion

A recursive function calls itself.

Example

```c
int factorial(int n)
{
    if(n==0)
        return 1;

    return n*factorial(n-1);
}
```

Calling

```c
factorial(5);
```

Output

```
120
```

---

# 22. Function Scope

Variables declared inside a function are **local variables**.

Example

```c
void test()
{
    int x=10;
}
```

The variable `x` cannot be accessed outside the function.

---

# 23. Function Lifetime

Local variables are created when the function starts and destroyed when the function finishes.

Global variables exist throughout the execution of the program.

---

# 24. Stack Memory and Function Calls

Each function call creates a new **stack frame**.

Execution

```
main()

↓

sum()

↓

square()

↓

Return

↓

sum()

↓

Return

↓

main()
```

The stack stores

- Parameters
- Local Variables
- Return Address

---

# 25. Function Prototype Benefits

Function prototypes

- Enable type checking.
- Detect incorrect arguments.
- Improve compiler diagnostics.
- Allow functions to be defined after `main()`.

---

# 26. Inline Functions

Standard C (before C99) does not support inline functions.

From **C99**, the `inline` keyword suggests that the compiler may replace a function call with the function body for optimization.

Example

```c
inline int square(int x)
{
    return x*x;
}
```

---

# 27. Advantages of Functions

- Reduce code duplication.
- Improve readability.
- Simplify debugging.
- Enable modular programming.
- Improve maintainability.
- Encourage code reuse.
- Simplify testing.
- Improve scalability.

---

# 28. Limitations of Functions

- Function calls introduce a small overhead.
- Excessive recursion may cause stack overflow.
- Too many small functions may reduce readability.
- Incorrect parameter passing may cause logical errors.

---

# 29. Common Theoretical Pitfalls

## Forgetting Function Prototype

Incorrect

```c
main()
{
    sum();
}
```

Provide a function prototype before calling the function if it is defined later.

---

## Mismatched Return Type

Incorrect

```c
int display()
{
    printf("Hello");
}
```

A non-`void` function should return an appropriate value.

---

## Missing Return Statement

Incorrect

```c
int sum()
{
}
```

Always return a value from a non-`void` function.

---

## Incorrect Number of Arguments

Incorrect

```c
sum(10);
```

when

```c
int sum(int,int);
```

is declared.

---

## Confusing Parameters and Arguments

Parameters

```c
int sum(int a,int b)
```

Arguments

```c
sum(10,20);
```

---

# 30. Best Practices

- Write small and focused functions.
- Use meaningful function names.
- Declare function prototypes before use.
- Pass only necessary parameters.
- Return appropriate values.
- Avoid global variables when possible.
- Document function purpose and parameters.
- Reuse functions instead of duplicating code.

---

# 31. Applications of Functions

Functions are widely used in

- Mathematical Libraries
- Operating Systems
- Device Drivers
- Embedded Systems
- Database Management Systems
- Artificial Intelligence
- Machine Learning
- Scientific Computing
- Networking
- Compiler Design
- Graphics Programming
- Game Development

---

# 32. Summary

- A function is a reusable block of code that performs a specific task.
- Functions promote modular programming, code reuse, and maintainability.
- C provides library functions and user-defined functions.
- Every function consists of a declaration, definition, and function call.
- Functions may or may not accept parameters and may or may not return values.
- C passes arguments by value by default, while pointers enable reference-like behavior.
- Recursive functions solve problems by calling themselves.
- Local variables exist only during function execution, while global variables persist throughout the program.
- Proper use of functions results in organized, efficient, and scalable C programs.