# Loops in C

Loops are control structures that allow a block of code to be **executed repeatedly** as long as a specified condition is **true**.

Instead of writing the same statements multiple times, loops enable programmers to write **efficient**, **compact**, and **maintainable** code.

Loops are fundamental to programming and are widely used in:

- Repetitive calculations
- Array traversal
- Matrix operations
- Searching algorithms
- Sorting algorithms
- File processing
- Data analysis
- Game development
- Embedded systems

---

# 1. Types of Loops in C

| Loop | Description | Best Used When |
|------|-------------|----------------|
| `while` | Condition is checked before execution | Number of iterations is unknown |
| `do-while` | Condition is checked after execution | Loop must execute at least once |
| `for` | Initialization, condition, and update in one statement | Number of iterations is known |
| Nested Loops | One loop inside another | Matrices, patterns, multidimensional arrays |

---

# 2. Why Do We Need Loops?

Without loops

```c
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
```

Using a loop

```c
for(int i = 1; i <= 5; i++)
{
    printf("Hello\n");
}
```

Both produce the same output, but loops make the code shorter and easier to maintain.

---

# 3. Components of a Loop

Every loop consists of three main components.

| Component | Description |
|-----------|-------------|
| Initialization | Starts the loop variable |
| Condition | Determines whether the loop continues |
| Update | Changes the loop variable after each iteration |

Example

```c
for(int i = 1; i <= 5; i++)
```

```
Initialization

↓

Condition

↓

Loop Body

↓

Update

↓

Repeat
```

---

# 4. The `while` Loop

The `while` loop checks the condition **before** executing the loop body.

If the condition is false initially, the loop body is never executed.

Syntax

```c
while(condition)
{
    statements;
}
```

Flow

```
Initialization

↓

Condition

↓

True

↓

Loop Body

↓

Update

↓

Condition

↓

False

↓

Exit
```

Example

```c
int i = 1;

while(i <= 5)
{
    printf("%d ", i);
    i++;
}
```

Output

```
1 2 3 4 5
```

---

# 5. The `do-while` Loop

The `do-while` loop executes the loop body **before** checking the condition.

Therefore, the loop body executes **at least once**.

Syntax

```c
do
{
    statements;
}
while(condition);
```

Flow

```
Initialization

↓

Loop Body

↓

Update

↓

Condition

↓

True

↓

Repeat

↓

False

↓

Exit
```

Example

```c
int i = 1;

do
{
    printf("%d ", i);
    i++;
}
while(i <= 5);
```

Output

```
1 2 3 4 5
```

---

# 6. Difference Between `while` and `do-while`

Example

```c
int i = 10;

while(i <= 5)
{
    printf("%d", i);
}
```

Output

```
No Output
```

Example

```c
int i = 10;

do
{
    printf("%d", i);
}
while(i <= 5);
```

Output

```
10
```

---

# 7. The `for` Loop

The `for` loop combines initialization, condition, and update into a single statement.

Syntax

```c
for(initialization; condition; update)
{
    statements;
}
```

Flow

```
Initialization

↓

Condition

↓

True

↓

Loop Body

↓

Update

↓

Condition

↓

False

↓

Exit
```

Example

```c
for(int i = 1; i <= 5; i++)
{
    printf("%d ", i);
}
```

Output

```
1 2 3 4 5
```

---

# 8. Infinite Loops

An infinite loop never terminates because its condition is always true.

Example using `while`

```c
while(1)
{
    printf("Hello");
}
```

Example using `for`

```c
for(;;)
{
    printf("Hello");
}
```

These loops continue until interrupted.

---

# 9. Nested Loops

A nested loop is a loop inside another loop.

Syntax

```c
for(...)
{
    for(...)
    {
        statements;
    }
}
```

Example

```c
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        printf("* ");
    }

    printf("\n");
}
```

Output

```
* * *

* * *

* * *
```

---

# 10. Loop Control Variables

A loop control variable determines how many times the loop executes.

Example

```c
for(int i = 1; i <= 10; i++)
```

Here

```
i
```

is the loop control variable.

---

# 11. Entry-Controlled and Exit-Controlled Loops

| Loop | Type |
|------|------|
| `while` | Entry-Controlled |
| `for` | Entry-Controlled |
| `do-while` | Exit-Controlled |

Entry-controlled loops test the condition before entering the loop.

Exit-controlled loops test the condition after executing the loop body.

---

# 12. Common Loop Applications

Loops are commonly used for

- Printing numbers
- Sum of numbers
- Factorial
- Fibonacci series
- Prime number checking
- Pattern printing
- Array traversal
- Matrix operations
- String processing
- Searching algorithms
- Sorting algorithms

---

# 13. Loop Execution Example

Example

```c
for(int i = 1; i <= 3; i++)
{
    printf("%d ", i);
}
```

Execution

```
Initialize i = 1

↓

Check i <= 3

↓

Print 1

↓

Increment i

↓

Print 2

↓

Increment i

↓

Print 3

↓

Increment i

↓

Condition becomes false

↓

Exit
```

Output

```
1 2 3
```

---

# 14. Operator Precedence in Loop Conditions

Loop conditions often contain arithmetic, relational, and logical operators.

Example

```c
while(i < 10 && j > 0)
```

Evaluation order

```
Arithmetic

↓

Relational

↓

Logical
```

---

# 15. Comparison of Loops

| Feature | `while` | `do-while` | `for` |
|----------|----------|------------|--------|
| Condition Checked | Before execution | After execution | Before execution |
| Executes At Least Once | No | Yes | No |
| Initialization | Outside loop | Outside loop | Inside loop |
| Update | Inside loop | Inside loop | In loop header |
| Best For | Unknown iterations | At least one execution | Known iterations |

---

# 16. Advantages of Loops

- Reduces code duplication.
- Improves readability.
- Makes programs easier to maintain.
- Simplifies repetitive tasks.
- Efficiently processes large amounts of data.
- Essential for algorithms and data structures.

---

# 17. Limitations of Loops

- Incorrect conditions may cause infinite loops.
- Complex nested loops may reduce readability.
- Improper updates can cause logical errors.
- Excessive nesting may reduce performance.

---

# 18. Common Theoretical Pitfalls

## Forgetting the Update Statement

Incorrect

```c
int i = 1;

while(i <= 5)
{
    printf("%d", i);
}
```

This creates an infinite loop because `i` is never updated.

---

## Using Assignment Instead of Comparison

Incorrect

```c
while(i = 5)
```

Correct

```c
while(i == 5)
```

---

## Incorrect Loop Boundary

Incorrect

```c
for(int i = 1; i < 5; i++)
```

If the intention is to print 1 through 5, the condition should be

```c
i <= 5
```

---

## Modifying the Loop Variable Unexpectedly

Avoid changing the loop variable inside the loop body unless necessary.

Example

```c
for(int i = 1; i <= 10; i++)
{
    i += 2;
}
```

This can make the loop behavior difficult to understand.

---

# 19. Best Practices

- Choose the appropriate loop for the problem.
- Use meaningful loop variable names.
- Avoid infinite loops unless intentionally required.
- Keep loop bodies simple and readable.
- Minimize deeply nested loops.
- Ensure loop variables are initialized and updated correctly.
- Use braces `{}` even for single-statement loops.

---

# 20. Summary

- Loops execute a block of code repeatedly while a condition is true.
- C provides three primary loops: `while`, `do-while`, and `for`.
- `while` and `for` are entry-controlled loops.
- `do-while` is an exit-controlled loop and always executes at least once.
- Nested loops are used for multidimensional problems such as matrices and pattern printing.
- Proper initialization, condition checking, and updating are essential for correct loop execution.
- Loops are widely used in algorithms, arrays, strings, matrices, searching, sorting, and system programming.
- Careful loop design helps avoid infinite loops and logical errors.