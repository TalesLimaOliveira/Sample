#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <example.h>

Person *create_person(char *name, int age){
    Person *p = malloc(sizeof(Person));
    strcpy(p->name, name);
    p->age = age;
    return p;
}

void print_person(Person *p){
    printf("%s %d\n", p->name, p->age);
}