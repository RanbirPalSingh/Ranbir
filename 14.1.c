#include <stdio.h>

#define MAX_BUFFER_SIZE 1024

// Function to read from a file
void readFile(const char *filePath) {
    FILE *file = fopen(filePath, "r");
    
    if (file == NULL) {
        printf("File not found: %s\n", filePath);
        return;
    }

    char buffer[MAX_BUFFER_SIZE];
    while (fgets(buffer, MAX_BUFFER_SIZE, file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
}

// Function to write to a file
void writeFile(const char *filePath, const char *content) {
    FILE *file = fopen(filePath, "w");

    if (file == NULL) {
        printf("Unable to open file for writing: %s\n", filePath);
        return;
    }

    fputs(content, file);

    fclose(file);
    printf("Content successfully written to %s\n", filePath);
}

int main() {
    const char *inputFilePath = "input.txt";
    const char *outputFilePath = "output.txt";

    // Read content from input file
    readFile(inputFilePath);

    // Write content to output file
    const char *inputContent = "Hello, this is a sample content.";
    writeFile(outputFilePath, inputContent);

    return 0;
}
