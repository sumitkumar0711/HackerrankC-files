#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int integer;
    long longint;
    char character;
    float floatint;
    double longfloat;
    scanf("%d  %ld  %c  %f  %lf",&integer,&longint,&character,&floatint,&longfloat);
    printf("%d\n%ld\n%c\n%f\n%lf",integer, longint, character, floatint, longfloat);
    return 0;
}
