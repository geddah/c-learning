#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t {
	int id;
	int income;
	bool staff;
};

int initialize_employee(struct employee_t *e){
	static int numEmployees = 0;
	numEmployees++;

	e->id=numEmployees;
	e->income = 200;
	e->staff = false;

	return numEmployees;
}

int main() {
	int n = 4;
	struct employee_t *employees = malloc(sizeof(struct employee_t) * n);
	if(employees == NULL) {
		printf("The allocator failed\n");
		return -1;
	}

	for(int i = 0; i < n; i++) {
		int id = initialize_employee(&employees[i]);
		printf("New employee, ID is %d\n", id);
	}
	
	printf("Employee id: %d\n", employees[3].id);
	printf("Employee income: %d\n", employees[3].income);

	free(employees);
	employees = NULL;

	return 0;

}
