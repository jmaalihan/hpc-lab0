#include <stdio.h>
#include <stdlib.h>

/*
    PROMPT
    This exercise should:
    1. Print 1-4 on a new line each
    2. You may *not* access memory you haven't allocated on heap or stack.
    3. Pass Valgrind
*/

int print_array(int arr[]) { 
    int count = 0;
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr_size; i++) { 
        printf("%d\n", arr[i]); 
        count++;
    } 

    return count;
} 
  
int main() {
    int arr[4] = { 1, 2, 3, 4 }; 
    int printed_count = print_array(arr);

    if(printed_count != 4){
    	void* force_error = malloc(16);
    }

    return 0; 
}
