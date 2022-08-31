#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4};
    int * poi = array;
    printf("this is array %p\n", array++);
    printf("this is poi %p\n", ++poi);
    printf("size of array: %zd\n", sizeof array);
    printf("size of poi: %zd\n", sizeof poi);

    return 0;
}