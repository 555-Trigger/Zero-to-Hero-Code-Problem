# Logical Operators in C

Logical operators are used to **combine or modify relational expressions and logical conditions**.

They evaluate expressions and return a logical result:

- **1 (True)** if the condition is satisfied.
- **0 (False)** if the condition is not satisfied.

Logical operators are extensively used in **decision making**, **loops**, **input validation**, and **complex conditional expressions**.

---

# 1. Logical Operators

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&&` | Logical AND | True if both conditions are true | `a > b && b > c` |
| `||` | Logical OR | True if at least one condition is true | `a > b || b > c` |
| `!` | Logical NOT | Reverses the logical result | `!(a > b)` |

---

# 2. Logical AND Operator (`&&`)

The Logical AND operator returns **True** only when **both operands are true**.

Syntax

```c
expression1 && expression2
```

Truth Table

| Expression 1 | Expression 2 | Result |
|--------------|--------------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Example

```c
int a = 10;
int b = 20;

printf("%d", a < b && b > 15);
```

Evaluation

```
10 < 20   → True

20 > 15   → True

True && True → True
```

Output

```
1
```

---

# 3. Logical OR Operator (`||`)

The Logical OR operator returns **True** if **at least one operand is true**.

Syntax

```c
expression1 || expression2
```

Truth Table

| Expression 1 | Expression 2 | Result |
|--------------|--------------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

Example

```c
int age = 16;

printf("%d", age >= 18 || age >= 15);
```

Evaluation

```
16 >= 18   → False

16 >= 15   → True

False || True → True
```

Output

```
1
```

---

# 4. Logical NOT Operator (`!`)

The Logical NOT operator reverses the logical value.

Syntax

```c
!expression
```

Truth Table

| Expression | Result |
|------------|--------|
| 0 | 1 |
| 1 | 0 |

Example

```c
int a = 10;

printf("%d", !(a > 20));
```

Evaluation

```
10 > 20

False

!False

True
```

Output

```
1
```

---

# 5. Boolean Interpretation in C

Logical operators work with logical values.

In C

```
0
```

represents

```
False
```

Any non-zero value represents

```
True
```

Example

```c
printf("%d", 5 && 10);
```

Output

```
1
```

because both operands are non-zero.

Example

```c
printf("%d", 0 || 8);
```

Output

```
1
```

---

# 6. Combining Relational Operators

Logical operators are usually combined with relational operators.

Example

```c
int marks = 75;

printf("%d", marks >= 35 && marks <= 100);
```

Evaluation

```
75 >= 35

True

75 <= 100

True

True && True
```

Output

```
1
```

---

# 7. Logical Operators in Conditional Statements

Logical operators simplify multiple conditions.

Example

```c
int age = 22;
int citizen = 1;

if(age >= 18 && citizen)
{
    printf("Eligible to Vote");
}
```

Output

```
Eligible to Vote
```

---

# 8. Logical Operators in Loops

Logical operators are frequently used in loops.

Example

```c
int i = 1;

while(i >= 1 && i <= 5)
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

# 9. Short-Circuit Evaluation

C performs **short-circuit evaluation** for logical operators.

## Logical AND (`&&`)

If the first condition is **False**, the second condition is **not evaluated**.

Example

```c
int a = 5;

if(a < 2 && a++ > 0)
{
}
```

Evaluation

```
a < 2

False

Second condition skipped
```

Value of

```
a
```

remains

```
5
```

---

## Logical OR (`||`)

If the first condition is **True**, the second condition is **not evaluated**.

Example

```c
int a = 5;

if(a > 2 || a++ > 0)
{
}
```

Evaluation

```
a > 2

True

Second condition skipped
```

Value of

```
a
```

remains

```
5
```

---

# 10. Operator Precedence

Logical operators have lower precedence than arithmetic and relational operators.

Priority

| Priority | Operators | Associativity |
|----------|-----------|---------------|
| Highest | `()` | Left to Right |
| | `*` `/` `%` | Left to Right |
| | `+` `-` | Left to Right |
| | `<` `<=` `>` `>=` | Left to Right |
| | `==` `!=` | Left to Right |
| | `!` | Right to Left |
| | `&&` | Left to Right |
| Lowest | `||` | Left to Right |

Example

```c
5 + 3 > 6 && 8 < 10
```

Evaluation

```
5 + 3 = 8

8 > 6

True

8 < 10

True

True && True
```

Output

```
1
```

---

# 11. Associativity

Logical operators follow the following associativity.

| Operator | Associativity |
|----------|---------------|
| `!` | Right to Left |
| `&&` | Left to Right |
| `||` | Left to Right |

---

# 12. Common Theoretical Pitfalls

## Using Bitwise Operators Instead of Logical Operators

Incorrect

```c
if(a > b & b > c)
```

Correct

```c
if(a > b && b > c)
```

`&` is a bitwise operator.

`&&` is a logical operator.

---

## Forgetting Short-Circuit Evaluation

Example

```c
int x = 5;

if(x > 0 || x++)
{
}
```

The increment is never executed because the first condition is already true.

---

## Confusing Non-Zero with One

Example

```c
if(100)
```

This condition is

```
True
```

because every non-zero value is considered true.

---

## Overusing Complex Conditions

Instead of

```c
if(a>b && b>c && c>d && d>e && e>f)
```

Break complex conditions into smaller expressions to improve readability.

---

# 13. Applications of Logical Operators

Logical operators are used in

- Decision making
- Multiple condition checking
- Loops
- Input validation
- Searching algorithms
- Sorting algorithms
- Authentication systems
- Menu-driven programs
- Range checking
- Mathematical computations

---

# 14. Summary

- Logical operators combine or modify logical expressions.
- There are three logical operators in C: `&&`, `||`, and `!`.
- Logical AND returns true only if both operands are true.
- Logical OR returns true if at least one operand is true.
- Logical NOT reverses the logical value.
- Logical operators return either **1 (True)** or **0 (False)**.
- C uses **0** for False and any non-zero value for True.
- Logical operators support **short-circuit evaluation**, improving efficiency.
- Logical operators have lower precedence than arithmetic and relational operators.
- Avoid confusing logical operators (`&&`, `||`) with bitwise operators (`&`, `|`).