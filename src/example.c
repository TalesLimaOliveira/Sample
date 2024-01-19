#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <example.h>

void create_person(Person *p){
    //Person *p = malloc(sizeof(Person));
    char name[64];
    int age;
    scanf("%63[^ ]%d", name, &age);
    getchar();
    p->age = age;
    strcpy(p->name, name);
}

void print_person(Person *p){
    printf("%s %d\n", p->name, p->age);
}