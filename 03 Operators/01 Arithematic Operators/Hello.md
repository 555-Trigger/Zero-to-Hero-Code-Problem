# Problem 001 – Hello World

> **Category:** C Programming Basics  
> **Difficulty:** ⭐ Beginner  
> **Estimated Time:** 5 Minutes  
> **Topics Covered:** C Program Structure, Header Files, `main()`, `printf()`  

---

# 📖 Introduction

Every programming language begins with a simple program called **Hello World**.
This program introduces the basic structure of a C program and demonstrates how to display text on the screen.

---

# 🎯 Learning Objectives

After completing this problem, you will be able to:

- Understand the structure of a C program.
- Explain the purpose of `#include<stdio.h>`.
- Write the `main()` function.
- Use `printf()` to display text.
- Compile and execute a C program.

---

# 📋 Problem Statement

Write a C program that prints the following message on the screen:

Hello World

---

# 📥 Input

No input is required.

---

# 📤 Output

```text
Hello World
```

---

# 💡 Example

### Input

```text
(No Input)
```

### Output

```text
Hello World
```

---

# 📝 Explanation

The program begins execution from the `main()` function.

The statement

```c
printf("Hello World");
```

prints the text **Hello World** to the console.

After printing the message, the program terminates successfully by returning `0`.

---

# 🧠 Theory

A C program consists of several important components:

| Component | Purpose |
|------------|---------|
| `#include<stdio.h>` | Includes the Standard Input Output library. |
| `main()` | Starting point of every C program. |
| `printf()` | Displays output on the screen. |
| `return 0;` | Indicates successful program execution. |

---

# 🔄 Algorithm

1. Start
2. Include the Standard Input Output library.
3. Define the `main()` function.
4. Display "Hello World".
5. Return 0.
6. Stop.

---

# 🌳 Flowchart

```text
 ┌─────────┐
 │  Start  │
 └────┬────┘
      │
      ▼
Print "Hello World"
      │
      ▼
 Return 0
      │
      ▼
 ┌─────────┐
 │   Stop  │
 └─────────┘
```

---

# 💻 Solution

```c
#include<stdio.h>

int main()
{
    printf("Hello World");
    return 0;
}
```

---

# ▶️ Dry Run

Execution begins.

↓

Compiler enters `main()`.

↓

`printf()` displays

```text
Hello World
```

↓

Program returns `0`.

↓

Execution ends.

---

# 📊 Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time Complexity | O(1) |
| Space Complexity | O(1) |

---

# ⚠️ Common Mistakes

### Missing header file

```c
printf("Hello");
```

Error:

```
implicit declaration of function 'printf'
```

---

### Missing semicolon

```c
printf("Hello World")
```

Compilation error.

---

### Incorrect main()

```c
main()
```

Modern C recommends

```c
int main()
```

---

# 🌍 Real-World Applications

Although this program is simple, it introduces concepts used in every software application, including:

- Banking software
- Operating systems
- Embedded systems
- Artificial Intelligence
- Machine Learning applications
- Robotics

Every C program starts with the same basic structure.

---

# 🚀 Challenge Yourself

Modify the program to:

### Challenge 1

Print your name.

```
My name is Alice
```

---

### Challenge 2

Print three lines.

```
Hello
Welcome
C Programming
```

---

### Challenge 3

Print your college name.

---

### Challenge 4

Use `puts()` instead of `printf()`.

---

### Challenge 5

Print a pattern.

```
*
**
***
****
```

---

# 📚 Related Problems

- Print Your Name
- Print Multiple Lines
- Escape Sequences
- Variables
- Data Types

---

# 📖 References

1. The C Programming Language
   Brian W. Kernighan & Dennis M. Ritchie

2. Let Us C
   Yashavant Kanetkar

3. ISO C Standard

---

# 🏷️ Tags

`C` `Beginner` `printf` `Hello World` `Programming Basics`

---

# ⭐ Key Takeaways

✔ Every C program starts with `main()`.

✔ `printf()` displays output.

✔ `#include<stdio.h>` provides access to input/output functions.

✔ `return 0` indicates successful execution.
