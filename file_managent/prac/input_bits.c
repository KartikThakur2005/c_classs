#include <stdio.h>

int main() {
  
    char buff[100];
    
    // Take input from the user
    printf("Enter some text: ");
    fgets(buff, sizeof(buff), stdin);
    
    // Open a file with .bits extension in write mode
    FILE *file = fopen("output.bin", "w");
    
    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write user input to the file
    fputs(buff, file);
    
    // Close the file
    fclose(file);
    

    
    return 0;
}

