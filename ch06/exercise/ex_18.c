// C Primer Plus
// Chapter 6 Exercise 18:

// Professor Rabnud joined a social media group. Initially he had five friends.
// He noticed that his friend count grew in the following fashion. The first
// week one friend dropped out and the remaining number of friends doubled. The
// second week two friends dropped out and the remaining number of friends
// doubled. In general, in the Nth week, N friends dropped out and the
// remaining number doubled. Write a program that computes and displays the
// number of friends each week. The program should continue until the count
// exceeds Dunbar’s number. Dunbar’s number is a rough estimate of the maximum
// size of a cohesive social group in which each member knows every other
// member and how they relate to one another. Its approximate value is 150.
#include <stdio.h>
#define DUNBAR_NUMBER 150

int main(void)
{
    int friends = 5;
    int week;

    for (week = 1; friends < DUNBAR_NUMBER; week++)
    {
        friends -= week;
        friends *= 2;
        printf("Professor's friends: %d\n", friends);
    }
    printf("After %d weeks Professor's friends is over DUNBAR_NUMBER\n", week);

    return 0;
}
