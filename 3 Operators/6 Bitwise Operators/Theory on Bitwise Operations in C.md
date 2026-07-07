# Bitwise Operators in C

Bitwise operators are used to **manipulate individual bits** of integer data at the binary level.

Unlike arithmetic or logical operators, bitwise operators work directly on the **binary representation** of numbers.

They are widely used in:

- Embedded Systems
- Operating Systems
- Device Drivers
- Networking
- Cryptography
- Data Compression
- Graphics Programming
- Performance Optimization

**Note:** Bitwise operators work only with **integral data types** such as `char`, `short`, `int`, `long`, and `long long`. They should not be used with floating-point types (`float`, `double`).

---

# 1. Bitwise Operators

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&` | Bitwise AND | Sets bit to 1 only if both bits are 1 | `a & b` |
| `\|` | Bitwise OR | Sets bit to 1 if at least one bit is 1 | `a \| b` |
| `^` | Bitwise XOR | Sets bit to 1 if bits are different | `a ^ b` |
| `~` | Bitwise NOT (One's Complement) | Inverts every bit | `~a` |
| `<<` | Left Shift | Shifts bits to the left | `a << 2` |
| `>>` | Right Shift | Shifts bits to the right | `a >> 2` |

---

# 2. Binary Representation

Before understanding bitwise operators, it is important to understand binary numbers.

Example

```
Decimal      Binary

5            00000101

10           00001010

12           00001100

15           00001111
```

Bitwise operators perform operations on each corresponding bit.

---

# 3. Bitwise AND (`&`)

The Bitwise AND operator compares corresponding bits.

Rule

```
1 & 1 = 1

1 & 0 = 0

0 & 1 = 0

0 & 0 = 0
```

Truth Table

| Bit A | Bit B | A & B |
|-------|-------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Example

```c
int a = 12;
int b = 10;

printf("%d", a & b);
```

Binary

```
12 = 00001100

10 = 00001010

----------------

     00001000
```

Output

```
8
```

---

# 4. Bitwise OR (`|`)

The Bitwise OR operator returns 1 if either corresponding bit is 1.

Rule

```
1 | 1 = 1

1 | 0 = 1

0 | 1 = 1

0 | 0 = 0
```

Truth Table

| Bit A | Bit B | A \| B |
|-------|-------|---------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

Example

```c
int a = 12;
int b = 10;

printf("%d", a | b);
```

Binary

```
12 = 00001100

10 = 00001010

----------------

     00001110
```

Output

```
14
```

---

# 5. Bitwise XOR (`^`)

The Bitwise XOR operator returns 1 if corresponding bits are different.

Rule

```
1 ^ 1 = 0

1 ^ 0 = 1

0 ^ 1 = 1

0 ^ 0 = 0
```

Truth Table

| Bit A | Bit B | A ^ B |
|-------|-------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

Example

```c
int a = 12;
int b = 10;

printf("%d", a ^ b);
```

Binary

```
12 = 00001100

10 = 00001010

----------------

     00000110
```

Output

```
6
```

---

# 6. Bitwise NOT (`~`)

The Bitwise NOT operator inverts every bit.

Rule

```
1 becomes 0

0 becomes 1
```

Example

```c
int a = 5;

printf("%d", ~a);
```

Binary (8-bit representation)

```
5

00000101

~

11111010
```

For signed integers (using two's complement), the output is

```
-6
```

Explanation

```
~x = -(x + 1)
```

Therefore

```
~5 = -6
```

---

# 7. Left Shift Operator (`<<`)

The left shift operator shifts all bits toward the left.

Zeros are inserted on the right.

Syntax

```c
a << n
```

Example

```c
int a = 5;

printf("%d", a << 1);
```

Binary

```
5

00000101

Shift Left

00001010
```

Output

```
10
```

Another Example

```c
5 << 2
```

Output

```
20
```

Observation

```
Left shifting by one position approximately multiplies the number by 2.
```

---

# 8. Right Shift Operator (`>>`)

The right shift operator shifts bits toward the right.

Syntax

```c
a >> n
```

Example

```c
int a = 20;

printf("%d", a >> 2);
```

Binary

```
20

00010100

Shift Right

00000101
```

Output

```
5
```

Observation

```
Right shifting by one position approximately divides the number by 2.
```

---

# 9. Signed vs Unsigned Right Shift

For **unsigned integers**, zeros are shifted into the leftmost bits.

For **signed integers**, the behavior depends on the implementation. Most modern systems perform an **arithmetic right shift**, preserving the sign bit, but the C standard leaves this implementation-defined.

Example

```c
unsigned int x = 16;

x >> 2
```

Output

```
4
```

---

# 10. Operator Precedence

Bitwise operators have lower precedence than arithmetic operators but higher precedence than logical operators.

Priority

| Priority | Operators | Associativity |
|----------|-----------|---------------|
| Highest | `()` | Left to Right |
| | `*` `/` `%` | Left to Right |
| | `+` `-` | Left to Right |
| | `<<` `>>` | Left to Right |
| | `<` `<=` `>` `>=` | Left to Right |
| | `==` `!=` | Left to Right |
| | `&` | Left to Right |
| | `^` | Left to Right |
| | `\|` | Left to Right |
| | `&&` | Left to Right |
| Lowest | `||` | Left to Right |

Example

```c
5 + 3 << 1
```

Evaluation

```
5 + 3

↓

8

↓

8 << 1

↓

16
```

---

# 11. Applications of Bitwise Operators

Bitwise operators are widely used in

- Setting individual bits
- Clearing bits
- Toggling bits
- Checking whether a bit is set
- Flags and masks
- Embedded programming
- Device drivers
- Operating systems
- Network protocols
- Cryptography
- Compression algorithms
- Graphics programming
- Fast multiplication and division by powers of two

---

# 12. Common Bit Manipulation Techniques

## Set a Bit

```c
number |= (1 << position);
```

---

## Clear a Bit

```c
number &= ~(1 << position);
```

---

## Toggle a Bit

```c
number ^= (1 << position);
```

---

## Check a Bit

```c
if(number & (1 << position))
```

---

# 13. Common Theoretical Pitfalls

## Confusing Logical and Bitwise Operators

Incorrect

```c
a && b
```

This is a logical operation.

Bitwise operation

```c
a & b
```

---

## Applying Bitwise Operators to Floating-Point Numbers

Invalid

```c
float x = 5.2;

x & 2;
```

Bitwise operators work only on integer types.

---

## Misunderstanding `~`

Many beginners expect

```
~5 = -5
```

Actual result

```
~5 = -6
```

because C uses **two's complement** representation for signed integers on most systems.

---

## Assuming Right Shift Is Always Arithmetic

The behavior of right shifting signed negative integers is **implementation-defined**. Do not rely on a particular behavior unless your compiler documentation specifies it.

---

# 14. Best Practices

- Use unsigned integers when performing bit manipulation.
- Use parentheses to improve readability.
- Document complex bitwise expressions with comments.
- Avoid using magic numbers; define bit masks with constants or macros.
- Prefer bitwise operations only when they improve clarity or performance.

---

# 15. Summary

- Bitwise operators manipulate individual bits of integer values.
- There are six bitwise operators in C: `&`, `|`, `^`, `~`, `<<`, and `>>`.
- Bitwise operators work only with integral data types.
- Left shift generally multiplies a value by powers of two.
- Right shift generally divides a value by powers of two.
- Bitwise NOT inverts every bit and follows two's complement rules for signed integers.
- Bitwise operators are essential in embedded systems, operating systems, networking, and low-level programming.
- Use bitwise operations carefully, especially with signed integers and implementation-defined behavior.