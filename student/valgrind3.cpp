#include <stdio.h>
#include <cstring>

/*
    PROMPT
    This exercise should:
    1. You may modify the string
    2. You may *not* modify the declaration of a.
    3. You may *not* access memory you haven't allocated on heap or stack.
    4. Pass Valgrind
*/

int main(){
	char a[10];
	strcpy(a, "blueberry muffins"); 
	printf("%s\n", a[11]);

	return 0;
}