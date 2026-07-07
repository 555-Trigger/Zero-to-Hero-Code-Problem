# Ternary Operator in C

The **Ternary Operator**, also known as the **Conditional Operator**, is the **only operator in C that requires three operands**.

It provides a concise way to write simple **if-else** statements in a single expression.

The ternary operator evaluates a condition and returns one of two expressions depending on whether the condition is **true** or **false**.

It is widely used in:

- Decision making
- Conditional assignments
- Returning values
- Simple comparisons
- Improving code readability

---

# 1. Ternary Operator

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `?:` | Ternary (Conditional) Operator | Evaluates a condition and returns one of two expressions | `a>b ? a : b` |

---

# 2. Syntax of the Ternary Operator

General Syntax

```c
condition ? expression1 : expression2;
```

Where

- **condition** → The expression to be evaluated.
- **expression1** → Executed if the condition is **True**.
- **expression2** → Executed if the condition is **False**.

Flow

```
           Condition
               │
        ┌──────┴──────┐
      True          False
        │              │
Expression1      Expression2
        │              │
        └──────┬───────┘
               │
            Result
```

---

# 3. How the Ternary Operator Works

The condition is evaluated first.

- If the condition is **True (non-zero)**, the first expression is executed.
- If the condition is **False (0)**, the second expression is executed.

Example

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;
```

Evaluation

```
10 > 20

False

Return b
```

Output

```
20
```

---

# 4. Finding the Maximum of Two Numbers

Example

```c
int a = 25;
int b = 15;

int max = (a > b) ? a : b;

printf("%d", max);
```

Output

```
25
```

Equivalent if-else

```c
if(a > b)
    max = a;
else
    max = b;
```

---

# 5. Finding the Minimum of Two Numbers

Example

```c
int a = 25;
int b = 15;

int min = (a < b) ? a : b;

printf("%d", min);
```

Output

```
15
```

---

# 6. Checking Even or Odd

Example

```c
int num = 8;

(num % 2 == 0) ? printf("Even") : printf("Odd");
```

Output

```
Even
```

Equivalent if-else

```c
if(num % 2 == 0)
    printf("Even");
else
    printf("Odd");
```

---

# 7. Checking Eligibility

Example

```c
int age = 20;

(age >= 18) ? printf("Eligible") : printf("Not Eligible");
```

Output

```
Eligible
```

---

# 8. Assigning Values Using the Ternary Operator

Example

```c
int marks = 85;

char grade = (marks >= 40) ? 'P' : 'F';
```

Output

```
P
```

---

# 9. Nested Ternary Operator

A ternary operator can contain another ternary operator.

Syntax

```c
condition1 ?
expression1 :
(condition2 ? expression2 : expression3);
```

Example

```c
int a = 15;
int b = 25;
int c = 10;

int largest = (a > b)
              ? ((a > c) ? a : c)
              : ((b > c) ? b : c);

printf("%d", largest);
```

Output

```
25
```

Equivalent if-else

```c
if(a > b)
{
    if(a > c)
        largest = a;
    else
        largest = c;
}
else
{
    if(b > c)
        largest = b;
    else
        largest = c;
}
```

---

# 10. Ternary Operator with Strings

Example

```c
int login = 1;

printf("%s", login ? "Success" : "Failure");
```

Output

```
Success
```

---

# 11. Ternary Operator with Function Return

Example

```c
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}
```

Calling

```c
maximum(10,20);
```

Returns

```
20
```

---

# 12. Operator Precedence

The ternary operator has **lower precedence** than arithmetic, relational, logical, and bitwise operators, but **higher precedence** than the assignment operator.

Priority

| Priority | Operators | Associativity |
|----------|-----------|---------------|
| Highest | `()` | Left to Right |
| | `*` `/` `%` | Left to Right |
| | `+` `-` | Left to Right |
| | `<` `<=` `>` `>=` | Left to Right |
| | `==` `!=` | Left to Right |
| | `&&` | Left to Right |
| | `||` | Left to Right |
| | `?:` | Right to Left |
| Lowest | `=` `+=` `-=` etc. | Right to Left |

Example

```c
int x = (5 > 3) ? 10 : 20;
```

Evaluation

```
5 > 3

True

Return 10
```

Output

```
10
```

---

# 13. Associativity

The ternary operator follows **Right-to-Left Associativity**.

Example

```c
a ? b : c ? d : e
```

Evaluated as

```c
a ? b : (c ? d : e)
```

---

# 14. Advantages of the Ternary Operator

- Makes simple decision-making concise.
- Reduces the number of lines of code.
- Can be used directly in assignments.
- Can be used in function return statements.
- Improves readability for simple conditions.

---

# 15. Limitations of the Ternary Operator

- Difficult to read when nested deeply.
- Not suitable for complex decision-making.
- Excessive nesting reduces code maintainability.
- Cannot replace every `if-else` statement.

---

# 16. Common Theoretical Pitfalls

## Forgetting Parentheses

Incorrect

```c
int max = a > b ? a : b + 5;
```

Better

```c
int max = (a > b) ? a : (b + 5);
```

---

## Overusing Nested Ternary Operators

Avoid

```c
a>b ? x : c>d ? y : e>f ? z : k;
```

Such expressions are difficult to understand.

---

## Confusing with Assignment

Incorrect

```c
a = b ? c : d;
```

This is valid C, but beginners often misunderstand it.

Evaluation

```
If b is non-zero

Assign c

Otherwise

Assign d
```

---

## Using Statements Instead of Expressions

Incorrect

```c
condition ?
printf("Yes");
:
printf("No");
```

Correct

```c
condition ? printf("Yes") : printf("No");
```

The ternary operator works with **expressions**, not statement blocks.

---

# 17. Applications of the Ternary Operator

The ternary operator is commonly used in

- Maximum and minimum calculations
- Input validation
- Conditional assignments
- Returning values from functions
- Menu-driven programs
- Embedded systems
- Competitive programming
- Simple decision-making
- Display messages
- Data processing

---

# 18. Best Practices

- Use the ternary operator only for simple conditions.
- Prefer `if-else` statements for complex logic.
- Use parentheses to improve readability.
- Avoid deeply nested ternary operators.
- Keep expressions short and meaningful.

---

# 19. Summary

- The ternary operator (`?:`) is the only operator in C that takes **three operands**.
- It evaluates a condition and selects one of two expressions.
- It is a compact alternative to simple `if-else` statements.
- The operator follows **Right-to-Left Associativity**.
- It has lower precedence than arithmetic, relational, logical, and bitwise operators, but higher precedence than assignment operators.
- Nested ternary operators are possible but should be used sparingly.
- The ternary operator improves code readability when used appropriately.
- Prefer `if-else` statements for complex decision-making to maintain clarity.