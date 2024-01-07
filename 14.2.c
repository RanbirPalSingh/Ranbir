#include <stdio.h>

// Structure to represent a student
struct Student {
    char name[50];
    int math;
    int science;
    int english;
};

// Function to write student data to a file
void write_student_data(const char* file_path, struct Student students[], int num_students) {
    FILE* file = fopen(file_path, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Name,Math,Science,English\n");  // Header

    for (int i = 0; i < num_students; i++) {
        fprintf(file, "%s,%d,%d,%d\n", students[i].name, students[i].math, students[i].science, students[i].english);
    }

    fclose(file);
}

// Function to read student data from a file
void read_student_data(const char* file_path) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("Reading student data from file:\n");
    printf("Name\tMath\tScience\tEnglish\n");

    char name[50];
    int math, science, english;

    // Skip the header
    fscanf(file, "%*[^\n]\n");

    while (fscanf(file, "%49[^,],%d,%d,%d\n", name, &math, &science, &english) == 4) {
        printf("%s\t%d\t%d\t%d\n", name, math, science, english);
    }

    fclose(file);
}

int main() {
    // Example data
    struct Student students[] = {
        {"John Doe", 90, 85, 78},
        {"Jane Smith", 75, 92, 88},
        // Add more students as needed
    };

    int num_students = sizeof(students) / sizeof(students[0]);

    // File path
    const char* file_path = "student_marks.csv";

    // Writing data to file
    write_student_data(file_path, students, num_students);
    printf("Student data written to file.\n");

    // Reading data from file
    read_student_data(file_path);

    return 0;
}

