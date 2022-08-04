// C Primer Plus
// Chapter 6 Exercise 15:

// Write a program that reads in a line of input and then prints the line in
// reverse order. You can store the input in an array of char; assume that the
// line is no longer than 255 characters. Recall that you can use scanf() with
// the %c specifier to read a character at a time from input and that the newline
// character (\n) is generated when you press the Enter key.
#include <stdio.h>
#include <string.h>

int main(void)
{
    int index = 0;
    char line[256];

    printf("Input line(less than characters): ");
    while (scanf("%c", &line[index]), line[index] != '\n')
        index++;

    // line by reverse order
    printf("Line by reverse order: ");
    for (; index >= 0;)
    {
        index--;
        printf("%c", line[index]);
    }
    printf("\n");

    return 0;

}