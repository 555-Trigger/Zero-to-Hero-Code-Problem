
# Data Types in C

Data types in C specify the **type of data** that a variable can store. They determine:

- The **size** of memory allocated.
- The **range** of values that can be stored.
- The **operations** that can be performed on the data.

Every variable in C must be declared with a data type before it is used.

---

# 1. What is a Data Type?

A **data type** tells the compiler:

- How much memory to allocate.
- What kind of values the variable can store.
- How the stored value should be interpreted.
- What operations are allowed on the variable.

Example

```c
int age = 20;
float salary = 35000.75;
char grade = 'A';
```

Here,

- `int` stores integers.
- `float` stores decimal numbers.
- `char` stores characters.

---

# 2. Classification of Data Types

C data types are classified into four categories.

| Category | Description | Examples |
|----------|-------------|----------|
| Basic (Primary) Data Types | Built-in data types | `int`, `char`, `float`, `double`, `void` |
| Derived Data Types | Created from basic data types | Arrays, Pointers, Functions |
| User-defined Data Types | Defined by the programmer | `struct`, `union`, `enum`, `typedef` |
| Void Type | Represents no value | `void` |

---

# 3. Basic Data Types

The primary data types in C are:

| Data Type | Description |
|-----------|-------------|
| `char` | Stores a single character |
| `int` | Stores integers |
| `float` | Stores single-precision decimal numbers |
| `double` | Stores double-precision decimal numbers |
| `void` | Represents no value |

---

# 4. Integer Data Type (`int`)

The `int` data type is used to store **whole numbers**.

Syntax

```c
int variable_name;
```

Example

```c
int age = 25;

printf("%d", age);
```

Output

```
25
```

---

# 5. Character Data Type (`char`)

The `char` data type stores a **single character**.

Syntax

```c
char variable_name;
```

Example

```c
char grade = 'A';

printf("%c", grade);
```

Output

```
A
```

Characters are stored using their **ASCII values**.

Example

```c
char ch = 'A';

printf("%d", ch);
```

Output

```
65
```

---

# 6. Float Data Type (`float`)

The `float` data type stores **decimal numbers** with single precision.

Syntax

```c
float variable_name;
```

Example

```c
float pi = 3.14;

printf("%f", pi);
```

Output

```
3.140000
```

---

# 7. Double Data Type (`double`)

The `double` data type stores decimal numbers with **higher precision** than `float`.

Syntax

```c
double variable_name;
```

Example

```c
double value = 12345.6789;

printf("%lf", value);
```

Output

```
12345.678900
```

---

# 8. Void Data Type (`void`)

The `void` data type represents **no value**.

It is commonly used:

- In functions that do not return a value.
- As a function parameter when no arguments are required.
- With generic pointers (`void *`).

Example

```c
void display()
{
    printf("Hello");
}
```

---

# 9. Size of Basic Data Types

The size of data types depends on the compiler and system architecture.

Typical sizes are:

| Data Type | Size (Bytes) |
|-----------|--------------|
| `char` | 1 |
| `int` | 4 |
| `float` | 4 |
| `double` | 8 |
| `void` | No storage |

You can determine the size using the `sizeof` operator.

Example

```c
printf("%zu", sizeof(int));
```

Output

```
4
```

---

# 10. Integer Type Modifiers

Integer types can be modified using:

- `short`
- `long`
- `signed`
- `unsigned`

| Modifier | Description |
|----------|-------------|
| `short int` | Smaller integer |
| `long int` | Larger integer |
| `long long int` | Very large integer |
| `signed int` | Stores positive and negative values |
| `unsigned int` | Stores only positive values |

Example

```c
unsigned int marks = 100;
```

---

# 11. Signed and Unsigned Integers

## Signed Integer

Can store both positive and negative values.

Example

```c
signed int x = -25;
```

## Unsigned Integer

Stores only non-negative values.

Example

```c
unsigned int y = 250;
```

---

# 12. Short Integer

Uses less memory than a normal integer (implementation-dependent).

Example

```c
short int num = 150;
```

---

# 13. Long Integer

Used when larger integer values are required.

Example

```c
long int population = 9000000;
```

---

# 14. Long Long Integer

Stores very large integers.

Example

```c
long long int distance = 9876543210;
```

---

# 15. Floating-Point Modifiers

The floating-point types are:

| Type | Precision |
|------|-----------|
| `float` | Single Precision |
| `double` | Double Precision |
| `long double` | Extended Precision |

Example

```c
long double pi = 3.141592653589793238L;
```

---

# 16. Format Specifiers

Each data type has a corresponding format specifier.

| Data Type | Format Specifier |
|-----------|------------------|
| `char` | `%c` |
| `int` | `%d` or `%i` |
| `unsigned int` | `%u` |
| `short int` | `%hd` |
| `long int` | `%ld` |
| `long long int` | `%lld` |
| `float` | `%f` |
| `double` | `%lf` |
| `long double` | `%Lf` |

Example

```c
int x = 25;
float y = 12.5;

printf("%d %.2f", x, y);
```

Output

```
25 12.50
```

---

# 17. Derived Data Types

Derived data types are created from basic data types.

| Derived Type | Description |
|--------------|-------------|
| Array | Collection of similar elements |
| Pointer | Stores memory addresses |
| Function | Performs a specific task |

Example

```c
int numbers[5];
```

Example

```c
int *ptr;
```

---

# 18. User-defined Data Types

These are created by the programmer.

| Type | Purpose |
|------|---------|
| `struct` | Groups variables of different data types |
| `union` | Shares the same memory among members |
| `enum` | Defines named integer constants |
| `typedef` | Creates aliases for existing data types |

Example

```c
struct Student
{
    int id;
    char name[30];
};
```

---

# 19. Type Conversion

Type conversion changes one data type into another.

There are two types:

| Type | Description |
|------|-------------|
| Implicit Conversion | Done automatically by the compiler |
| Explicit Conversion | Done manually by the programmer |

Implicit Example

```c
int a = 5;
float b = a;
```

Explicit Example

```c
float x = 9.75;

int y = (int)x;
```

Output

```
9
```

---

# 20. Data Type Hierarchy in Expressions

When different data types are used together, C performs **type promotion**.

Priority

```
char
↓

short
↓

int
↓

long
↓

float
↓

double
↓

long double
```

Example

```c
int a = 5;
float b = 2.5;

float c = a + b;
```

Result

```
7.5
```

---

# 21. The `sizeof` Operator

The `sizeof` operator returns the memory occupied by a data type or variable.

Syntax

```c
sizeof(data_type)
```

Example

```c
printf("%zu", sizeof(double));
```

Output

```
8
```

---

# 22. Constants and Data Types

Constants also have data types.

Examples

```c
10
```

Type

```
int
```

Example

```c
10.5
```

Type

```
double
```

Example

```c
'A'
```

Type

```
char
```

---

# 23. Variable Declaration

Variables must be declared before use.

Syntax

```c
data_type variable_name;
```

Example

```c
int age;
float salary;
char grade;
```

---

# 24. Variable Initialization

Initialization assigns a value during declaration.

Example

```c
int age = 20;
float salary = 25000.5;
char grade = 'A';
```

---

# 25. Common Theoretical Pitfalls

## Using an Incorrect Format Specifier

Incorrect

```c
float x = 5.5;

printf("%d", x);
```

Correct

```c
printf("%f", x);
```

---

## Integer Division

Incorrect

```c
int a = 5;
int b = 2;

printf("%f", a / b);
```

Result

```
2.000000
```

Correct

```c
printf("%f", (float)a / b);
```

Result

```
2.500000
```

---

## Overflow

Assigning a value larger than the data type can hold causes overflow.

Example

```c
char x = 130;
```

---

## Uninitialized Variables

Incorrect

```c
int x;

printf("%d", x);
```

The value is unpredictable because `x` was never initialized.

---

# 26. Applications of Data Types

Data types are essential in:

- Variable declaration
- Memory management
- Mathematical computations
- Input and output operations
- Arrays
- Pointers
- Structures and unions
- File handling
- Dynamic memory allocation
- System programming

---

# 27. Summary

- Data types define the type of data a variable can store.
- C provides **basic**, **derived**, **user-defined**, and **void** data types.
- The basic data types are `char`, `int`, `float`, `double`, and `void`.
- Integer modifiers include `short`, `long`, `signed`, and `unsigned`.
- `float`, `double`, and `long double` differ in precision.
- The `sizeof` operator determines the memory occupied by a data type or variable.
- Type conversion can be **implicit** or **explicit**.
- Correct format specifiers should always be used with `printf()` and `scanf()`.
- Choosing the appropriate data type improves memory efficiency, performance, and program correctness.
