# Conditional Statements in C

Conditional statements are used to **control the flow of program execution** based on one or more conditions.

They enable a program to make decisions by executing different blocks of code depending on whether a condition evaluates to **True** or **False**.

Conditional statements form the foundation of **decision-making**, **input validation**, **menu-driven programs**, **algorithms**, and **real-world applications**.

In C, conditional statements evaluate expressions that return:

- **1 (True)** → Non-zero value
- **0 (False)** → Zero

---

# 1. Types of Conditional Statements in C

| Statement | Description | Syntax |
|-----------|-------------|--------|
| `if` | Executes a block if the condition is true | `if(condition)` |
| `if-else` | Executes one block if true and another if false | `if(condition)...else` |
| `Nested if` | An `if` statement inside another `if` | `if(){ if(){} }` |
| `else-if Ladder` | Tests multiple conditions sequentially | `if...else if...else` |
| `switch` | Selects one block from multiple choices | `switch(expression)` |
| `Conditional (Ternary) Operator` | Short form of `if-else` | `condition ? expr1 : expr2` |

---

# 2. The `if` Statement

The **if statement** executes a block of code only if the specified condition is **true**.

Syntax

```c
if(condition)
{
    statements;
}
```

Flow

```
      Condition
          │
     ┌────┴────┐
   True      False
     │          │
Statements   Skip Block
```

Example

```c
int age = 20;

if(age >= 18)
{
    printf("Eligible to Vote");
}
```

Output

```
Eligible to Vote
```

---

# 3. The `if-else` Statement

The `if-else` statement executes one block when the condition is true and another block when it is false.

Syntax

```c
if(condition)
{
    statements;
}
else
{
    statements;
}
```

Flow

```
        Condition
            │
      ┌─────┴─────┐
    True        False
      │            │
   If Block    Else Block
```

Example

```c
int marks = 35;

if(marks >= 40)
{
    printf("Pass");
}
else
{
    printf("Fail");
}
```

Output

```
Fail
```

---

# 4. Nested `if` Statement

A nested `if` statement is an `if` statement placed inside another `if` statement.

Syntax

```c
if(condition1)
{
    if(condition2)
    {
        statements;
    }
}
```

Example

```c
int age = 25;
int citizen = 1;

if(age >= 18)
{
    if(citizen)
    {
        printf("Eligible to Vote");
    }
}
```

Output

```
Eligible to Vote
```

---

# 5. The `else-if` Ladder

The `else-if` ladder allows multiple conditions to be checked one after another.

Only the first true condition is executed.

Syntax

```c
if(condition1)
{
}
else if(condition2)
{
}
else if(condition3)
{
}
else
{
}
```

Flow

```
Condition 1
     │
 True?──Yes→ Execute
     │
    No
     │
Condition 2
     │
 True?──Yes→ Execute
     │
    No
     │
Condition 3
     │
 True?──Yes→ Execute
     │
    No
     │
 Else Block
```

Example

```c
int marks = 78;

if(marks >= 90)
{
    printf("Grade A");
}
else if(marks >= 75)
{
    printf("Grade B");
}
else if(marks >= 50)
{
    printf("Grade C");
}
else
{
    printf("Fail");
}
```

Output

```
Grade B
```

---

# 6. The `switch` Statement

The `switch` statement selects one block of code from multiple alternatives based on the value of an expression.

Syntax

```c
switch(expression)
{
    case value1:
        statements;
        break;

    case value2:
        statements;
        break;

    default:
        statements;
}
```

Flow

```
      Expression
           │
    ┌──────┴──────┐
  Case1  Case2  Case3
    │       │      │
 Execute Matching Case
           │
        Default
```

Example

```c
int day = 2;

switch(day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid");
}
```

Output

```
Tuesday
```

---

# 7. The `default` Case

The `default` block executes when no case matches.

Example

```c
int choice = 10;

switch(choice)
{
    case 1:
        printf("One");
        break;

    default:
        printf("Invalid Choice");
}
```

Output

```
Invalid Choice
```

---

# 8. Fall-Through in `switch`

If the `break` statement is omitted, execution continues into the next case.

Example

```c
int x = 1;

switch(x)
{
    case 1:
        printf("A");

    case 2:
        printf("B");
}
```

Output

```
AB
```

This behavior is known as **fall-through**.

---

# 9. Ternary (Conditional) Operator

The ternary operator is a shorthand form of the `if-else` statement.

Syntax

```c
condition ? expression1 : expression2;
```

Example

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;
```

Output

```
20
```

Equivalent `if-else`

```c
if(a > b)
    max = a;
else
    max = b;
```

---

# 10. Boolean Evaluation in C

C considers

```
0
```

as

```
False
```

Any non-zero value is considered

```
True
```

Example

```c
if(100)
{
    printf("True");
}
```

Output

```
True
```

---

# 11. Operator Precedence in Conditions

Arithmetic operators are evaluated before relational operators.

Relational operators are evaluated before logical operators.

Example

```c
5 + 3 > 6 && 10 < 20
```

Evaluation

```
5 + 3

↓

8

↓

8 > 6

↓

True

↓

10 < 20

↓

True

↓

True && True
```

Output

```
1
```

---

# 12. Applications of Conditional Statements

Conditional statements are widely used in

- Decision making
- Login systems
- Banking software
- ATM applications
- Student grading systems
- Menu-driven programs
- Calculator programs
- Input validation
- Password verification
- Search algorithms
- Game development
- Embedded systems

---

# 13. Comparison of Conditional Statements

| Statement | Conditions | Executes | Best Used For |
|-----------|------------|----------|---------------|
| `if` | One | One block | Simple decisions |
| `if-else` | One | Two blocks | Binary decisions |
| `Nested if` | Multiple | Nested blocks | Dependent conditions |
| `else-if Ladder` | Multiple | One matching block | Multiple choices |
| `switch` | Multiple constant values | Matching case | Menu-driven programs |
| `?:` | One | One of two expressions | Short conditional expressions |

---

# 14. Common Theoretical Pitfalls

## Using `=` Instead of `==`

Incorrect

```c
if(a = 10)
```

Correct

```c
if(a == 10)
```

---

## Missing Braces

Incorrect

```c
if(a > b)
    printf("A");
    printf("B");
```

Only the first statement belongs to the `if`.

Use braces to avoid confusion.

---

## Forgetting `break` in `switch`

Incorrect

```c
case 1:
    printf("One");
```

Without `break`, execution continues to the next case.

---

## Duplicate Case Labels

Incorrect

```c
case 1:
case 1:
```

Each `case` value must be unique.

---

## Using Non-Constant Case Values

Incorrect

```c
case x:
```

`case` labels must be **constant integral expressions**.

---

# 15. Best Practices

- Always use braces `{}` even for single statements.
- Write conditions clearly and simply.
- Use `switch` for menu-driven programs with constant values.
- Use `if-else` for complex logical conditions.
- Always include a `default` case in a `switch`.
- Avoid deeply nested `if` statements when possible.
- Use meaningful variable names.

---

# 16. Summary

- Conditional statements control the flow of program execution.
- C provides `if`, `if-else`, `nested if`, `else-if ladder`, `switch`, and the ternary operator for decision making.
- Conditions evaluate to **True (non-zero)** or **False (0)**.
- The `if` statement executes code only when a condition is true.
- The `if-else` statement chooses between two blocks.
- The `else-if` ladder handles multiple conditions.
- The `switch` statement selects one block based on a constant expression.
- The ternary operator provides a concise alternative to simple `if-else` statements.
- Use braces, `break` statements, and clear conditions to write safe and readable code.