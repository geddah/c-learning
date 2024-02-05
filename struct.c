#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

struct employee_t {
	int id;
	char firstname[64];
	char lastname[64];
	float income;
	bool ismanager;
};


union myunion_u {
	int x;
	char c;
	short s;
};

int main() {


	struct employee_t employees[MAX_EMPLOYEES];
	for(int i = 0; i < MAX_EMPLOYEES; i++) {
		employees[i].income = 0;
		employees[i].ismanager = false;
	}
	
	printf("10th Employees income: %.2f\n", employees[9].income);
	
	union myunion_u u;
	u.x = 0xabcdef12;

	printf("%hx %hhx\n", u.s, u.c);
	printf("integer value: %x\n", u.x);

	return 0;

}
