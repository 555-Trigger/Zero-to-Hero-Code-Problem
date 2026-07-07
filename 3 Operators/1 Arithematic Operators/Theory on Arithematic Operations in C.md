# Arithmetic Operators in C

Arithmetic operations in C are performed using built-in symbols called **arithmetic operators**. These operators manipulate numeric data types such as `int`, `float`, and `double`, and form the foundation of all computational logic in C programming.

---

# 1. Arithmetic Operators

| Operator | Description         | Example        | Result                           |
| -------- | ------------------- | -------------- | -------------------------------- |
| `+`      | Addition            | `a + b`        | Sum of `a` and `b`               |
| `-`      | Subtraction         | `a - b`        | Difference of `a` and `b`        |
| `*`      | Multiplication      | `a * b`        | Product of `a` and `b`           |
| `/`      | Division            | `a / b`        | Quotient of `a` divided by `b`   |
| `%`      | Modulus (Remainder) | `a % b`        | Remainder after integer division |
| `++`     | Increment           | `++a` or `a++` | Increases value by 1             |
| `--`     | Decrement           | `--a` or `a--` | Decreases value by 1             |

---

# 2. Classification of Arithmetic Operators

Arithmetic operators can be classified according to the number of operands they require.

## Unary Operators

Unary operators operate on **one operand**.

Examples:

* `++`
* `--`
* Unary `+`
* Unary `-`

```c
int x = 5;

++x;   // x becomes 6
--x;   // x becomes 5
-x;    // Returns -5
```

---

## Binary Operators

Binary operators require **two operands**.

Examples:

* `+`
* `-`
* `*`
* `/`
* `%`

```c
int a = 10;
int b = 3;

a + b;
a - b;
a * b;
a / b;
a % b;
```

---

# 3. Integer Division

When both operands are integers, C performs **integer division**.

The result is always an integer.

The fractional part is **discarded (truncated toward zero)** instead of being rounded.

## Examples

```c
7 / 2      // 3
15 / 4     // 3
9 / 5      // 1
```

For negative numbers:

```c
-7 / 2     // -3
7 / -2     // -3
-7 / -2    // 3
```

The decimal portion is simply removed.

---

# 4. Floating-Point Division

If at least one operand is `float` or `double`, C performs floating-point division.

```c
7.0 / 2      // 3.5
7 / 2.0      // 3.5
7.0 / 2.0    // 3.5
```

---

# 5. The Modulus Operator (`%`)

The modulus operator returns the **remainder** after integer division.

Syntax:

```c
a % b
```

Example:

```c
10 % 3    // 1
20 % 7    // 6
15 % 5    // 0
```

## Important Rules

* Works **only with integer types**
* Cannot be used with `float` or `double`
* The divisor cannot be zero

Invalid:

```c
10 % 0
```

---

# 6. Increment and Decrement Operators

## Increment (`++`)

Increases a variable by one.

```c
x++;
++x;
```

---

## Decrement (`--`)

Decreases a variable by one.

```c
x--;
--x;
```

---

# 7. Prefix vs Postfix

The position of `++` or `--` determines **when the variable is updated**.

## Prefix

The variable is updated **before** it is used.

```c
int x = 5;

int y = ++x;
```

Result:

```
x = 6
y = 6
```

---

## Postfix

The variable is used first, then updated.

```c
int x = 5;

int y = x++;
```

Result:

```
x = 6
y = 5
```

---

# 8. Operator Precedence and Associativity

When an expression contains multiple operators, C follows a strict precedence hierarchy.

| Priority          | Operators                     | Associativity |
| ----------------- | ----------------------------- | ------------- |
| Highest           | `()`                          | Left to Right |
|                   | `++` `--` Unary `+` Unary `-` | Right to Left |
|                   | `*` `/` `%`                   | Left to Right |
| Lowest Arithmetic | `+` `-`                       | Left to Right |

Example:

```c
2 + 3 * 4
```

Output:

```
14
```

because multiplication has higher precedence.

Using parentheses:

```c
(2 + 3) * 4
```

Output:

```
20
```

---

# 9. Implicit Type Promotion (Type Coercion)

When operands have different data types, C automatically converts the smaller type into a larger compatible type to avoid precision loss.

Typical promotion hierarchy:

```
char
   ↓
short
   ↓
int
   ↓
unsigned int
   ↓
long
   ↓
long long
   ↓
float
   ↓
double
   ↓
long double
```

Example:

```c
int a = 10;
float b = 2.5;

float c = a + b;
```

The integer `a` is automatically converted to `float`.

Result:

```
12.5
```

---

# 10. Character Arithmetic

Characters are stored internally as **ASCII (or character encoding) integer values**.

Therefore, arithmetic operations on characters are valid.

Example:

```c
'A' + 1
```

ASCII values:

```
'A' = 65
65 + 1 = 66
```

Character:

```
'B'
```

Example:

```c
char ch = 'A';

printf("%c", ch + 1);
```

Output

```
B
```

---

# 11. Common Theoretical Pitfalls

## Division by Zero

Division by zero results in **undefined behaviour**.

```c
10 / 0
```

Undefined.

Likewise,

```c
10 % 0
```

is also undefined.

---

## Arithmetic Overflow

Each integer type has a fixed storage limit.

Example (`signed int`):

```
Maximum:

2147483647
```

Adding one more:

```c
2147483647 + 1
```

For signed integers, the result is **undefined behaviour** according to the C standard. On many systems it appears to "wrap around," but programs must not rely on this. For unsigned integers, overflow is well-defined and wraps modulo 2ⁿ.

---

# 12. Summary

* Arithmetic operators perform mathematical calculations.
* Unary operators require one operand.
* Binary operators require two operands.
* Integer division discards the fractional part.
* The modulus operator works only with integers.
* Prefix operators update first, then use the value.
* Postfix operators use the value first, then update it.
* Parentheses have the highest precedence.
* Multiplication, division, and modulus are evaluated before addition and subtraction.
* Mixed-type expressions are automatically promoted to a common type.
* Characters participate in arithmetic using their integer character codes.
* Avoid division by zero and arithmetic overflow, as they can lead to undefined behaviour.
