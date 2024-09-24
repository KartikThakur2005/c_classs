#include <stdio.h>

int main() {
    
      FILE *file = fopen("example.txt", "w");
       if (file == NULL) {
        printf("Failed to open the file.\n");
        return 0;
    }
 

    int num = 42;
    double pi = 3.14159;
    char str[] = "Hello, stdout!";

    fprintf(file, "Integer: %d\n", num);
    
    fprintf(file, "String: %s\n", str);

    return 0;
}

