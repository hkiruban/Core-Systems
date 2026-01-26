#include <iostream> // Provides tools to print to the console

int main() {
    // --- THE STACK ---
    // This variable is managed by the CPU. It is fast and temporary.
    int stackVar = 10; 

    // --- THE HEAP ---
    // 'new' requests 4 bytes of memory from the System. 
    // It returns the "GPS Address" of that memory, which we store in heapPtr.
    int* heapPtr = new int(20); 

    // --- THE LOGIC ---
    // Use '&' to find the address of the variable on the Stack.
    std::cout << "Stack Value: " << stackVar << " | Address: " << &stackVar << std::endl;

    // 'heapPtr' IS the address. Use '*' to "dereference" it and see the value inside.
    std::cout << "Heap Value: " << *heapPtr << " | Address: " << heapPtr << std::endl;

    // --- THE DISCIPLINE ---
    // You must manually tell the System you are done with the Heap memory.
    // If you forget this line, the memory stays locked (a Leak).
    delete heapPtr; 

    // Good practice: nullify the pointer so it doesn't point to "garbage" memory.
    heapPtr = nullptr;

    return 0; // Mission accomplished.
}
