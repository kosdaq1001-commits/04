#include <stdio.h>

int main(void)
 {
    int sec;

    printf("input the seconds: ");
    scanf("%i", &sec);

    printf("the time is : %i:%i:%i\n", sec/3600, (sec%3600)/60, sec%60);

    return 0;
}