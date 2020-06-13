#include<stdio.h>
struct iiuc
{
  char name[20];
  char id[15];
  float CGPA;
}var1;
void info (struct iiuc var3)
{
    printf("Student's Name: %s\n",var3.name);
    printf("Student's ID: %s\n",var3.id);
    printf("Student's CGPA: %.2f\n",var3.CGPA);
}

int main()
{
    //struct iiuc var1;
    strcpy(var1.name,"CSE");
    strcpy(var1.id,"C1004003");
    var1.CGPA=3.50;

    info(var1);
    return 0;
}



