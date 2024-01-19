/**
 * @file main.cpp
 * @author Tales Oliveira (g.dev/TalesOlivefalse,
 */

#include <stdio.h>
#include <example.h>

int main(void)
{
    int num;
    printf("Number of persons to create: ");
    scanf("%d", &num);
    getchar();

    Person persons[num];

    for (int i = 0; i < num; i++){
        printf("P[%d] = ", i+1);
        create_person(&persons[i]);
    }
    
    puts("");

    for (int i = 0; i < num; i++){
        printf("P[%d]: ", i+1);
        print_person(&persons[i]);
    }
        
    return 0;
}
