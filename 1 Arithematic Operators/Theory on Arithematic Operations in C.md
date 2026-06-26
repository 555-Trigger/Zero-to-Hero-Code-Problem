Arithmetic operations in C are executed using built-in symbols known as arithmetic operators.

They manipulate numeric data types like integers (int) and floating-point numbers (float, double). 

These operations form the baseline of all computational logic and data processing in the C programming language.

Arithmetic operators are categorised based on the number of operands (inputs) they require. 
Unary Operators: Unary operators work with only one operand
Binary Operators: Binary operators require two operands to execute.
  1. The Nuances of Integer Division. When you divide two integers in C, the result must be an integer. The compiler discards the decimal fraction entirely (truncation toward zero),         rather than rounding to the nearest whole number.
  2. Strict Rules of the Modulus Operator (%)The modulus operator calculates the remainder left over after integer division.
  3. Prefix vs. Postfix Behaviour The increment (++) and decrement (--) operators yield different results depending on their placement relative to the variable:
       Prefix (++x, --x): The variable is updated first, and then its new value is used in the surrounding expression.
       Postfix (x++, x--): The current value of the variable is used in the expression first, and the variable is updated afterwards.
     
Precedence and Associativity. When multiple operators appear in a single expression, C evaluates them using strict structural hierarchies rather than algebraic BODMAS rules.
    Parentheses (): Have the absolute highest priority. They force the evaluation of nested sub-expressions first.
    Unary Operators (++, --, -, +): Evaluated next, possessing Right-to-Left associativity.
    Multiplicative Operators (*, /, %): Higher priority than addition/subtraction. 
    Evaluated with Left-to-Right associativity.Additive Operators (+, -): Lowest arithmetic priority. 
    Evaluated with Left-to-Right associativity.
    
Implicit Type Promotion (Coercion)When performing arithmetic operations on mixed data types, C automatically promotes the smaller data type to prevent precision loss. 
    This hierarchy dictates the transformation: int -> unsigned int-> long -> float -> double
    If you add an int to a float, C implicitly converts the int to a float before running the computation, yielding a float result.
    Note on Character Arithmetic: Characters (char) are internally tracked as integer ASCII values. 
    Therefore, expressions like 'A' + 1 are valid and return 66 (the ASCII value for 'B').
Common Theoretical Pitfalls
    Division by Zero: Dividing a number by zero or finding the modulus by zero (x / 0 or x % 0) causes a runtime crash or undefined behaviour.Arithmetic Overflow: Variables have a        finite bit-width. Exceeding the maximum limit of an integer type wraps around to the minimum negative boundary (or creates undefined behaviour for signed integers).
    
