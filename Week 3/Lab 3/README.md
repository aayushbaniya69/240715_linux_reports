# Lab 3: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab demonstrates how C programs interact with the Linux operating system. The tasks focus on process execution, process identification, exit codes, standard input/output, and conditional process termination.

## Tasks

### Task 1: The Long-Running Process
A C program runs for 30 seconds using `sleep()`. It is executed in the background and monitored using the `ps` command.

**File:** `task1_alive.c`

### Task 2: Process Identity (PID and PPID)
This task demonstrates how to obtain the Process ID (PID) and Parent Process ID (PPID) using `getpid()` and `getppid()`.

**File:** `task2_identity.c`

### Task 3: Exit Codes and OS Feedback
This program accepts a number and returns an exit code based on the input. A positive number returns `0` for success, while a negative number returns `1` for failure.

**File:** `task3_exit.c`

### Task 4: Standard I/O Streams
This task demonstrates standard input and output. The program accepts a user's name using `scanf()` and displays a welcome message using `printf()`.

**File:** `task4_input.c`

### Task 5: Conditional Execution and Termination
This program asks the user whether the process should continue. It returns `0` when continuing and `1` when exiting.

**File:** `task5_control.c`

## Technologies Used

- C Programming
- Linux Operating System
- GCC Compiler
- Linux Terminal
- Linux Process Management Commands

## How to Compile and Run

Compile a C program using GCC:

```bash
gcc filename.c -o program
```

Run the compiled program:

```bash
./program
```

For example:

```bash
gcc task1_alive.c -o task1
./task1
```

## Files

```text
Lab-3/
├── README.md
├── task1_alive.c
├── task2_identity.c
├── task3_exit.c
├── task4_input.c
└── task5_control.c
```

## Conclusion

This lab provides practical experience with Linux process management. It demonstrates how C programs interact with the operating system using process IDs, sleep functions, standard input/output, and exit codes.
