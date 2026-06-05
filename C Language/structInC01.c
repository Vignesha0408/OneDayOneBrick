#include <stdio.h>
#include<string.h>
struct student{
    int age;
    char name[25];
    int marks;
};
int main() {
    struct student s1;
    s1.age=18;
    //scanf("%s",s1.name);
    strcpy(s1.name,"Vignesh");
    s1.marks=52;
    printf("Name:%d\nAge:%s\nMarks:%d",s1.age,s1.name,s1.marks);
    return 0;
}