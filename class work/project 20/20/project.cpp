#include<iostream>
using namespace std;
typedef struct Employee
{

	int empID;
	string empName;
};
typedef struct period
{
	int id;
	int days;
};
typedef struct salary {
	int id;
	float basePay;
	float Allowance;
	float variable;
};
int CalculateSalary(salary s, period p)
{
	return (s.basePay + s.Allowance + s.variable) * p.days;
}
void inputData(Employee emp[], period per[], salary sal[], int n) {
	for (int i = 0;i <= n;i++) {
		cout << "Enter the details";
		cout << "ID:";
		cin >> emp[i].empID;
		cout << "Name:";
		cin >> emp[i].empName;
		per[i].id = emp[i].empID;
		cout << "Working days";
		cin >> per[i].days;
		sal[i].id = emp[i].empID;
		cout << "Base Salary";
		cin >> sal[i].basePay;
		cout << "Allowance";
		cin >> sal[i].Allowance;
		cout << "Variable pay";
		cin >> sal[i].variable;

	}
	void displaySalary(Employee emp[],salary[],period per[],int n);
	{
		cout << "Salary Report";
		for (int i = 0;i <= n;i++)
		{
			int total = CalculateSalary(sal[i], per[i]);
			cout << "Employee ID " << emp[i].empID;
			cout << "Employee Name" << emp[i].empName;
			cout << "Worked day" << per[i].days;
		      

		}
		



	}
}