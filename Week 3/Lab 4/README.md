# Lab 4: A Practical Approach to Understanding System Internals

## Data Types and OS Memory Management

### Introduction

This lab focuses on understanding how data types use memory and how the operating system organizes memory for a running process. It covers data type sizes, memory segments, variable addresses, pointers, and dynamic memory allocation.

### Tasks

#### 1. Data Type Size Exploration
The first program uses `sizeof()` to display the memory size of common C data types. The output can be compared with the data type sizes given in the laboratory manual.

#### 2. Memory Segment Address Mapping
The second program creates variables associated with the Data, BSS, Stack, and Heap segments and displays their memory addresses using `%p`.

#### 3. Pointer and Memory Allocation
The third program demonstrates the difference between a pointer stored on the Stack and dynamically allocated data stored on the Heap.

### Technologies Used

- C Programming Language
- GCC Compiler
- Linux Terminal
- Standard C Library

### How to Compile and Run

Open the terminal in the Lab 4 folder and use the following commands.

#### Data Type Sizes

```bash
gcc datatype_sizes.c -o datatype_sizes
./datatype_sizes
```

#### Memory Segments

```bash
gcc memory_segments.c -o memory_segments
./memory_segments
```

#### Pointer and Heap Usage

```bash
gcc pointer_heap.c -o pointer_heap
./pointer_heap
```

### Files

- `README.md` - Lab 4 documentation
- `datatype_sizes.c` - Displays the size of different data types
- `memory_segments.c` - Displays addresses of variables in different memory segments
- `pointer_heap.c` - Demonstrates pointer and heap memory allocation

### Conclusion

This lab provides a practical understanding of how C programs use memory. By checking data type sizes and observing variable addresses, it becomes easier to understand the relationship between a program and the operating system's memory management.
