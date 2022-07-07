#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>


#define NUMBEROFYEARS 2
#define NUMBEROFMONTHS 12

int questionOne() {
	float expenditure[NUMBEROFYEARS][NUMBEROFMONTHS];

	printf("Data Entry:\n");

	for (int i = 0; i < NUMBEROFYEARS; i++) {
		printf("For Year: %d ----- \n", i);
		for (int j = 0; j < NUMBEROFMONTHS; j++) {
			printf("For Month: %d - Expenditure:", j);
			scanf_s("%f", &expenditure[i][j]);
		}
	}


	printf("\t\t");
	for (int i = 0; i < NUMBEROFMONTHS; i++) {
		printf("%d \t", i);
	}
	printf("\n");

	for (int i = 0; i < NUMBEROFYEARS; i++) {
		printf("%d \t", i);
		float sum = 0;
		float num = 0;
		for (int j = 0; j < NUMBEROFMONTHS; j++) {
			printf("\t %.2f", expenditure[i][j]);
			sum += expenditure[i][j];
			num++;
		}
		printf("  Average: %f", sum / num);
		printf("\n");
	}


	return 0;

}


int question2() {
	char string[] = "idea without execution is worthless";
	char *stringPointer = string;

	for(int i = 0; i < strlen(string); i++) {
		if (*stringPointer != 'c') {
			stringPointer++;
		}
		else {
			printf("The position of 'c' is %d", i+1);
			break;
		}
	}
	return 0;
}

#define NOOFSTUDENTS 2

int question3() {
	typedef struct {
		char name[20];
		int marks;
	} Student;

	Student students[NOOFSTUDENTS];

	for (int i = 0; i < NOOFSTUDENTS; i++) {
		printf("\nEnter for Student %d: \n", i);
		printf("Name:");
		scanf("%s", students[i].name);
		printf("Marks:");
		scanf("%d", &students[i].marks);
	}


	for (int i = 0; i < NOOFSTUDENTS; i++) {
		printf("\n\n--Retrival--\n", i);
		printf("Name:");
		printf("%s\n", students[i].name);
		printf("Marks:");
		printf("%d\n", students[i].marks);
	}

	return 0;
}


int questionlastako() {
	typedef struct {
		char name[20];
		int rollNo;
		char address[20];
		char phoneNumber[20];
	} Student;

	Student students[NOOFSTUDENTS];
	Student studentsReadFromFile[NOOFSTUDENTS];
	FILE* file = fopen("record", "wb");

	for (int i = 0; i < NOOFSTUDENTS; i++) {
		printf("\nEnter for Student %d: \n", i);
		printf("Name:");
		scanf("%s", students[i].name);
		printf("RollNo:");
		scanf("%d", &students[i].rollNo);
		printf("Address:");
		scanf("%s", students[i].address);
		printf("phoneNumber:");
		scanf("%s", students[i].phoneNumber);
	}
	
	fwrite(&students, sizeof(Student), NOOFSTUDENTS, file);
	fclose(file);
	
	file = fopen("record", "rb");
	fread(&studentsReadFromFile, sizeof(Student), NOOFSTUDENTS, file);

	for (int i = 0; i < NOOFSTUDENTS; i++) {
		for (int j = i + 1; j < NOOFSTUDENTS + 1; j++) {
			if (strcmp(studentsReadFromFile[i].name, studentsReadFromFile[j].name) > 0) {
				Student temp = studentsReadFromFile[i];
				studentsReadFromFile[i] = studentsReadFromFile[j];
				studentsReadFromFile[j] = temp;
			}
		}
	}


	for (int i = 0; i < NOOFSTUDENTS; i++) {
		printf("\n\n--Retrival Of Info--\n", i);
		printf("Name:");
		printf("%s\n", studentsReadFromFile[i].name);
		printf("RollNo:");
		printf("%d\n", studentsReadFromFile[i].rollNo);
		printf("Address:");
		printf("%s\n", studentsReadFromFile[i].address);
		printf("phoneNumber:");
		printf("%s\n", studentsReadFromFile[i].phoneNumber);
	}


	return 0;
}

//question Number 1
