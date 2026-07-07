# Assignment Operators in C

Assignment operators are used to **assign values to variables**. They are one of the most fundamental operators in C and are used in almost every program.

The simplest assignment operator is the **assignment operator (`=`)**, while compound assignment operators combine an arithmetic or bitwise operation with assignment.

---

# 1. Assignment Operators

| Operator | Description | Example | Equivalent Expression |
|----------|-------------|---------|-----------------------|
| `=` | Simple Assignment | `a = b` | Assign `b` to `a` |
| `+=` | Add and Assign | `a += b` | `a = a + b` |
| `-=` | Subtract and Assign | `a -= b` | `a = a - b` |
| `*=` | Multiply and Assign | `a *= b` | `a = a * b` |
| `/=` | Divide and Assign | `a /= b` | `a = a / b` |
| `%=` | Modulus and Assign | `a %= b` | `a = a % b` |
| `<<=` | Left Shift and Assign | `a <<= 2` | `a = a << 2` |
| `>>=` | Right Shift and Assign | `a >>= 2` | `a = a >> 2` |
| `&=` | Bitwise AND and Assign | `a &= b` | `a = a & b` |
| `^=` | Bitwise XOR and Assign | `a ^= b` | `a = a ^ b` |
| `|=` | Bitwise OR and Assign | `a |= b` | `a = a \| b` |

---

# 2. Simple Assignment Operator (`=`)

The assignment operator stores the value of the right-hand side (RHS) into the variable on the left-hand side (LHS).

Syntax

```c
variable = expression;
```

Example

```c
int x;

x = 10;
```

After execution,

```
x = 10
```

Another example

```c
int a;

a = 5 + 3;
```

Result

```
a = 8
```

---

# 3. Compound Assignment Operators

Compound assignment operators perform an operation and assign the result back to the same variable.

Instead of writing

```c
a = a + b;
```

we can write

```c
a += b;
```

This makes programs shorter and easier to read.

---

# 4. Addition Assignment (`+=`)

Adds the right operand to the left operand and stores the result.

Syntax

```c
a += b;
```

Equivalent to

```c
a = a + b;
```

Example

```c
int a = 10;

a += 5;
```

Output

```
15
```

---

# 5. Subtraction Assignment (`-=`)

Subtracts the right operand from the left operand.

Syntax

```c
a -= b;
```

Equivalent to

```c
a = a - b;
```

Example

```c
int a = 20;

a -= 7;
```

Output

```
13
```

---

# 6. Multiplication Assignment (`*=`)

Multiplies the variable by another value.

Syntax

```c
a *= b;
```

Equivalent to

```c
a = a * b;
```

Example

```c
int a = 6;

a *= 5;
```

Output

```
30
```

---

# 7. Division Assignment (`/=`)

Divides the variable by another value.

Syntax

```c
a /= b;
```

Equivalent to

```c
a = a / b;
```

Example

```c
int a = 20;

a /= 4;
```

Output

```
5
```

For integers, the fractional part is discarded.

Example

```c
int a = 15;

a /= 2;
```

Output

```
7
```

---

# 8. Modulus Assignment (`%=`)

Calculates the remainder after division.

Syntax

```c
a %= b;
```

Equivalent to

```c
a = a % b;
```

Example

```c
int a = 20;

a %= 6;
```

Output

```
2
```

---

# 9. Bitwise Assignment Operators

These operators combine bitwise operations with assignment.

## Left Shift Assignment (`<<=`)

Example

```c
int x = 5;

x <<= 1;
```

Binary

```
5 = 00000101

After shift

10 = 00001010
```

Output

```
10
```

---

## Right Shift Assignment (`>>=`)

Example

```c
int x = 20;

x >>= 2;
```

Output

```
5
```

---

## Bitwise AND Assignment (`&=`)

Example

```c
int a = 12;
int b = 10;

a &= b;
```

Output

```
8
```

---

## Bitwise XOR Assignment (`^=`)

Example

```c
int a = 12;
int b = 10;

a ^= b;
```

Output

```
6
```

---

## Bitwise OR Assignment (`|=`)

Example

```c
int a = 12;
int b = 10;

a |= b;
```

Output

```
14
```

---

# 10. Chained Assignment

Multiple variables can be assigned the same value in one statement.

Example

```c
int a, b, c;

a = b = c = 100;
```

Execution order

```
c = 100

b = 100

a = 100
```

All variables contain

```
100
```

---

# 11. Assignment in Expressions

The assignment operator itself returns the assigned value.

Example

```c
int x;
int y;

y = (x = 10);
```

Result

```
x = 10

y = 10
```

---

# 12. Operator Associativity

The assignment operator has **right-to-left associativity**.

Example

```c
a = b = c = 50;
```

Execution

```
c = 50

b = 50

a = 50
```

---

# 13. Operator Precedence

Assignment operators have **lower precedence** than arithmetic, relational, logical, and bitwise operators.

Example

```c
x = 5 + 3 * 2;
```

Multiplication happens first.

```
3 * 2 = 6

5 + 6 = 11

x = 11
```

---

# 14. Common Theoretical Pitfalls

## Confusing `=` with `==`

Incorrect

```c
if(a = 5)
```

Correct

```c
if(a == 5)
```

The first assigns 5 to `a`, while the second compares `a` with 5.

---

## Division by Zero

Invalid

```c
a /= 0;
```

This results in **undefined behaviour**.

---

## Modulus by Zero

Invalid

```c
a %= 0;
```

Also results in **undefined behaviour**.

---

## Assignment to Constants

Invalid

```c
5 = a;
```

Only variables can appear on the left-hand side of an assignment.

---

# 15. Best Practices

- Initialize variables before using them.
- Use compound assignment operators to improve readability.
- Avoid confusing `=` with `==`.
- Use parentheses when expressions become complex.
- Never divide or take modulus by zero.
- Use meaningful variable names.

---

# 16. Summary

- Assignment operators store values into variables.
- The simple assignment operator is `=`.
- Compound assignment operators combine an operation with assignment.
- Assignment operators are right-to-left associative.
- Assignment expressions return the assigned value.
- Compound assignment operators simplify code and improve readability.
- Bitwise assignment operators are useful in system programming and embedded systems.
- Avoid assignment inside conditional expressions unless it is intentional.