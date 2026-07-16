# Arrays in C

An **array** is a collection of **elements of the same data type** stored in **contiguous memory locations** and accessed using a **single variable name** with an **index**.

Arrays allow programmers to store multiple values under one variable instead of creating separate variables for each value.

Arrays are one of the most fundamental data structures in C and are extensively used in:

- Data Storage
- Searching Algorithms
- Sorting Algorithms
- Matrix Operations
- Image Processing
- Signal Processing
- Scientific Computing
- Embedded Systems
- Game Development

---

# 1. What is an Array?

An array is a **fixed-size sequential collection** of elements of the same type.

Example

Instead of writing

```c
int marks1 = 80;
int marks2 = 75;
int marks3 = 90;
int marks4 = 65;
int marks5 = 88;
```

we can write

```c
int marks[5] = {80,75,90,65,88};
```

This stores all five values in a single variable.

---

# 2. Characteristics of Arrays

- Stores elements of the same data type.
- Stored in contiguous memory locations.
- Accessed using an index.
- Array indexing starts from **0**.
- Fixed size after declaration.
- Provides fast random access.

---

# 3. Declaration of an Array

Syntax

```c
data_type array_name[size];
```

Example

```c
int marks[5];
```

This creates an integer array capable of storing five integers.

---

# 4. Initialization of Arrays

## Method 1

```c
int marks[5] = {80,75,90,65,88};
```

---

## Method 2

```c
int marks[] = {80,75,90,65,88};
```

The compiler automatically determines the size.

---

## Method 3

```c
int marks[5];

marks[0] = 80;
marks[1] = 75;
marks[2] = 90;
marks[3] = 65;
marks[4] = 88;
```

---

# 5. Memory Representation

Example

```c
int arr[5] = {10,20,30,40,50};
```

```
Index

0     1     2     3     4

Value

10    20    30    40    50
```

Memory Layout

```
Address

1000 → 10

1004 → 20

1008 → 30

1012 → 40

1016 → 50
```

Assuming

```
sizeof(int) = 4 bytes
```

---

# 6. Accessing Array Elements

Syntax

```c
array[index]
```

Example

```c
int arr[5] = {10,20,30,40,50};

printf("%d", arr[2]);
```

Output

```
30
```

---

# 7. Modifying Array Elements

Example

```c
int arr[5] = {10,20,30,40,50};

arr[2] = 100;
```

Updated Array

```
10

20

100

40

50
```

---

# 8. Traversing an Array

Traversal means visiting every element exactly once.

Example

```c
int arr[5]={10,20,30,40,50};

for(int i=0;i<5;i++)
{
    printf("%d ",arr[i]);
}
```

Output

```
10 20 30 40 50
```

---

# 9. Array Input

Example

```c
int arr[5];

for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
```

---

# 10. Array Output

Example

```c
for(int i=0;i<5;i++)
{
    printf("%d ",arr[i]);
}
```

---

# 11. Types of Arrays

| Type | Description |
|-------|-------------|
| One-Dimensional Array | Single row of elements |
| Two-Dimensional Array | Rows and columns |
| Three-Dimensional Array | Collection of matrices |
| Multi-Dimensional Array | Arrays with more than three dimensions |

---

# 12. One-Dimensional Array

Example

```c
int arr[5]={1,2,3,4,5};
```

Representation

```
Index

0 1 2 3 4

↓

1 2 3 4 5
```

---

# 13. Two-Dimensional Array

Syntax

```c
int matrix[3][3];
```

Example

```c
int matrix[2][2]=
{
    {1,2},
    {3,4}
};
```

Representation

```
1 2

3 4
```

---

# 14. Three-Dimensional Array

Syntax

```c
int cube[2][2][2];
```

Example

```c
int cube[2][2][2]=
{
    {
        {1,2},
        {3,4}
    },
    {
        {5,6},
        {7,8}
    }
};
```

---

# 15. Multi-Dimensional Arrays

Arrays having more than two dimensions are called multidimensional arrays.

Syntax

```c
datatype array[size1][size2][size3]...
```

Applications

- Machine Learning
- Image Processing
- Scientific Computing
- Tensor Operations
- Computer Graphics

---

# 16. Array Operations

Common operations include

- Traversal
- Insertion
- Deletion
- Searching
- Updating
- Sorting
- Merging
- Reversing
- Copying
- Rotation
- Finding Maximum
- Finding Minimum
- Sum
- Average

---

# 17. Array and Pointers

The name of an array represents the address of its first element.

Example

```c
int arr[5]={10,20,30,40,50};
```

```
arr

↓

&arr[0]
```

Example

```c
printf("%d",*arr);
```

Output

```
10
```

---

# 18. Array Bounds

Array indices must remain within the declared size.

Correct

```c
arr[0]

arr[4]
```

Incorrect

```c
arr[5]
```

This produces **undefined behaviour**.

---

# 19. Size of an Array

Example

```c
int arr[10];

printf("%zu",sizeof(arr));
```

Output (assuming `int` is 4 bytes)

```
40
```

Number of Elements

```c
sizeof(arr)/sizeof(arr[0])
```

Output

```
10
```

---

# 20. Passing Arrays to Functions

Example

```c
void display(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
```

Calling

```c
display(arr,5);
```

---

# 21. Advantages of Arrays

- Easy to store multiple values.
- Fast random access.
- Efficient memory utilization.
- Easy traversal.
- Supports multidimensional data.
- Foundation for many data structures.

---

# 22. Limitations of Arrays

- Fixed size.
- Cannot grow dynamically.
- Stores only one data type.
- Insertion and deletion are costly.
- Memory may be wasted.
- Risk of out-of-bounds access.

---

# 23. Common Theoretical Pitfalls

## Array Index Starts at Zero

Incorrect

```
First Element

arr[1]
```

Correct

```
arr[0]
```

---

## Accessing Beyond the Array Size

Incorrect

```c
arr[10];
```

when the array size is

```c
int arr[10];
```

Valid indices are

```
0 to 9
```

---

## Forgetting Initialization

```c
int arr[5];
```

The elements contain **indeterminate values** unless initialized.

---

## Using Negative Indices

Incorrect

```c
arr[-1];
```

This results in **undefined behaviour**.

---

## Assuming Arrays Can Be Assigned

Incorrect

```c
arr1 = arr2;
```

Arrays cannot be assigned directly in C.

Copy elements individually or use functions such as `memcpy()` when appropriate.

---

# 24. Best Practices

- Always initialize arrays.
- Use meaningful array names.
- Keep indices within bounds.
- Use loops for traversal.
- Calculate array size using `sizeof`.
- Pass array size explicitly to functions.
- Avoid magic numbers; use constants where appropriate.

---

# 25. Applications of Arrays

Arrays are widely used in

- Searching Algorithms
- Sorting Algorithms
- Matrix Operations
- Image Processing
- Machine Learning
- Signal Processing
- Compiler Design
- Database Systems
- Operating Systems
- Game Development
- Scientific Computing
- Data Structures

---

# 26. Summary

- An array is a collection of elements of the same data type stored in contiguous memory locations.
- Arrays are indexed starting from **0**.
- Arrays provide fast random access using indices.
- Arrays can be one-dimensional, two-dimensional, three-dimensional, or multidimensional.
- Common array operations include traversal, insertion, deletion, searching, sorting, and updating.
- Array names represent the address of the first element.
- Arrays have a fixed size and cannot be resized after declaration.
- Always access elements within valid index limits to avoid undefined behaviour.
- Arrays form the foundation for advanced data structures such as stacks, queues, linked lists, trees, graphs, and tensors.