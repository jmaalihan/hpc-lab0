#include <stdlib.h> 

/*
    PROMPT
    This exercise should:
    1. You may *not* delete or modify the malloc line.
    2. You may *not* access memory you haven't allocated on heap or stack.
    3. Pass Valgrind
*/

int main() { 
    int* ptr = (int*)malloc(sizeof(int));

    return 0;
} 
