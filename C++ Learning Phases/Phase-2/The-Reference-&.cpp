/*
1. The Core Concept: The Reference (&)
This is the heart of Phase II. A reference is an alias for an existing variable.

Pass-by-Value: The function creates a copy. If you pass a massive logistics vector, you've just doubled your memory usage.

Pass-by-Reference: The function operates on the original memory address. It's faster. It's leaner.
*/



// Pass-by-Value (Wasteful)
void updateStock(int stock) { stock -= 10; } 

// Pass-by-Reference (Precise)
void updateStock(int &stock) { stock -= 10; }



//When you do int stock; inside a function without assigning a value, the compiler allocates a spot in memory, but it doesn't clean it. 
//That memory contains garbage data—whatever leftovers were there from a previous process.

//In C++, you can declare a variable without initializing it, but you're playing with fire.
//  If you try to use stock before assigning it a value (e.g., std::cout << stock;), 
//  your program will output a random, nonsensical number like -858993460.

//1. Declaration vs. Initialization 

//Declaration: int stock; — You're telling the compiler, "Reserve enough space for an integer and call it 'stock'."

//Initialization: stock = 50; — You're actually putting a value into that space.
