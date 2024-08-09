//Create a structure Time with data members as hrs, min, sec. 
//Accept the values of all these members from user and display them. Also perform addition of two time variables 
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to covert 
//the given time into sec.
#include <stdio.h>

typedef struct Time {
    int hrs;
    int min;
    int sec;
}Time;

void main() {
    Time t1, t2;
    
    printf("Enter the first time:\n");
    inputTime(&t1);
    
    printf("Enter the second time:\n");
    inputTime(&t2);

   int sum =addTime(t1 , t2);
    
    printf("\nFirst Time: ");
    displayTime(t1);
    printf("Second Time: ");
    displayTime(t2);
    printf("Sum of Times: ");
    displayTime(sum);
    
    int totalSeconds = convertToSeconds(sum);
    printf("Total time in seconds: %d\n", totalSeconds);
    
    
}
  Time addTime( Time t1,  Time t2) {
     Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.sec %= 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;
    result.min %= 60;
    return result;
}

// Function to input time
void inputTime(struct Time *t) {
    printf("Enter hours: ");
    scanf("%d", &t->hrs);
    printf("Enter minutes: ");
    scanf("%d", &t->min);
    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}

// Function to display time
void displayTime(Time t) {
    printf("Time: %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

// Function to add two times

// Function to convert time to seconds
int convertToSeconds(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}


