#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int id;
    string name;
    string department;
    double salary;
public:
    Employee() {
        id = 0; 
        salary = 0.0;
    }
    void setEmployeeData(int empId, string empName, string empDept, double empSalary) {
        id = empId;
        name = empName;
        department = empDept;
        salary = empSalary;
    }
    void displayEmployeeDetails() {
        if (id != 0) {  
            cout << "ID: " << id << "\n";
            cout << "Name: " << name << "\n";
            cout << "Department: " << department << "\n";
            cout << "Salary: $" << salary << "\n";
            cout << "------------------------" << endl;
        }
    } 
    int getEmployeeId() {
        return id;
    }
    void removeEmployee() {
        id = 0;  
        name = "";
        department = "";
        salary = 0.0;
    }
};
class EmployeeDatabase {
private:
    Employee employees[100];  
    int employeeCount;      
public:
    EmployeeDatabase() {
        employeeCount = 0;  
    }
    void addEmployee(int id, string name, string dept, double salary) {
        if (employeeCount < 100) {
            employees[employeeCount].setEmployeeData(id, name, dept, salary);
            employeeCount++;
            cout << "Employee added successfully.\n";
        } else {
            cout << "Employee database is full.\n";
        }
    }
    void displayAllEmployees() {
        if (employeeCount == 0) {
            cout << "No employees to display.\n";
        } else {
            for (int i = 0; i < employeeCount; i++) {
                if (employees[i].getEmployeeId() != 0) {
                    employees[i].displayEmployeeDetails();
                }
            }
        }
    }
    void searchEmployeeById(int id) {
        for (int i = 0; i < employeeCount; i++) {
            if (employees[i].getEmployeeId() == id) {
                cout << "Employee found:\n";
                employees[i].displayEmployeeDetails();
                return;
            }
        }
        cout << "Employee with ID " << id << " not found.\n";
    }
    void removeEmployeeById(int id) {
        for (int i = 0; i < employeeCount; i++) {
            if (employees[i].getEmployeeId() == id) {
                employees[i].removeEmployee();
                cout << "Employee with ID " << id << " has been removed.\n";
                return;
            }
        }
        cout << "Employee with ID " << id << " not found.\n";
    }
};
int main() {
    EmployeeDatabase database;
    int choice, id;
    string name, dept;
    double salary;
    while (true) {
        cout << "1. Add Employee\n2. Display All Employees\n3. Search Employee by ID\n4. Remove Employee by ID\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> id;
                cout << "Enter Employee Name: ";
                cin.ignore(); 
                getline(cin, name);
                cout << "Enter Department: ";
                getline(cin, dept);
                cout << "Enter Salary: ";
                cin >> salary;
                database.addEmployee(id, name, dept, salary);
                break;
            case 2:
                cout << "Employee List:\n";
                database.displayAllEmployees();
                break;
            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> id;
                database.searchEmployeeById(id);
                break;
            case 4:
                cout << "Enter Employee ID to remove: ";
                cin >> id;
                database.removeEmployeeById(id);
                break;
            case 5:
               
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
