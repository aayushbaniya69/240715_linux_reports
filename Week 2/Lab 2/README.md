# Lab 2 – C Programming Basics

This folder contains the practical work completed for Lab 2 of **ST5003CMD Operating Systems, Security and Networks**.

## Topics Covered

- Basic C program structure
- `printf()` and `scanf()`
- User input and formatted output
- GCC compilation
- The four stages of C compilation
- Program return values and Linux exit status
- Checking exit status with `echo $?`

## Files in This Folder

| File | Description |
|---|---|
| `hello_world.c` | Basic Hello World program |
| `return_value.c` | Demonstrates a program return value and exit status |
| `user_input.c` | Accepts an integer from the user and displays it |
| `formatted_output.c` | Accepts name, age, and height and displays formatted output |

## How to Compile and Run

Compile a file using GCC:

```bash
gcc hello_world.c -o hello_world
```

Run the program:

```bash
./hello_world
```

Check the exit status:

```bash
echo $?
```

## GCC Compilation Stages

The lab also covered the four main stages of compilation:

1. **Preprocessing** – produces a `.i` file
2. **Compilation** – produces assembly code in a `.s` file
3. **Assembly** – produces an object file with a `.o` extension
4. **Linking** – creates the final executable

Example commands:

```bash
gcc -E hello_world.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -o hello
```

## Learning Outcome

This lab helped me understand how a simple C program is written, compiled, and executed in Linux. It also gave me practical experience with GCC, user input, formatted output, return values, and the different stages involved in creating an executable program.
