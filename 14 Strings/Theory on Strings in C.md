# Strings in C

A **string** in C is a **sequence of characters stored in a character array and terminated by a special null character (`'\0'`)**.

Unlike many modern programming languages, C **does not have a built-in string data type**. Instead, strings are represented using arrays of characters.

Strings are extensively used in:

- Text Processing
- User Input
- File Handling
- Password Verification
- Compiler Design
- Operating Systems
- Database Applications
- Embedded Systems
- Networking
- Artificial Intelligence

---

# 1. What is a String?

A string is a collection of characters enclosed within **double quotation marks (`" "`)** and terminated by the null character (`'\0'`).

Example

```c
char name[] = "Hello";
```

Memory Representation

```
Index

0   1   2   3   4   5

↓

H   e   l   l   o  '\0'
```

The compiler automatically appends the null character (`'\0'`) at the end of the string.

---

# 2. Characteristics of Strings

- Stored as an array of characters.
- Ends with a null character (`'\0'`).
- Indexing starts from **0**.
- Stored in contiguous memory locations.
- Can be modified when stored in a character array.
- Requires the header file `<string.h>` for many string functions.

---

# 3. Declaration of Strings

Syntax

```c
char string_name[size];
```

Example

```c
char name[20];
```

This creates a character array capable of storing up to 19 characters plus the null terminator.

---

# 4. Initialization of Strings

## Method 1

```c
char name[] = "OpenAI";
```

---

## Method 2

```c
char name[7] = "OpenAI";
```

---

## Method 3

```c
char name[] = {'O','p','e','n','A','I','\0'};
```

---

## Method 4

```c
char name[20];

strcpy(name,"OpenAI");
```

Requires

```c
#include <string.h>
```

---

# 5. Memory Representation

Example

```c
char city[] = "Delhi";
```

```
Index

0 1 2 3 4 5

↓

D e l h i \0
```

Possible Memory Layout

```
1000 → D

1001 → e

1002 → l

1003 → h

1004 → i

1005 → '\0'
```

---

# 6. Accessing Characters

Characters are accessed using array indexing.

Example

```c
char name[] = "Computer";

printf("%c",name[3]);
```

Output

```
p
```

---

# 7. Modifying Characters

Example

```c
char name[] = "Computer";

name[0] = 'c';
```

Updated String

```
computer
```

---

# 8. Reading Strings

## Using `scanf()`

Example

```c
char name[20];

scanf("%s",name);
```

Input

```
John
```

Output

```
John
```

**Limitation**

`scanf("%s")` stops reading when it encounters whitespace.

---

## Using `fgets()`

Example

```c
char name[50];

fgets(name,sizeof(name),stdin);
```

Input

```
John Smith
```

Output

```
John Smith
```

`fgets()` is generally safer than `gets()` because it limits the number of characters read.

---

# 9. Displaying Strings

Example

```c
printf("%s",name);
```

or

```c
puts(name);
```

---

# 10. Traversing a String

Example

```c
char name[]="Computer";

for(int i=0;name[i]!='\0';i++)
{
    printf("%c ",name[i]);
}
```

Output

```
C o m p u t e r
```

---

# 11. String Input and Output

Example

```c
char name[30];

printf("Enter Name : ");

fgets(name,sizeof(name),stdin);

printf("%s",name);
```

---

# 12. Common String Functions

The header file

```c
#include <string.h>
```

provides several useful string functions.

| Function | Description |
|----------|-------------|
| `strlen()` | Returns the length of a string |
| `strcpy()` | Copies one string to another |
| `strncpy()` | Copies a specified number of characters |
| `strcat()` | Concatenates two strings |
| `strncat()` | Concatenates a specified number of characters |
| `strcmp()` | Compares two strings |
| `strncmp()` | Compares a specified number of characters |
| `strchr()` | Finds the first occurrence of a character |
| `strrchr()` | Finds the last occurrence of a character |
| `strstr()` | Finds a substring |
| `strtok()` | Splits a string into tokens |
| `memcpy()` | Copies bytes of memory |
| `memmove()` | Safely copies overlapping memory |
| `memcmp()` | Compares memory blocks |
| `memset()` | Initializes memory |

---

# 13. `strlen()`

Returns the number of characters **excluding** the null character.

Example

```c
char name[]="Programming";

printf("%zu",strlen(name));
```

Output

```
11
```

---

# 14. `strcpy()`

Copies one string into another.

Example

```c
char source[]="C Language";

char destination[20];

strcpy(destination,source);
```

Output

```
C Language
```

---

# 15. `strcat()`

Concatenates two strings.

Example

```c
char first[30]="Hello ";

char second[]="World";

strcat(first,second);
```

Output

```
Hello World
```

---

# 16. `strcmp()`

Compares two strings lexicographically.

Example

```c
strcmp("ABC","ABC")
```

Output

```
0
```

Example

```c
strcmp("ABC","ABD")
```

Output

```
Negative Value
```

Example

```c
strcmp("ABD","ABC")
```

Output

```
Positive Value
```

---

# 17. String and Character Arrays

Example

```c
char name[]="Apple";
```

is equivalent to

```c
char name[]={'A','p','p','l','e','\0'};
```

---

# 18. Strings and Pointers

Example

```c
char name[]="Computer";

char *ptr=name;

printf("%c",*ptr);
```

Output

```
C
```

---

# 19. Difference Between Character and String

| Character | String |
|-----------|--------|
| Single character | Collection of characters |
| Uses single quotes `'A'` | Uses double quotes `"ABC"` |
| Stored in `char` | Stored in a character array |
| Occupies one character position | Occupies multiple character positions plus `'\0'` |

---

# 20. String Storage

Example

```c
char str[]="Hello";
```

```
H

↓

e

↓

l

↓

l

↓

o

↓

'\0'
```

Without the null character, C cannot determine where the string ends.

---

# 21. Passing Strings to Functions

Example

```c
void display(char str[])
{
    printf("%s",str);
}
```

Calling

```c
display(name);
```

---

# 22. Advantages of Strings

- Easy text storage.
- Efficient character processing.
- Simple input and output.
- Supported by numerous library functions.
- Essential for text-based applications.
- Widely used in file handling and networking.

---

# 23. Limitations of Strings

- No built-in string data type.
- Fixed size when stored in arrays.
- Risk of buffer overflow.
- Requires manual memory management in many cases.
- Many functions do not perform automatic bounds checking.

---

# 24. Common Theoretical Pitfalls

## Forgetting the Null Character

Incorrect

```c
char str[5]={'H','e','l','l','o'};
```

This is **not** a valid C string because it lacks `'\0'`.

Correct

```c
char str[6]="Hello";
```

---

## Using `==` for String Comparison

Incorrect

```c
if(str1==str2)
```

Correct

```c
if(strcmp(str1,str2)==0)
```

---

## Using `gets()`

Incorrect

```c
gets(name);
```

`gets()` is unsafe because it can cause buffer overflows and has been removed from the C standard.

Use

```c
fgets()
```

instead.

---

## Buffer Overflow

Incorrect

```c
char name[5];

scanf("%s",name);
```

Entering more than four characters causes undefined behaviour.

---

## Modifying a String Literal

Incorrect

```c
char *str="Hello";

str[0]='h';
```

This results in **undefined behaviour** because string literals should not be modified.

Correct

```c
char str[]="Hello";

str[0]='h';
```

---

# 25. Best Practices

- Always allocate space for the null character.
- Prefer `fgets()` over `scanf("%s")` and `gets()`.
- Use `strcmp()` for string comparison.
- Check array bounds before reading input.
- Include `<string.h>` when using string library functions.
- Use meaningful variable names.
- Avoid modifying string literals.

---

# 26. Applications of Strings

Strings are widely used in

- Text Editors
- Search Engines
- Compilers
- Database Systems
- File Handling
- Password Authentication
- Natural Language Processing
- Artificial Intelligence
- Networking
- Web Development
- Operating Systems
- Command-Line Applications

---

# 27. Summary

- A string in C is a sequence of characters terminated by the null character (`'\0'`).
- Strings are stored as character arrays because C has no built-in string data type.
- The null character marks the end of a string.
- Strings can be declared, initialized, modified, traversed, and passed to functions.
- The `<string.h>` library provides numerous functions such as `strlen()`, `strcpy()`, `strcat()`, and `strcmp()`.
- Always use safe input functions like `fgets()` to reduce the risk of buffer overflows.
- Strings are fundamental for text processing, file handling, networking, compilers, and many real-world applications.