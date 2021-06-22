#include<stdio.h>
void main(){
	int salary,hra,ta,gross_salary;
	printf("\nEnter basic salary: ");
	scanf("%d",&salary);
	hra = salary * 10 /100;
	ta = salary * 12 / 100;
	gross_salary = hra + ta + salary;
	printf("\nGross salary: %d",gross_salary);
}
