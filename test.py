from abc import ABC, abstractmethod


class Employee(ABC):
    def __init__(self, employee_id, salary, work_time):
        self.employee_id = employee_id      # public variable
        self._salary = salary              # protected variable
        self.__work_time = work_time       # private variable

    def get_work_time(self):
        return self.__work_time

    @abstractmethod
    def calculate_salary(self):
        pass

    def display_details(self):
        print("Employee ID:", self.employee_id)
        print("Work Time:", self.get_work_time())
        print("Salary:", self.calculate_salary())
        print()


class FullTimeEmployee(Employee):
    def calculate_salary(self):
        if self.get_work_time().lower() == "full time":
            return self._salary
        else:
            return 0


class PartTimeEmployee(Employee):
    def calculate_salary(self):
        if self.get_work_time().lower() == "part time":
            return self._salary / 2
        else:
            return 0


full_time_employee = FullTimeEmployee(101, 50000, "full time")
part_time_employee = PartTimeEmployee(102, 50000, "part time")

full_time_employee.display_details()
part_time_employee.display_details()
