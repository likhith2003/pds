#include <stdio.h>
#include <stdlib.h>

// Struct defining joining date
struct date {
	int day, month, year;
};

// Struct defining an employee
struct employee {
	unsigned int code;
	char name[100];
	// float salary;

	struct date joiningdate;
};

void printEmployee(struct employee *pEmployee, int i)
{
	printf("Employee code: %u\n", (pEmployee+i)->code);
	printf("Employee name: %s\n", (pEmployee+i)->name);
	printf("Employee date of joining: %02d-%02d-%04d\n", (pEmployee+i)->joiningdate.day,(pEmployee+i)->joiningdate.month,(pEmployee+i)->joiningdate.year);
}
// Function to return comparison between two dates [passed in as struct date type].
// Returns -1 if left date (l) is older than right date (r)
// 			0 if l==r
// 			1 if left date (l) is newer than right date (r)
int datecmp(struct date *date1, struct date *date2)
{
	// int ret_val = 0;
	if (date1->year<date2->year)
		return -1;
	else if (date1->year>date2->year)
		return 1;
	else
	{
		if (date1->month<date2->month)
			return -1;
		else if (date1->month>date2->month)
			return 1;
		else
		{
			if (date1->day<date2->day)
				return -1;
			else if (date1->day>date2->day)
				return 1;
			else
			{
				return 0;
			}
		}
	}
}

// Return indices of seniormost and juniormost employee
void senjunemployee(struct employee *pEmployee, int n, int *senior, int *junior)
{
	// Just to be safe, initializing the senior, junior indices to 0
	// *senior = 0; *junior = 0;
	for (int i=1; i<n; i++)
	{
		if (datecmp(&((pEmployee+i)->joiningdate), &((pEmployee+*senior)->joiningdate)) == -1)
			*senior = i;
		if (datecmp(&((pEmployee+i)->joiningdate), &((pEmployee+*junior)->joiningdate)) == 1)
			*junior = i;
	}
}

// Print info about seniormost and juniormost persons. If more than 1 person qualify then print anyone

int main() {

	int n, flagProperDoJ;
	char strdateofjoining[20];
	struct employee *pEmployee;
	struct date *DJ;

	printf("Enter the number of employees n: ");
	scanf("%d", &n);

	pEmployee = (struct employee *)  malloc(n*sizeof(struct employee));

	for (int i=0; i<n; i++)
	{
		printf("Enter employee code of employee %d: ", i+1);
		scanf("%u", &((pEmployee+i)->code));
		printf("Enter employee name of employee %d: ", i+1);
		scanf("%s", (pEmployee+i)->name);
		printf("Enter date of joining of employee %d (day): ", i+1);
		scanf("%d", &((pEmployee+i)->joiningdate.day));
		printf("Enter date of joining of employee %d (month): ", i+1);
		scanf("%d", &((pEmployee+i)->joiningdate.month));
		printf("Enter date of joining of employee %d (year): ", i+1);
		scanf("%d", &((pEmployee+i)->joiningdate.year));
	}
	// Get the indices of employees who are seniormost and juniormost
	int senior=0, junior=0;
	senjunemployee(pEmployee, n, &senior, &junior);
	// Print the employee information who are seniormost and juniormost
	printf("The employee information of the seniormost employee.\n=====\n");
	printEmployee(pEmployee,senior);
	printf("=====\n");
	printf("The employee information of the juniormost employee.\n=====\n");
	printEmployee(pEmployee,junior);
	printf("=====\n");

	return 0;
}