# Operator Precedence and Associativity in C

Operator precedence and associativity determine **how expressions containing multiple operators are evaluated**.

When an expression contains more than one operator, C follows a predefined order of evaluation known as **operator precedence**.

If two or more operators have the same precedence, **associativity** determines the order in which they are evaluated.

Understanding precedence and associativity is essential for writing **correct**, **efficient**, and **readable** C programs.

---

# 1. What is Operator Precedence?

**Operator Precedence** is the priority assigned to operators.

Operators with **higher precedence** are evaluated before operators with **lower precedence**.

Example

```c
int result = 5 + 3 * 2;
```

Evaluation

```
3 × 2 = 6

5 + 6 = 11
```

Output

```
11
```

Multiplication is performed before addition because `*` has higher precedence than `+`.

---

# 2. What is Associativity?

**Associativity** determines the direction in which operators of the **same precedence** are evaluated.

Associativity can be

- Left to Right
- Right to Left

Example

```c
20 / 5 * 2
```

Both `/` and `*` have the same precedence.

They follow **Left-to-Right Associativity**.

Evaluation

```
20 / 5 = 4

4 × 2 = 8
```

Output

```
8
```

---

# 3. Why are Precedence and Associativity Important?

Without precedence rules, expressions could produce different results.

Example

```c
2 + 3 * 4
```

Correct Evaluation

```
3 × 4 = 12

2 + 12 = 14
```

If evaluated incorrectly

```
2 + 3 = 5

5 × 4 = 20
```

This would produce an incorrect result.

---

# 4. Complete Operator Precedence Table

| Priority | Operators | Description | Associativity |
|----------|-----------|-------------|---------------|
| 1 (Highest) | `()` `[]` `->` `.` `function()` `postfix ++` `postfix --` | Postfix Operators | Left to Right |
| 2 | `prefix ++` `prefix --` `+` `-` `!` `~` `(type)` `*` `&` `sizeof` | Unary Operators | Right to Left |
| 3 | `*` `/` `%` | Multiplicative | Left to Right |
| 4 | `+` `-` | Additive | Left to Right |
| 5 | `<<` `>>` | Shift | Left to Right |
| 6 | `<` `<=` `>` `>=` | Relational | Left to Right |
| 7 | `==` `!=` | Equality | Left to Right |
| 8 | `&` | Bitwise AND | Left to Right |
| 9 | `^` | Bitwise XOR | Left to Right |
| 10 | `\|` | Bitwise OR | Left to Right |
| 11 | `&&` | Logical AND | Left to Right |
| 12 | `\|\|` | Logical OR | Left to Right |
| 13 | `?:` | Conditional (Ternary) | Right to Left |
| 14 | `=` `+=` `-=` `*=` `/=` `%=` `<<=` `>>=` `&=` `^=` `\|=` | Assignment | Right to Left |
| 15 (Lowest) | `,` | Comma Operator | Left to Right |

---

# 5. Parentheses (`()`)

Parentheses have the highest precedence.

They override the normal order of evaluation.

Example

```c
int result = (5 + 3) * 2;
```

Evaluation

```
5 + 3 = 8

8 × 2 = 16
```

Output

```
16
```

---

# 6. Multiplication Before Addition

Example

```c
10 + 4 * 3
```

Evaluation

```
4 × 3 = 12

10 + 12 = 22
```

Output

```
22
```

---

# 7. Division and Multiplication

Example

```c
24 / 6 * 2
```

Evaluation

```
24 / 6 = 4

4 × 2 = 8
```

Output

```
8
```

Because `/` and `*` have the same precedence and are evaluated **Left to Right**.

---

# 8. Addition and Subtraction

Example

```c
20 - 5 + 3
```

Evaluation

```
20 - 5 = 15

15 + 3 = 18
```

Output

```
18
```

---

# 9. Relational and Arithmetic Operators

Arithmetic operators have higher precedence than relational operators.

Example

```c
5 + 3 > 6
```

Evaluation

```
5 + 3 = 8

8 > 6

True
```

Output

```
1
```

---

# 10. Relational and Logical Operators

Relational operators are evaluated before logical operators.

Example

```c
5 > 3 && 8 < 10
```

Evaluation

```
5 > 3

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

# 11. Bitwise and Logical Operators

Bitwise operators have higher precedence than logical operators.

Example

```c
5 & 3 == 1
```

Evaluation

```
3 == 1

False

5 & 0

0
```

Since `==` has higher precedence than `&`, the expression is parsed as:

```c
5 & (3 == 1)
```

To perform the bitwise operation first, use parentheses:

```c
(5 & 3) == 1
```

---

# 12. Assignment Operator

Assignment operators have very low precedence.

Example

```c
int x;

x = 5 + 3 * 2;
```

Evaluation

```
3 × 2 = 6

5 + 6 = 11

Assign 11 to x
```

Output

```
11
```

---

# 13. Ternary Operator

The ternary operator has lower precedence than logical operators but higher precedence than assignment operators.

Example

```c
int max = (10 > 5) ? 10 : 5;
```

Output

```
10
```

---

# 14. Right-to-Left Associativity

Operators such as assignment and unary operators follow Right-to-Left associativity.

Example

```c
int a, b, c;

a = b = c = 100;
```

Evaluation

```
c = 100

↓

b = 100

↓

a = 100
```

Output

```
a = 100

b = 100

c = 100
```

---

# 15. Left-to-Right Associativity

Most binary operators follow Left-to-Right associativity.

Example

```c
100 / 10 / 2
```

Evaluation

```
100 / 10 = 10

10 / 2 = 5
```

Output

```
5
```

---

# 16. Parentheses Improve Readability

Even when precedence rules are known, parentheses make expressions easier to understand.

Instead of

```c
salary + bonus * taxRate
```

Prefer

```c
salary + (bonus * taxRate)
```

This improves code readability.

---

# 17. Common Theoretical Pitfalls

## Assuming Left-to-Right Evaluation Always

Incorrect assumption

```c
5 + 3 * 2
```

Addition is **not** performed first.

---

## Forgetting Parentheses

Instead of

```c
a & b == c
```

Write

```c
(a & b) == c
```

if that is the intended logic.

---

## Misunderstanding Associativity

Example

```c
a = b = c;
```

This is evaluated as

```c
a = (b = c);
```

not

```c
(a = b) = c;
```

---

## Mixing Too Many Operators

Avoid writing

```c
a + b * c > d && e | f ^ g
```

Break large expressions into smaller parts for readability.

---

# 18. Best Practices

- Learn the operator precedence table.
- Use parentheses whenever the evaluation order is not immediately obvious.
- Avoid relying solely on precedence for complex expressions.
- Write clear and maintainable code.
- Break long expressions into smaller statements.
- Use meaningful variable names to improve readability.

---

# 19. Applications of Precedence and Associativity

Understanding precedence and associativity is important in

- Arithmetic calculations
- Decision-making statements
- Loop conditions
- Bitwise programming
- Embedded systems
- Expression evaluation
- Compiler design
- Mathematical algorithms
- Competitive programming
- System programming

---

# 20. Summary

- **Operator precedence** determines which operator is evaluated first.
- **Associativity** determines the order of evaluation when operators have the same precedence.
- Parentheses (`()`) have the highest precedence and should be used to make expressions explicit.
- Most binary operators follow **Left-to-Right Associativity**.
- Unary, conditional (`?:`), and assignment operators follow **Right-to-Left Associativity**.
- Understanding precedence prevents logical errors and improves code correctness.
- Use parentheses generously to improve readability and reduce ambiguity.
- Avoid writing overly complex expressions that depend heavily on precedence rules.