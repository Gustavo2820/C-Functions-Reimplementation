#include "../headers/my_string.h"

#include<stdio.h> //I'll use the standard printf for now!

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {

    char string[] = "Hello!";
    int stringLength = my_strlen(string);
    int anotherStringLength = my_strlen("Hi!");

    printf("Length of the String %s: %d\n", string, stringLength);
    printf("Length of Hi!: %d\n\n", anotherStringLength);

    Student student1;
    my_strcpy(student1.name, "Potato123");
    student1.age = 17;
    student1.grade = 0.0;
    Student copyOfStudent1;

    printf("Student1 name: %s\n", student1.name);
    printf("Student1 age: %d\n", student1.age);
    printf("Student1 grade: %f\n", student1.grade);

    my_memcpy(&copyOfStudent1, &student1, sizeof(Student));

    printf("Copy of Student1 name: %s\n", copyOfStudent1.name);
    printf("Copy of Student1 age: %d\n", copyOfStudent1.age);
    printf("Copy of Student1 grade: %f\n\n", copyOfStudent1.grade);

    char str1[50] = "Hello, ";
    char str2[50] = "world!";
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    char* concatenatedString = my_strcat(str1, str2);
    printf("Concatenated String: %s\n\n", concatenatedString);

    char str3[50];
    char str4[50];
    my_strcpy(str1, "abc");
    my_strcpy(str2, "abcd");
    my_strcpy(str3, "abb");
    my_strcpy(str4, "abc");

    printf("Comparison of abc with abcd: %d\n", my_strcmp(str1, str2));
    printf("Comparison of abc with abb: %d\n", my_strcmp(str1, str3));
    printf("Comparison of abc with abc: %d\n\n", my_strcmp(str1, str4));

    return 0;
}