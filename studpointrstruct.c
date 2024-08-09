#include<stdio.h>

typedef struct student{
    int id;
    char name[20];
    int marks;
} student;

void store(student*, int);

void main()
{
    int n;
    printf("Enter how many data entries you want to enter:\n");
    scanf("%d", &n);
    student StudArr[n];
    store(StudArr, n);
    
    // Display the stored data
    for(int i = 0; i < n; i++) {
        printf("Student %d: ID = %d, Name = %s\n, ", i + 1, StudArr[i].id, StudArr[i].name);
    }

    
}

void store(student* StudArr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter ID for student %d: ", i + 1);
        scanf("%d", &StudArr[i].id);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", StudArr[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%s", StudArr[i].marks);
    }
}
