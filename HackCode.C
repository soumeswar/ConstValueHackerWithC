#include <stdio.h>

int main() {
    //hack the const value

    
    const int tryChangingMe = 1000;
    printf("Const Value: %i",tryChangingMe);
    //using pointer to update the const value
    int *ptr;
    //assigning pointer to the const memory address
    ptr = &tryChangingMe;
    *ptr = 500; //assigning pointer memory address to 500 int
    printf("\nconst value changed to: %i", tryChangingMe);
    int x;
    scanf("%d", x);
}
