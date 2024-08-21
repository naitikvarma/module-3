/* Q.17 WAP to show difference between Structure and Union. */

#include <stdio.h>

struct Structure 
{
    int a;
    float b;
    char c;
};

union uni 
{
    int a;
    float b;
    char c;
};

int main() 
{
    struct Structure s;
    s.a = 1;
    s.b = 2.5;
    s.c = 'A';
    
    union uni u;
    u.a = 1;
    u.b = 2.5;
    u.c = 'A'; 
    

    printf("Input in both is same but output is diffrent\n");
    printf("\nStructure =\n");
    printf("a = %d\n", s.a);
    printf("b = %f\n", s.b);
    printf("c = %c\n", s.c);
    
    printf("\nUnion =\n");
    printf("a = %d\n", u.a); 
    printf("b = %f\n", u.b); 
    printf("c = %c\n", u.c); 

    return 0;
}
