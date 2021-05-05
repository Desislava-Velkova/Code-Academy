"""
    Exercise: Override
"""

class Employee:
    
    def __init__(self, hours, employee_name):
        self.hours = hours
        self.employee_name = employee_name
        
    def daily_rate(self):
        amount = self.hours * 20
        
        return amount
    
class PartTimeEmployee(Employee):
    def daily_rate(self):
        amount = self.hours * 25
        
        return amount
    
first_employee = Employee(8, 'John')
second_employee = PartTimeEmployee(4, 'Ann')

print("The amount of", first_employee.employee_name, "salary is", first_employee.daily_rate())
print("The amount of", second_employee.employee_name, "salary is", second_employee.daily_rate())