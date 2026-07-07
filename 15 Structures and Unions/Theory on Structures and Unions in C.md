# Structures and Unions in C

**Structures** and **Unions** are **user-defined data types** in C that allow programmers to group multiple variables of different data types into a single unit.

Although both structures and unions are used to organize related data, they differ significantly in **memory allocation**, **storage behavior**, and **applications**.

Structures and unions are widely used in:

- Database Management Systems
- Operating Systems
- Embedded Systems
- Device Drivers
- Computer Networks
- File Systems
- Graphics Programming
- Compilers
- Scientific Computing
- Artificial Intelligence

---

# 1. What are Structures and Unions?

A **Structure** stores **all members separately**, allocating memory for each member.

A **Union** stores **all members in the same memory location**, allowing only one member to hold a valid value at a time.

---

# 2. Difference Between Structures and Unions

| Feature | Structure | Union |
|---------|-----------|-------|
| Memory Allocation | Separate memory for each member | Shared memory for all members |
| Memory Size | Sum of all members (plus padding) | Size of the largest member |
| Simultaneous Values | All members can store values simultaneously | Only one member contains a valid value at a time |
| Memory Efficiency | Less efficient | More efficient |
| Usage | Store complete records | Save memory when only one field is used |

---

# 3. Structure Declaration

Syntax

```c
struct StructureName
{
    data_type member1;
    data_type member2;
    ...
};
```

Example

```c
struct Student
{
    int rollNo;
    char name[30];
    float marks;
};
```

---

# 4. Structure Variable Declaration

Syntax

```c
struct Student s1;
```

Example

```c
struct Student s1;
```

Memory

```
s1

↓

rollNo

↓

name

↓

marks
```

Each member has its own memory location.

---

# 5. Accessing Structure Members

The **dot (`.`) operator** is used.

Syntax

```c
structure.member
```

Example

```c
s1.rollNo = 101;

s1.marks = 92.5;
```

---

# 6. Structure Initialization

Example

```c
struct Student s1 =
{
    101,
    "Rahul",
    92.5
};
```

---

# 7. Displaying Structure Members

Example

```c
printf("%d", s1.rollNo);

printf("%s", s1.name);

printf("%.2f", s1.marks);
```

Output

```
101

Rahul

92.50
```

---

# 8. Array of Structures

Structures can be stored in arrays.

Example

```c
struct Student s[3];
```

Memory

```
Student 1

↓

Student 2

↓

Student 3
```

Each structure contains all its members.

---

# 9. Nested Structures

A structure can contain another structure.

Example

```c
struct Address
{
    char city[20];
};

struct Student
{
    int rollNo;

    struct Address addr;
};
```

Access

```c
student.addr.city
```

---

# 10. Pointer to Structure

Pointers can point to structures.

Example

```c
struct Student s;

struct Student *ptr = &s;
```

Access

```c
ptr->rollNo = 101;
```

Equivalent

```c
(*ptr).rollNo = 101;
```

---

# 11. Passing Structures to Functions

Example

```c
void display(struct Student s)
{
    printf("%d", s.rollNo);
}
```

Calling

```c
display(s1);
```

---

# 12. Returning Structures from Functions

Example

```c
struct Student create()
{
    struct Student s =
    {
        101,
        "John",
        95
    };

    return s;
}
```

---

# 13. Self-Referential Structures

A structure can contain a pointer to its own type.

Example

```c
struct Node
{
    int data;

    struct Node *next;
};
```

Applications

- Linked Lists
- Trees
- Graphs

---

# 14. Union Declaration

Syntax

```c
union UnionName
{
    data_type member1;
    data_type member2;
};
```

Example

```c
union Data
{
    int number;

    float marks;

    char grade;
};
```

---

# 15. Union Variable Declaration

Example

```c
union Data d;
```

---

# 16. Accessing Union Members

Example

```c
d.number = 100;
```

Access

```c
printf("%d", d.number);
```

---

# 17. Union Memory Representation

Example

```c
union Data
{
    int number;

    float marks;

    char grade;
};
```

Memory

```
Shared Memory

----------------

number

marks

grade

----------------
```

All members occupy the same memory location.

---

# 18. Structure Memory Representation

Example

```c
struct Data
{
    int number;

    float marks;

    char grade;
};
```

Memory

```
number

↓

marks

↓

grade
```

Separate memory is allocated for each member.

---

# 19. Structure vs Union Memory Example

Example

```c
struct Example
{
    int a;
    float b;
    char c;
};
```

Possible Size

```
12 Bytes
```

Example

```c
union Example
{
    int a;
    float b;
    char c;
};
```

Possible Size

```
4 Bytes
```

The exact size depends on compiler alignment and padding.

---

# 20. Sizeof Structure

Example

```c
printf("%zu", sizeof(struct Student));
```

Output

```
Depends on compiler padding
```

---

# 21. Sizeof Union

Example

```c
printf("%zu", sizeof(union Data));
```

Output

```
Size of Largest Member
```

---

# 22. Structure Padding

Compilers may insert unused bytes to align data efficiently.

Example

```c
struct Example
{
    char a;

    int b;
};
```

Although

```
char = 1 byte

int = 4 bytes
```

The structure may occupy

```
8 Bytes
```

because of padding.

---

# 23. Typedef with Structures

Example

```c
typedef struct
{
    int rollNo;

    float marks;

} Student;
```

Now

```c
Student s1;
```

instead of

```c
struct Student s1;
```

---

# 24. Anonymous Structures

Example

```c
struct
{
    int age;

    float salary;

} employee;
```

---

# 25. Anonymous Unions

Example

```c
union
{
    int x;

    float y;

} value;
```

---

# 26. Applications of Structures

Structures are used in

- Student Records
- Employee Records
- Banking Systems
- Library Management
- Database Systems
- Inventory Systems
- Networking
- Operating Systems
- File Systems
- Graphics Programming

---

# 27. Applications of Unions

Unions are used in

- Embedded Systems
- Device Drivers
- Memory Optimization
- Communication Protocols
- Hardware Registers
- Sensor Data
- Binary File Formats
- Operating Systems
- Compilers

---

# 28. Advantages of Structures

- Organize related data.
- Support multiple data types.
- Improve readability.
- Enable modular programming.
- Easy to pass to functions.
- Suitable for complex data models.

---

# 29. Advantages of Unions

- Save memory.
- Efficient storage.
- Useful for hardware programming.
- Ideal when only one member is active.
- Commonly used in embedded applications.

---

# 30. Limitations

### Structures

- Consume more memory.
- Padding may increase size.
- Copying large structures may reduce performance.

### Unions

- Only one member can contain a valid value at a time.
- Writing to one member overwrites the previous member.
- Can be confusing for beginners.

---

# 31. Common Theoretical Pitfalls

## Forgetting the Dot Operator

Incorrect

```c
student rollNo;
```

Correct

```c
student.rollNo;
```

---

## Using Dot with Structure Pointer

Incorrect

```c
ptr.rollNo;
```

Correct

```c
ptr->rollNo;
```

---

## Expecting Union Members to Store Different Values

Incorrect

```c
d.number = 100;

d.grade = 'A';
```

The assignment to `grade` overwrites the previous value stored in the shared memory.

---

## Ignoring Structure Padding

Do not assume

```c
sizeof(struct)
```

is always the sum of the sizes of its members.

Padding may increase the size.

---

## Forgetting `typedef`

Without `typedef`

```c
struct Student s;
```

With `typedef`

```c
Student s;
```

Both are valid, but `typedef` simplifies declarations.

---

# 32. Best Practices

- Use structures to represent real-world entities.
- Use unions only when memory optimization is required.
- Initialize structure members before use.
- Access structure pointers using the arrow (`->`) operator.
- Use `typedef` for cleaner code.
- Be aware of structure padding and alignment.
- Document the purpose of each member clearly.

---

# 33. Summary

- Structures and unions are user-defined data types in C.
- Structures allocate separate memory for each member, while unions share the same memory among all members.
- Structure members are accessed using the dot (`.`) operator, while structure pointers use the arrow (`->`) operator.
- Structures are suitable for storing complete records such as students, employees, and products.
- Unions are suitable for memory-efficient applications where only one member is used at a time.
- `sizeof(struct)` depends on the total size of members and compiler padding.
- `sizeof(union)` equals the size of its largest member.
- Structures and unions are fundamental building blocks for advanced topics such as linked lists, trees, graphs, operating systems, embedded systems, networking, and compiler design.