#ifndef EXAMPLE_H
#define EXAMPLE_H

typedef struct{
    char name[64];
    int age;
} Person;

/**
 * @brief Create a person object/struct
 * @return Person* with the name and age
 */
void create_person(Person *p);

/**
 * @brief print a person object (name, age)
 * @param p -> The person to print
 */
void print_person(Person *p);

#endif//EXAMPLE_H