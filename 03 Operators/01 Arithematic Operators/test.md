
# Problem 021 – Find Largest Element

## Difficulty

⭐⭐ Beginner

---

# Problem Statement

Write a C program to find the largest element in an array.

---

# Input

First line

N

Second line

N integers

---

# Output

Largest element

---

# Example

Input

5

12 8 45 10 3

Output

45

---

# Explanation

Compare every element with the current maximum.

Initially

max = first element

Update whenever a larger value is found.

---

# Algorithm

1. Read N
2. Read array
3. max = arr[0]
4. Compare each element
5. Print max

---

# Solution

```c
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max=arr[0];

    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];

    printf("%d",max);

    return 0;
}
```

---

# Dry Run

Array

12 8 45 10 3

Current max

12

↓

45

↓

45

↓

45

Answer = 45

---

# Time Complexity

O(n)

---

# Space Complexity

O(1)

---

# Alternative Solutions

- Sorting
- Recursion
- Divide and Conquer

---

# Common Mistakes

- Initializing max to 0
- Incorrect loop bounds
- Reading input incorrectly

---

# Key Concepts

- Arrays
- Traversal
- Maximum
- Loop

---

# Practice Questions

- Find smallest element
- Find second largest
- Find average
- Find sum
- Count even numbers
