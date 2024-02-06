#include <stdio.h>
#include <stdbool.h>

struct employee_t {
	int id;
	int income;
	bool staff;
};

void initialize_employee(struct employee_t *employee){
	employee->id = 1;
	employee->income = 100;
	employee->staff = false;
}

int main() {
	struct employee_t Ralph;

	initialize_employee(&Ralph);

	printf("Employee id: %d\n", Ralph.id);
	printf("Employee income: %d\n", Ralph.income);

	return 0;
}
