#include<stdio.h>

struct iiuc
{
  char name[20];
  char id[15];
  float CGPA;
};

int main()
{
    struct iiuc var1;
    strcpy(var1.name,"CSE");
    strcpy(var1.id,"C1004003");
    var1.CGPA=3.50;

    printf("Student's Name: %s\n",var1.name);
    printf("Student's ID: %s\n",var1.id);
    printf("Student's CGPA: %.2f\n",var1.CGPA);

    return 0;
}
