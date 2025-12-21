#include <stdio.h>
struct Student {
 int rollNo;
 char name[50];
 int totalDays;
 int presentDays;
};
/* Function to calculate attendance percentage */
float calculatePercentage(int present, int total) {
 return ((float)present / total) * 100;
}
int main() {
 int n, i;
 printf("Enter number of students: ");
 scanf("%d", &n);
 struct Student s[n];
 // Input student details
 for (i = 0; i < n; i++) {
 printf("\nEnter details of student %d\n", i + 1);
 printf("Roll Number: ");
 scanf("%d", &s[i].rollNo);
 printf("Name: ");
 scanf(" %[^\n]", s[i].name);
 printf("Total Working Days: ");
 scanf("%d", &s[i].totalDays);
 printf("Total Present Days: ");
 scanf("%d", &s[i].presentDays);
 }
 // Display attendance report
 printf("\n------ Attendance Report ------\n");
 printf("Roll No\tName\t\tPresent/Total\tPercentage\n");
 for (i = 0; i < n; i++) {
 float percentage =
 calculatePercentage(s[i].presentDays, s[i].totalDays);
 printf("%d\t%s\t\t%d/%d\t\t%.2f%%\n",
 s[i].rollNo,
 s[i].name,
 s[i].presentDays,
 s[i].totalDays,
 percentage);
 }
 return 0;
}