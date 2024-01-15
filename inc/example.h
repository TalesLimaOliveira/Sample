#ifndef EXAMPLE_H
#define EXAMPLE_H

typedef struct{
    char name[64];
    int age;
} Person;

/**
 * @brief Create a person object/struct
 * @param name -> The name of the person
 * @param age -> The age of the person
 * @return Person* with the name and age
 */
Person *create_person(char *name, int age);

/**
 * @brief print a person object (name, age)
 * @param p -> The person to print
 */
void print_person(Person *p);
#endif//EXAMPLE_H