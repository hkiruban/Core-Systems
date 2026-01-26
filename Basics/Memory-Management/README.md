# C++ Pointer Architecture & Memory Management

### Objective
Mastering low-level memory operations and manual resource management.

### The Pointer Protocol
| Syntax | Name | Description |
| :--- | :--- | :--- |
| `int* ptr` | **Declaration** | Defines a variable that holds a memory address. |
| `&var` | **Address-of** | Finds the location of a variable on the stack. |
| `*ptr` | **Dereference** | Accesses the value stored at the pointer's address. |
| `delete ptr` | **Deallocation** | Releases heap memory to prevent leaks. |
| `ptr = nullptr` | **Nullify** | Ensures the pointer doesn't reference garbage memory. |
