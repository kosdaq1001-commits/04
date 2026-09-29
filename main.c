#include <stdio.h>

int main(void)
 {
    int sec;

    printf("input the number of seconds: ");
    scanf("%i", &sec);

    printf("time is: %i:%i\n", sec/60,sec%60);
    
    return 0;
}